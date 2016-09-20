#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    while(cin>>m){
        vector<vector<int> > arr(m, vector<int>(m));
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                char c;
                cin>>c;
                arr[i][j]=c-'0';
                // arr[i][j]=j;
                // cout<<arr[i][j];
            }
            //cout<<endl;
        }
        int ans=0;
        for(int i=1; i<=2*m-1 && !ans; i++){
            for(int j=0; j<(i<=m?i:2*m-i); j++){
                int x=i<=m?j:m-j-1, y=i<=m?i-j-1:j+i%m;
                if(arr[x][y]==3){
                        ans=i-1;
                        break;
                }
                //cout<<arr[x][y];
            }
            //cout<<endl;
        }
        cout<<ans<<endl;
    }
}
