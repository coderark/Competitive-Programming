#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > trans(vector<vector<int> >& g){
    vector<vector<int> > f(3, vector<int>(3));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int cell=0;
            if(i-1>=0){
                cell+=g[i-1][j];
            }
            if(j-1>=0){
                cell+=g[i][j-1];
            }
            if(i+1<3){
                cell+=g[i+1][j];
            }
            if(j+1<3){
                cell+=g[i][j+1];
            }
            f[i][j]=cell%2;
        }
    }
    return f;
}

bool check(vector<vector<int> >& f){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(f[i][j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int t;
    string inp;
    cin>>t;
    getline(cin, inp);
    while(t--){
        getline(cin, inp);
        vector<string> sar(3);
        for(int i=0; i<3; i++){
            cin>>sar[i];
        }
        vector<vector<int> > g(3, vector<int>(3)), f(3, vector<int>(3));
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                g[i][j]=sar[i][j]-'0';
                //cout<<g[i][j]<<" ";
            }
            //cout<<endl;
        }
        int ans=0;
        if(check(g)){
            ans=-1;
        }
        else{
            f=trans(g);
            while(!check(f)){
                ans++;
                f=trans(f);
            }
        }
        cout<<ans<<endl;
    }
}
