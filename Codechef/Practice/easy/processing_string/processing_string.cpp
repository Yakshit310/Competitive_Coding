#include<iostream>
using namespace std;
int main(void)
{
	int t,c;
	string str;
	cin>>t;
	while(t--){
		cin>>str;
		c=0;
		for(int i=0;i<str.size();i++)
			if((int)str[i]>=48 && (int)str[i]<=57){
				c+=(int)str[i]-48;
			}
		cout<<c<<endl;
	}
}