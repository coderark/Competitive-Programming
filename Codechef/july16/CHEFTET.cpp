#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long s=0, ans=-1;
        cin>>n;
        vector<int> a(n), b(n+2, 0);
        for(int i=1; i<=n; i++){
            cin>>b[i];
            s+=b[i];
        }
        for(int i=0; i<n; i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s%n==0){
            ans=s/n;
        }
        for(int i=1; i<=n && ans!=-1; i++){
            long long dif=ans-a[i-1];
            if(dif==0){
                continue;
            }
            else if(dif<0){
                ans=-1;
                break;
            }
            else if(dif==b[i-1]){
                b[i-1]=0;
            }
            else if(dif==b[i]){
                b[i]=0;
            }
            else if(dif==b[i+1]){
                b[i+1]=0;
            }
            else if(dif==b[i-1]+b[i]){
                b[i-1]=0;
                b[i]=0;
            }
            else if(dif==b[i-1]+b[i+1]){
                b[i-1]=0;
                b[i+1]=0;
            }
            else if(dif==b[i+1]+b[i]){
                b[i+1]=0;
                b[i]=0;
            }
            else if(dif==b[i-1]+b[i]+b[i+1]){
                b[i-1]=0;
                b[i]=0;
                b[i+1]=0;
            }
            else{
                ans=-1;
                break;
            }
        }
        for(int i=1; i<=n; i++){
            if(b[i]!=0){
                ans=-1;
            }
        }
        cout<<ans<<endl;
    }
}
