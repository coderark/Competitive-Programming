#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > arr(5, vector<int>(5, 0));
vector<vector<int> > precal(5, vector<int>(5, 0));
int dist(int i, int j, int k, int l, int m){
    int c=0;
    c+=precal[i/5][i%5];
    c+=precal[j/5][j%5];
    c+=precal[k/5][k%5];
    c+=precal[l/5][l%5];
    c+=precal[m/5][m%5];
    return c;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        arr.clear();
        precal.clear();
        int n;
        cin>>n;
        vector<vector<int> > arr(5, vector<int>(5, 0));
        vector<vector<int> > precal(5, vector<int>(5, 0));
        while(n--){
            int x, y, v;
            cin>>x>>y>>v;
            arr[x][y]=v;
        }
        for(int k=0; k<5; k++){
            for(int l=0; l<5; l++){
                cout<<arr[k][l]<<" ";
            }
            cout<<endl;
        }
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                int mind=(1<<30);
                for(int k=0; k<5; k++){
                    for(int l=0; l<5; l++){
                        int d=arr[k][l]*(abs(i-k)+abs(j-l));
                        if(d<mind){
                            mind=d;
                        }
                    }
                }
                precal[i][j]=mind;
            }
        }
        for(int k=0; k<5; k++){
            for(int l=0; l<5; l++){
                cout<<precal[k][l]<<" ";
            }
            cout<<endl;
        }

        int mind=(1<<30);
        vector<int> ans(5);
        for(int i=0; i<25; i++){
            for(int j=i+1; j<25; j++){
                for(int k=j+1; k<25; k++){
                    for(int l=k+1; l<25; l++){
                        for(int m=l+1; m<25; m++){
                                int d=0;
                                d+=precal[i/5][i%5];
                                d+=precal[j/5][j%5];
                                d+=precal[k/5][k%5];
                                d+=precal[l/5][l%5];
                                d+=precal[m/5][m%5];
                            if(d<mind){
                                ans[0]=i;
                                ans[1]=j;
                                ans[2]=k;
                                ans[3]=l;
                                ans[4]=m;
                                mind=d;
                            }
                        }
                    }
                }
            }
        }
        for(int i=0; i<5; i++){
            if(i==4){
                cout<<ans[i]<<endl;
                break;
            }
            cout<<ans[i]<<" ";
        }
    }
}
