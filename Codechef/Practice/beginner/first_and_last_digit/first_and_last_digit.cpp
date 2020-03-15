#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int sum_fun(int n)
{
	ostringstream str1;
	str1<<n;
	string s = str1.str();
	int z = (s[0]-'0')+(s[s.size()-1]-'0');
	return z;
}
int main(void)
{
	int t,num;
	cin>>t;
	while(t--){
		cin>>num;
		cout<<sum_fun(num)<<endl;
	}
}