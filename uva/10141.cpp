#include<bits/stdc++.h>
using namespace std;

int main(){
    string inp;
    int n, p, i=1, counter=0;
    while(cin>>n>>p){
        if(n==0){break;}
        if (counter > 0)
			cout << endl;
		counter++;
        getline(cin, inp);
        while(n--){
            getline(cin, inp);
        }
        int maxc=0;
        double minp=10000000000.0;
        string pname;
        while(p--){
            string tmp;
            getline(cin, tmp);
            int r;
            double d;
            cin>>d>>r;
            getline(cin, inp);
            for(int i=0; i<r; i++){
                getline(cin, inp);
            }
            if(r>maxc){
                pname=tmp;
                maxc=r;
                minp=d;
            }
            else if(r==maxc && d<minp){
                pname=tmp;
                maxc=r;
                minp=d;
            }
        }
        printf("RFP #%d\n", i++);
        cout<<pname<<endl;
    }
}
