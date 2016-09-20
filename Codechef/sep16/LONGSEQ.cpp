#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;								                int l=s.length(), c=0;										                for(int i=0; i<l; i++){														                        if(s[i]=='1'){
																		                                c++;
																						                        }
																	                }
													                if(c==1 || (l-c)==1){
																                        cout<<"Yes"<<endl;
																			                }
															                else{
																		                        cout<<"No"<<endl;
																					                }
																	        }
}

