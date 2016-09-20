#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int prev, tmp;
        cin>>prev;
        vector<bool> flag(n, false);
        bool ans=true;
        for(int i=1; i<n; i++){
            cin>>tmp;
            if(abs(prev-tmp)<=n-1){
                if(flag[abs(prev-tmp)]){
                    ans=false;
                }
                else{
                    flag[abs(prev-tmp)]=true;
                }
            }
            else{
                ans=false;
            }
            prev=tmp;
        }
        if(ans){
            cout<<"Jolly\n";
        }
        else{
            cout<<"Not jolly\n";
        }
    }
    return 0;
}
