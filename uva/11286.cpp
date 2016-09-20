#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(cin>>t, t){
        map<string, int> mp;
        for(int i=0; i<t; i++){
            bitset<400> st;
            for(int j=0; j<5; j++){
                int tmp;
                cin>>tmp;
                st.set(tmp-100);
            }
            string str=st.to_string();
            if(mp.find(str)==mp.end()){
                mp[str]=1;
            }
            else{
                mp[str]++;
            }
        }
        int maxp=0, tot=0;
        for(map<string, int>::iterator it=mp.begin(); it!=mp.end(); it++){
            if(it->second>maxp){
                maxp=it->second;
                tot=maxp;
            }
            else if(it->second==maxp){
                tot+=maxp;
            }
        }
        cout<<tot<<endl;
    }
}
