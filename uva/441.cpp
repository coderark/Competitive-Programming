#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, cas=0;
    while(cin>>k, k){
        if(cas++){
            cout<<endl;
        }
        vector<int> S(k);
        for(int i=0; i<k; i++){
            cin>>S[i];
        }
        for(int i=0; i<k; i++){
            for(int j=i+1; j<k; j++){
                for(int l=j+1; l<k; l++){
                    for(int m=l+1; m<k; m++){
                        for(int n=m+1; n<k; n++){
                            for(int o=n+1; o<k; o++){
                                printf("%d %d %d %d %d %d\n", S[i], S[j], S[l], S[m], S[n], S[o]);
                            }
                        }
                    }
                }
            }
        }
    }
}
