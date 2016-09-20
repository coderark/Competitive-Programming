#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr(4);
    for(int i=1; i<=20; i++){
        for(int j=i; j<=2000-i; j++){
            if(i*j>8000000000){
                break;
            }
            for(int k=j; k<=2000-j-i; k++){
                if(i*j*k>8000000000){
                    break;
                }
                for(int l=k; l<=2000-i-j-k; l++){
                    //printf("%.2f %.2f %.2f %.2f\n", i/(double)100, j/(double)100, k/(double)100, l/(double)100);
                    if(i+j+k+l==i*j*k*l){
                        printf("%.2f %.2f %.2f %.2f\n", i/(double)100, j/(double)100, k/(double)100, l/(double)100);
                    }
                }
            }
        }
    }
}
