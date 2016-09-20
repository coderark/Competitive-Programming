#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, s;
    cin>>t;
    int i=1;
    while(i<=t){
        int maxs=0;
        cin>>s;
        while(s--){
            int tmp;
            cin>>tmp;
            if(tmp>maxs){
                maxs=tmp;
            }
        }
        printf("Case %d: %d\n", i, maxs);
        i++;
    }
}
