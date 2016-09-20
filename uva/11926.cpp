#include<bits/stdc++.h>
using namespace std;

bool setr(bitset<1000001>& cal, int l, int r){
    for(int i=l; i<r; i++){
        if(cal.test(i)){
            return true;
        }
        else{
            cal.set(i);
        }
    }
    return false;
}

int main(){
    int n, m;
    while(cin>>n>>m){
        if(n==0 && m==0){
            break;
        }
        bitset<1000001> cal;
        bool conflict=false;
        for(int i=0; i<n; i++){
            int l, r;
            cin>>l>>r;
            if(!conflict){
                conflict=setr(cal, l, r);
            }
        }
        for(int i=0; i<m; i++){
            int l, r, rep;
            cin>>l>>r>>rep;
            while(r<=1000000 && !conflict){
                conflict=setr(cal, l, r);
                l+=rep;
                r+=rep;
            }
            if(l<=1000000 && r>1000000){
                if(!conflict){
                    conflict=setr(cal, l, 1000000);
                }
            }
        }
        if(conflict){
            cout<<"CONFLICT"<<endl;
        }
        else{
            cout<<"NO CONFLICT"<<endl;
        }
    }
}
