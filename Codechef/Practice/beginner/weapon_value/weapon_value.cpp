#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
string com(string str1,string str2)
{
	string str="";
	for(int i=0;i<str1.size();i++){
		if((str1[i]=='1' && str2[i]=='1') || (str1[i]=='0' && str2[i]=='0'))
			str+='0';
		else
			str+='1';
	}
	return str;
}
int num(vector<string> v)
{
	for(int i=0;i<v.size()-1;i++){
		v[i+1]=com(v[i],v[i+1]);
	}
	int c=0;
	for(int i=0;i<v[i].size();i++)
		c++;
	return c;
}
int main(void)
{
	int t,N;
	string str;
	cin>>t;
	while(t--){
		cin>>N;
		vector<string> v;
		while(N--){
			cin>>str;
			v.push_back(str);
		}
		cout<<num(v)<<endl;
	}
}
