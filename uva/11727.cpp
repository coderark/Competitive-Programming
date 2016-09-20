#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        int arr[3], ans;
        scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
        sort(arr, arr+3);
        printf("Case %d: %d\n", i, arr[1]);
    }
}
