#include<bits/stdc++.h>
using namespace std;

int main(){
    int s[5], t[5], c=0;
    for(int i=0; i<5; i++){ scanf("%d", &s[i]);}
    for(int i=0; i<5; i++){
        scanf("%d", &t[i]);
        int tmp=(s[i]-t[i]+10)%10;
        if(tmp<5){
            c+=tmp;
        }
        else{
            c+=10-tmp;
        }
    }
    printf("%d\n", c);
}
