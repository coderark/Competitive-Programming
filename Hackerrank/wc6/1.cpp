#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, chg, kval;
    scanf("%d%d", &n, &k);
    int s=0, c=0;
    while(c<n){
        int tmp;
        scanf("%d", &tmp);
        if(c==k){
            kval=tmp;
        }
        s+=tmp;
        c++;
    }
    scanf("%d", &chg);
    int act=(s-kval)/2;
    if(act==chg){
        printf("Bon Appetit\n");
    }
    else{
        printf("%d\n", chg-act);
    }

}
