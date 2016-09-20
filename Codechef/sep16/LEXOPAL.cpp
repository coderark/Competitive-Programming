#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l=s.length();
		bool flag=true;
		for(int i=0; i<(l+1)/2; i++){
			if(s[i]!='.' && s[l-i-1]!='.' && s[i]!=s[l-i-1]){
				flag=false;
			}
			else if(s[i]=='.' && s[l-i-1]=='.'){
				s[i]=s[l-i-1]='a';
			}
			else if(s[i]=='.'){
				s[i]=s[l-i-1];
			}
			else if(s[l-i-1]=='.'){
				s[l-i-1]=s[i];
			}
		}
		if(flag){
			cout<<s<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
}
