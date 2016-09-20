#include<bits/stdc++.h>
using namespace std;
int main(){
    int cas=1;
    string s;
    while(cin>>s, s!="end"){
        vector<stack<char> > st;
        int l=s.length();
        for(int i=0; i<l; i++){
            bool inserted=false;
            for(int j=0; j<st.size(); j++){
                if(st[j].top()>=s[i]){
                    st[j].push(s[i]);
                    inserted=true;
                    break;
                }
            }
            if(!inserted){
                stack<char> tmp;
                tmp.push(s[i]);
                st.push_back(tmp);
            }
        }
        cout<<"Case "<<cas<<": "<<st.size()<<endl;
        cas++;
    }
}
