#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(1000000, 0);
        string str;
        getline(cin, str);
        while(n--){
            char c;
            int val;
            stringstream ss;
            getline(cin, str);
            ss<<str;
            c=ss.get();
            ss>>val;
            arr[(int)c]=val;
        }
        int l;
        string line;
        cin>>l;
        long long tot=0;
        getline(cin, line);
        while(l--){
            getline(cin, line);
            for(int i=0, sz=line.size(); i<sz; i++){
                tot+=arr[(int)line[i]];
            }
        }
        printf("%.2f$\n", tot/100.0);
    }
}
