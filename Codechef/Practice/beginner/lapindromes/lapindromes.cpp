#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(void)
{
	int t;
	string str;
	cin>>t;
	while(t--){
		cin>>str;
		int n=str.size();
		string a="",b="";
		for(int i=0;i<n/2;i++){
			a+=str[i];
			b+=str[n-i-1];
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		if(a==b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}