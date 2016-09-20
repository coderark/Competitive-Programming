#include<bits/stdc++.h>
using namespace std;

int main(){
    int f, r;
    while(cin>>f, f){
        cin>>r;
        vector<int> fd(f), bk(r);
        vector<double> dr(f*r);
        for(int i=0; i<f; i++){
            cin>>fd[i];
        }
        for(int i=0; i<r; i++){
            cin>>bk[i];
        }
        for(int i=0; i<f; i++){
            for(int j=0; j<r; j++){
                dr[i*r+j]=bk[j]/(double)fd[i];
            }
        }
        sort(dr.begin(), dr.end());
        double maxd=-1.0;
        for(int i=1; i<f*r; i++){
            if(dr[i]/dr[i-1]>maxd){
                maxd=dr[i]/dr[i-1];
            }
        }

        printf("%.2f\n", maxd);
    }
}
