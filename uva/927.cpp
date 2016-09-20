#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int deg, d, k, tmp=0, j;
        cin>>deg;
        vector<int> arr(deg+1);
        for(int i=0; i<=deg; i++){
            cin>>arr[i];
        }
        cin>>d>>k;
        for(j=1; tmp<k; j++){
            tmp+=j*d;
        }
        j--;
        unsigned long long ans=0;
        for(int i=0; i<=deg; i++){
            ans+=arr[i]*pow(j, i);
        }
        cout<<ans<<endl;
    }
}
