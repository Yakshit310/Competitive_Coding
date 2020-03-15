#include<iostream>
#include<vector>
using namespace std;
void func(string s1,string s2)
{
	for(int i=0;i<s1.size();i++){
		if(s1[i]!='?' && s2[i]!='?' && (int)s1[i]!=(int)s2[i]){
			cout<<"No"<<endl;
			return;
		}
	}
	cout<<"Yes"<<endl;
}
int main(void)
{
	int t;
	string s1,s2;
	cin>>t;
	while(t--){
		cin>>s1>>s2;
		func(s1,s2);
	}
}