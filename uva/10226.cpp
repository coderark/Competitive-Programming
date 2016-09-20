#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string inp;
    cin>>t;
    getline(cin, inp);
    getline(cin, inp);
    while(t--){
        string str;
        map<string, int> mp;
        int c=0;
        while(getline(cin, str)){
            if(str==""){
                break;
            }
            if(mp.find(str)!=mp.end()){
                mp[str]++;
            }
            else{
                mp[str]=1;
            }
            c++;
        }
        for(map<string, int>::iterator it=mp.begin(); it!=mp.end(); it++){
            cout<<it->first<<" ";
            printf("%.4f\n", (it->second)*100.0/c);
        }
        if(t){
            cout<<endl;
        }
    }
}
