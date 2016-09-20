#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, b, h, w;
    while(cin >> n >> b >> h >> w){
        int minb=(1<<30);
        while(h--){
            int cost, tmp;
            scanf("%d", &cost);
                for(int i=0; i<w; i++){
                    scanf("%d", &tmp);
                    if(tmp>=n && n*cost<minb){
                        minb=n*cost;
                    }
                }
        }
        if(minb<=b){
            printf("%d\n", minb);
        }
        else{
            printf("stay home\n");
        }
    }
}
