#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    while(cin>>N){
        int numv=(1<<N);
        vector<int> W(numv), P(numv);
        for(int i=0; i<numv; i++){
            cin>>W[i];
        }
        for(int i=0; i<numv; i++){
            int pot=0;
            for(int j=0; j<N; j++){
                pot+=W[i^(1<<j)];
            }
            P[i]=pot;
        }
        int maxpot=0;
        for(int i=0; i<numv; i++){
            for(int j=0; j<N; j++){
                int tmp=P[i]+P[i^(1<<j)];
                if(tmp>maxpot){
                    maxpot=tmp;
                }
            }
        }
        cout<<maxpot<<endl;
    }
}
