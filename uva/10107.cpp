#include<bits/stdc++.h>
using namespace std;

int main(){
    int d, ans;
    vector<int> arr;
    while(cin>>d){
        arr.push_back(d);
        nth_element(arr.begin(), arr.begin()+arr.size()/2, arr.end());
        if(arr.size()%2!=0){
            ans=arr[arr.size()/2];
        }
        else{
            nth_element(arr.begin(), arr.begin()+arr.size()/2-1, arr.end());
            ans=(arr[arr.size()/2]+arr[arr.size()/2-1])/2;
        }
        cout<<ans<<endl;
    }
}
