#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int partition(vector<int> &v, int s, int e){
    int p=v[e], j=s;
    for(int i=s; i<e; i++){
        if(v[i]<p){
            int tmp=v[i];
            v[i]=v[j];
            v[j]=tmp;
            j++;
        }
    }
    v[e]=v[j];
    v[j]=p;
    return j;
}

void quicksort(vector<int> &v, int s, int e){
    if(e-s<1){
        return;
    }
    int p=partition(v, s, e);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    quicksort(v, s, p-1);
    quicksort(v, p+1, e);
}

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    quicksort(v, 0, n-1);
    /*for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }*/
    cout<<"\n";
    return 0;
}
