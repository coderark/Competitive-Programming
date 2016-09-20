#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<int> arr(n), ind;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            if(str[i]=='1'){
                ind.push_back(i);
            }
        }
        int ans=arr[ind[0]]-arr[0];
        for(int i=1; i<ind.size(); i++){
            int diff=arr[ind[i]]-arr[ind[i-1]], maxd=0;
            for(int j=ind[i-1]; j<ind[i]; j++){
                int tmp=arr[j+1]-arr[j];
                if(tmp>maxd){
                    maxd=tmp;
                }
            }
            ans+=diff-maxd;
        }
        ans+=arr[n-1]-arr[ind[ind.size()-1]];
        cout<<ans<<endl;
    }
}
