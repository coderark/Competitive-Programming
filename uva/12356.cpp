#include<bits/stdc++.h>
using namespace std;

int main(){
    int s, b;
    scanf("%d%d", &s, &b);
    while(s!=0 && b!=0){
        vector<int> left(s+1), right(s+1);
        left[0]=0;
        right[0]=0;
        for(int i=1; i<=s; i++){
            left[i]=i-1;
            right[i]=i+1;
        }
        for(int i=1; i<=b; i++){
            int l, r, r1, r2;
            scanf("%d%d", &l, &r);
            r1=left[l];
            r2=right[r];
            left[right[r]]=left[l];
            right[left[l]]=right[r];
            if(r1==0 && r2==s+1){
                printf("* *\n");
            }
            else if(r1==0){
                printf("* %d\n", r2);
            }
            else if(r2==s+1){
                printf("%d *\n", r1);
            }
            else{
                printf("%d %d\n", r1, r2);
            }
        }
        printf("-\n");
        scanf("%d%d", &s, &b);
    }
}
