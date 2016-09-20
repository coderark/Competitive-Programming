#include<bits/stdc++.h>
using namespace std;

int main(){
    int ld, n;
    double emi, cost, dep[101];
    while(scanf("%d %lf %lf %d", &ld, &emi, &cost, &n), ld>=0){
        while(n--){
            int a;
            double b;
            cin>>a>>b;
            for(int i=a; i<101; i++){
                dep[i]=b;
            }
        }
        double bal=(cost+emi)*(1-dep[0]);
        double ldif=cost/ld;
        int m=0;
        while(bal<cost){
            bal=bal*(1-dep[++m]);
            cost-=ldif;
        }
        if(m==1){
            printf("%d month\n", 1);
        }
        else{
            printf("%d months\n", m);
        }
    }
}
