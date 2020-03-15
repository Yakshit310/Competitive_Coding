#include<iostream>
#include<string>
using namespace std;
int fun(string str)
{
	int n=str.size();
	int c=0;
	for(int i=0;i<n-1;i++){
		if((str[i]=='0' && str[i+1]=='1') || (str[i]=='1' && str[i+1]=='0'))
			c++;
	}
	if((str[0]=='0' && str[n-1]=='1') || (str[0]=='1' && str[n-1]=='0'))
			c++;
	if(c>2)
		cout<<"non-uniform"<<endl;
	else
		cout<<"uniform"<<endl;
}
int main(void)
{
	int t;
	string str;
	cin>>t;
	while(t--){
		cin>>str;
		fun(str);
	}
}