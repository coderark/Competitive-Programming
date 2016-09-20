#include<bits/stdc++.h>
using namespace std;

struct car{
    string name;
    int l, h;
};

bool comp(car a, car b){
    return a.l<b.l;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int d, q;
        cin>>d;
        vector<car> data(d);
        for(int i=0; i<d; i++){
            cin>>data[i].name>>data[i].l>>data[i].h;
        }
        sort(data.begin(), data.end(), comp);
        cin>>q;
        while(q--){
            int p, c=0;
            cin>>p;
            bool flag=false;
            string ans="UNDETERMINED";
            for(int i=0; i<d && c<2; i++){
                if(data[i].l<=p){
                    if(data[i].h>=p){
                        flag=(c==0);
                        ans=(flag?data[i].name:"UNDETERMINED");
                        c++;
                    }
                }
                else{
                    break;
                }
            }
            cout<<ans<<endl;
        }
        if(t){
            cout<<endl;
        }
    }
}
