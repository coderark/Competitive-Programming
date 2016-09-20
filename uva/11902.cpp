#include<bits/stdc++.h>
using namespace std;

bool reach(vector<vector<int> >& adjlt, vector<bool>& visited, int u, int v){
    visited[u]=true;
    if(visited[v]){
        return true;
    }
    bool ans=false;
    for(int i=0; i<adjlt[u].size(); i++){
        int tmp=adjlt[u][i];
        if(tmp==v){
            visited[v]=true;
            return true;
        }
        if(!visited[tmp]){
            ans=ans || reach(adjlt, visited, tmp, v);
            if(ans){
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    int t, cas=0;
    cin>>t;
    while(t--){
        cas++;
        int n;
        cin>>n;
        vector<vector<bool> > adjmat(n, vector<bool>(n, false)), ans(n, vector<bool>(n, false));
        vector<vector<int> > adjlt;
        adjlt.resize(n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int tmp;
                cin>>tmp;
                if(tmp){
                    adjlt[i].push_back(j);
                    adjmat[i][j]=true;
                }
            }
        }
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<adjlt[i].size(); j++){
        //         cout<<adjlt[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        vector<bool> visited(n, false), reachable(n, false);
        for(int i=0; i<n; i++){
            if(reach(adjlt, visited, 0, i)){
                reachable[i]=true;
            }
            fill(visited.begin(), visited.end(), false);
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j || i==0){
                    ans[i][j]=reachable[i];
                    continue;
                }
                visited[i]=true;
                ans[i][j]=reachable[j] && !reach(adjlt, visited, 0, j);
                fill(visited.begin(), visited.end(), false);
            }
        }
        cout<<"Case "<<cas<<":"<<endl;
        for(int i=0; i<n; i++){
            cout<<"+";
            for(int k=0; k<2*n-1; k++){
                cout<<"-";
            }
            cout<<"+\n";
            for(int j=0; j<n; j++){
                if(ans[i][j]){
                    cout<<"|Y";
                }
                else{
                    cout<<"|N";
                }
            }
            cout<<"|\n";
        }
        cout<<"+";
        for(int k=0; k<2*n-1; k++){
            cout<<"-";
        }
        cout<<"+\n";
    }
}
