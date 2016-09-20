#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    scanf("%d", &q);
    while (q--) {
        int n;
        scanf("%d", &n);
        int arr[2*n+1][2*n+1];
        for(int i=1; i<=2*n; i++){
            for(int j=1; j<=2*n; j++){
                scanf("%d", &arr[i][j]);
            }
        }
        int s=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                s+=max(arr[i][j], max(arr[2*n-i+1][j], max(arr[i][2*n-j+1], arr[2*n-i+1][2*n-j+1])));
            }
        }
        printf("%d\n", s);
    }
}
