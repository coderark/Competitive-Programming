#include<bits/stdc++.h>
using namespace std;


string moves[] = {"+y", "-y", "+z", "-z", "+x", "-x"};
int precalc[6][4] = {
{ 5, 4, 0, 0 },
{ 4, 5, 1, 1 },
{ 2, 2, 5, 4 },
{ 3, 3, 4, 5 },
{ 0, 1, 2, 3 },
{ 1, 0, 3, 2 }
};

int mind(string s){
  for(int i=0; i<6; i++){
    if(s==moves[i]){
      return i;
    }
  }
}

int main(){
    int L;
    while(cin>>L){
        if(L==0){
            break;
        }
        string dir;
        int ans=4;
        for(int i=1; i<L; i++){
            cin>>dir;
            if(dir=="No"){
              continue;
            }
            ans=precalc[ans][mind(dir)];
        }
        cout<<moves[ans]<<endl;
    }
}
