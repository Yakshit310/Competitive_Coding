#include<iostream>
using namespace std;
int fun(int n)
{
	if(n<2)
		return 0;
	if(n<4)
		return 1;
	if(n%2==0 || n%3==0)
		return 0;
	int i=5;
	while(i*i<=n){
		if(n%i==0 || n%(i+2)==0)
			return 0;
		i+=6;
	}
	return 1;
}
int main(void)
{
	int t,num;
	cin>>t;
	while(t--){
		cin>>num;
		if(fun(num))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}