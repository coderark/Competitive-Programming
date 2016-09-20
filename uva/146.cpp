#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    while(cin>>str, str!="#"){
        int l=str.length();
        char arr[l+1];
        str.copy(arr, l, 0);
        if(next_permutation(arr, arr+l)){
            arr[l]='\0';
            cout<<arr<<endl;
        }
        else{
            cout<<"No Successor"<<endl;
        }
    }
}
