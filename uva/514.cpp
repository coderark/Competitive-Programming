#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n, n){
        int c, val=1, a=n;
        bool flag=true;
        stack<int> st, empty;
        while(cin>>c, c && a--){
            if(flag){
                if(c==val){
                    val++;
                }
                else if(c<val){
                    if(!st.empty() && st.top()==c){
                        st.pop();
                    }
                    else{
                        flag=false;
                    }
                }
                else{
                    while(c>val){
                        st.push(val++);
                    }
                    val++;
                }
            }
            if(a==0){
                if(flag){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
                a=n;
                flag=true;
                swap(st, empty);
                val=1;
            }
        }
        cout<<endl;
    }
}
