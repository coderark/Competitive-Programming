#include<bits/stdc++.h>
using namespace std;

int calc(vector<string> big, vector<string> small){
    int N=big.size(), n=small.size();
    int ans=0;
    for(int i=0; i<N-n+1; i++){
        for(int j=0; j<N-n+1; j++){
            int flag=1;
            for(int k=0; k<n; k++){
                //cout<<big[i].substr(j, n)<<" "<<small[k]<<endl;
                if(big[i+k].compare(j, n, small[k])!=0){
                    flag=0;
                    break;
                }
            }
            ans+=flag;
            //cout<<"Hey "<<ans<<endl;
        }
    }
    return ans;
}

vector<string> rot(vector<string> small){
    int n=small[0].size();
    vector<string> smallr(n);
    for(int i=0; i<n; i++){
        string str="";
        for(int j=0; j<n; j++){
            str+=small[n-j-1][i];
        }
        //string str=string(arr);
        smallr[i]=str;
    }
    return smallr;
}

int main(){
    int N, n;
    scanf("%d%d", &N, &n);
    while(N!=0 && n!=0){
        vector<string> big(N), small(n);
        for(int i=0; i<N; i++){
            cin>>big[i];
        }
        for(int i=0; i<n; i++){
            cin>>small[i];
        }
        vector<int> ans(4, 0);
        for(int i=0; i<4; i++){
            ans[i]+=calc(big, small);
            //cout<<"Hey "<<ans[i]<<endl;
            small=rot(small);
            // for(int i=0; i<n; i++){
            //     cout<<small[i]<<endl;
            // }
        }
        for(int i=0; i<4; i++){
            cout<<ans[i];
            if(i!=3){
                cout<<" ";
            }
        }
        cout<<endl;
        scanf("%d%d", &N, &n);

    }
}
