#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> pl(n+1);
		int maxpt=0, maxi=0, maxpt2=0, maxi2=0;
		for(int i=1; i<=n; i++){
			int c, pt=0, tmp;
			cin>>c;
			pl[i]=c;
			vector<int> numc(7, 0);
			while(c--){
				int ct;
				cin>>ct;
				numc[ct]++;
			}
            sort(numc.begin(), numc.end());
            int arr[]={4, 2, 1};
			for(int j=1; j<=6; j++){
                if(numc[j]!=0 && j<=3){
                    pl[i]+=arr[j-1]*(numc[j]-numc[j-1]);
                }
            }
			if(pl[i]>=maxpt){
				maxpt2=maxpt;
				maxi2=maxi;
				maxpt=pl[i];
				maxi=i;
			}
		}
		if(maxpt==maxpt2){
			cout<<"tie"<<endl;
		}
		else if(maxi==1){
			cout<<"chef"<<endl;
		}
		else{
			cout<<maxi<<endl;
		}
	}
}
