#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, u, d, f;
    cin>>h>>u>>d>>f;
    while(h!=0){
        double ud=u, sd=0, dec=u*((double)f)/100;
        int day=0;
        while(sd>=0 && sd<h){
            day++;
            if(ud>0){
                sd+=ud;
            }
            if(sd>h){
                break;
            }
            sd-=d;
            ud-=dec;
        }
        if(sd>=h){
            printf("success on day %d\n", day);
        }
        else{
            printf("failure on day %d\n", day);
        }
        cin>>h>>u>>d>>f;
    }
}
