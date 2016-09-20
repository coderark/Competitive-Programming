#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    scanf("%d", &q);
    while(q--){
        string a, b;
        cin>>a>>b;
        int al=a.length(), bl=b.length();
        int arr[bl+1][al+1];
        for(int i=0; i<=bl; i++){
            for(int j=0; j<=al; j++){
                if(i==0){
                    arr[i][j]=1;
                }
                else if(j==0){
                    arr[i][j]=0;
                }
                else if(isupper(a[j-1])){
                    if(a[j-1]!=b[i-1]){
                        arr[i][j]=-1;
                    }
                    else{
                        arr[i][j]=arr[i-1][j-1];
                    }
                }
                else{
                    if(toupper(a[j-1])==b[i-1]){
                        arr[i][j]=arr[i-1][j-1];
                    }
                    else{
                        arr[i][j]=arr[i][j-1];
                    }
                }

            }
        }
        // for(int i=0; i<=bl; i++){
        //     for(int j=0; j<=al; j++){
        //         printf("%d ", arr[i][j]);
        //     }
        //     printf("\n");
        // }
        if(arr[bl][al]==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
