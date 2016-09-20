#include<bits/stdc++.h>
using namespace std;

bool isBipartite(vector<vector<int> >& adm, vector<bool>& visited, int src){
    int n=adm.size()-1;
    vector<int> color(n+1, -1);
    queue<int> q;
    q.push(src);
    color[src]=1;
    while(!q.empty()){
        int v=q.front();
        visited[v]=true;
        q.pop();
        for(int i=0; i<adm[v].size(); i++){
            if(color[adm[v][i]]==-1){
                color[adm[v][i]]=1-color[v];
                q.push(adm[v][i]);
            }
            else if(color[adm[v][i]]==color[v]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d%d", &n, &m);
        vector<vector<bool> > mat(n+1, vector<bool>(n+1));
        while(m--){
            int a, b;
            scanf("%d%d", &a, &b);
            mat[a][b]=true;
            mat[b][a]=true;
        }
        vector<vector<int> > adm;
        adm.resize(n+1);
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(!mat[i][j] && i!=j){
                    adm[i].push_back(j);
                }
            }
        }
        vector<bool> visited(n+1, false);
        bool flag=true;
        for(int i=1; i<=n; i++){
            if(!visited[i]){
                if(!isBipartite(adm, visited, i)){
                    flag=false;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
