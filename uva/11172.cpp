#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long a, b;
        scanf("%lld%lld", &a, &b);
        if(a>b){
            printf("%c\n", '>');
        }
        else if(a<b){
            printf("%c\n", '<');
        }
        else{
            printf("%c\n", '=');
        }
    }
}
