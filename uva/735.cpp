#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    vector<bool> points(61, false);
    for(int i=0; i<=20; i++){
        points[i]=true;
        points[2*i]=true;
        points[3*i]=true;
    }
    points[50]=true;
    while(cin>>t, t>0){
        int c=0, p=0;
        for(int i=0; i<=60; i++){
            if(points[i]){
                for(int j=i; j<=60; j++){
                    if(points[j]){
                        for(int k=j; k<=60; k++){
                            if(points[k] && i+j+k==t){
                                c++;
                                if(i==j && j==k){
                                    p++;
                                }
                                else if(i==j || j==k || k==i){
                                    p+=3;
                                }
                                else{
                                    p+=6;
                                }
                            }
                        }
                    }
                }
            }
        }
        if(c){
            printf("NUMBER OF COMBINATIONS THAT SCORES %d IS %d.\n", t, c);
            printf("NUMBER OF PERMUTATIONS THAT SCORES %d IS %d.\n", t, p);
        }
        else{
            printf("THE SCORE OF %d CANNOT BE MADE WITH THREE DARTS.\n", t);
        }
        printf("**********************************************************************\n");
    }
    printf("END OF OUTPUT\n");
}
