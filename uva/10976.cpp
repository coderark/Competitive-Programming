#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    vector<pair<int, int> > arr;
    while(cin>>k){
        arr.clear();
        int c=0;
        for(int i=k+1; (k*i)/(float)(i-k)>=i; i++){
            if((k*i)%(i-k)==0){
                pair<int, int> tmp((k*i)/(i-k), i);
                arr.push_back(tmp);
                c++;
            }
        }
        cout<<c<<endl;
        for(int i=0; i<c; i++){
            printf("1/%d = 1/%d + 1/%d\n", k, arr[i].first, arr[i].second);
        }
    }
}
