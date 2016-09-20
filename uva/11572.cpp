#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_set<int> st;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int maxd=0;
        for(int i=0; i<n; i++){
            int prev=-1, numd=0;
            for(int j=i; j<n; j++){
                if(st.find(arr[j])==st.end()){
                    numd++;
                }
                else{
                    st.clear();
                    if(numd>maxd){
                        maxd=numd;
                    }
                    numd=1;
                }
                st.insert(arr[j]);
                prev=arr[j];
            }
            st.clear();
        }
        cout<<maxd<<endl;
    }
}
