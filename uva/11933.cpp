#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n, n){
        bitset<32> b(n), a(n);
        int c=1;
        for(int i=0; i<32; i++){
            if(b[i]==1){
                if(c%2==0){
                    a[i]=0;
                }
                c++;
            }
        }
        b^=a;
        cout<<a.to_ulong()<<" "<<b.to_ulong()<<endl;
    }
}
