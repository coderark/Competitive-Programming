#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, sm=0, cp;
        bool flag=true, full=false;
        cin>>n;
        cp=n;
        while(cp--){
            int tmp;
            cin>>tmp;
            if(tmp<=2){
                flag=false;
            }
            if(tmp==5){
                full=true;
            }
            sm+=tmp;
        }
        if(sm/(double)n<4.0){
            flag=false;
        }
        if(flag && full){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}
