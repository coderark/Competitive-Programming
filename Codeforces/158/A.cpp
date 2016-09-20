#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    int score=-1, ans=n;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        if(score!=-1 && arr[i]!=score){
            ans=i;
            break;
        }
        if(i==(k-1)){
            score=arr[i];
        }
    }
    if(score==0){
        cout<<0<<"\n";
    }
    else{
        cout<<ans<<"\n";
    }

    return 0;
}
