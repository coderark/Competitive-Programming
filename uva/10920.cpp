#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int, int> > move(4);
    move[0]=make_pair(0, 1);
    move[1]=make_pair(-1, 0);
    move[2]=make_pair(0, -1);
    move[3]=make_pair(1, 0);
    long long sz, p;
    cin>>sz>>p;
    while(sz!=0 && p!=0){
        pair<long long, long long> co((sz+1)/2, (sz+1)/2);
        long long lim=1;
        while(lim*lim<p){
            lim+=2;
        }
        if(lim*lim>p){
            lim-=2;
        }
        bool flag=true;
        long long i=lim*lim;
        co.first+=lim/2;
        co.second+=lim/2;
        if(i==p){
            flag=false;
        }
        else if(i<p){
            co.first+=move[0].first;
            co.second+=move[0].second;
            i++;
            if(i==p){
                flag=false;
            }
            else{
                for(int k=0; k<lim; k++){
                    co.first+=move[1].first;
                    co.second+=move[1].second;
                    i++;
                    if(i==p){
                        flag=false;
                        break;
                    }
                }
            }
        }
        long long inlc=lim+1, movin=2;
        while(i<p && flag){
            long long rep=2;
            while(rep>0 && flag){
                for(long long j=0; j<inlc; j++){
                    co.first+=move[movin%4].first;
                    co.second+=move[movin%4].second;
                    //cout<<co.first<<" "<<co.second<<endl;
                    i++;
                    if(i==p){
                        flag=false;
                        break;
                    }
                }
                movin++;
                rep--;
            }
            inlc++;
        }
        printf("Line = %lld, column = %lld.\n", co.second, co.first);
        cin>>sz>>p;
    }
}
