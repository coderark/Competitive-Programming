#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, cas=1;
    while(cin>>n, n){
        int sz=(n*n-n)/2;
        vector<int> arr(n), sarr(sz);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int m;
        cin>>m;
        printf("Case %d:\n", cas++);
        while(m--){
            int q, ans, mind=(1<<30);
            cin>>q;
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    int tmp=arr[i]+arr[j];
                    if(abs(q-tmp)<mind){
                        mind=abs(q-tmp);
                        ans=tmp;
                    }
                }
            }
            printf("Closest sum to %d is %d.\n", q, ans);
        }
    }
}
