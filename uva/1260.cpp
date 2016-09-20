#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, c=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            for(int j=0; j<i; j++){
                if(arr[j]<=arr[i]){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}
