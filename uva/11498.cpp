#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(scanf("%d", &t), t){
        int ox, oy;
        scanf("%d%d", &ox, &oy);
        while(t--){
            int x, y;
            scanf("%d%d", &x, &y);
            if(x==ox || y==oy){
                printf("divisa\n");
            }
            else if(x<ox){
                if(y<oy){
                    printf("SO\n");
                }
                else{
                    printf("NO\n");
                }
            }
            else{
                if(y<oy){
                    printf("SE\n");
                }
                else{
                    printf("NE\n");
                }
            }
        }
    }
}
