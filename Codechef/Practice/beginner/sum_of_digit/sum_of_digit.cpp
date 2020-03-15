#include<iostream>
using namespace std;
void fun(int n)
{
	int c=0;
	while(n){
		c+=n%10;
		n/=10;
	}
	cout<<c<<endl;
}
int main(void)
{
	int t,num;
	cin>>t;
	while(t--){
		cin>>num;
		fun(num);
	}
}