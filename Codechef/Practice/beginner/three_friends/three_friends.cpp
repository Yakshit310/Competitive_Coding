#include<iostream>
using namespace std;
int possible(int a,int b,int c)
{
	if(a+b==c)
		return 1;
	if(b+c==a)
		return 1;
	if(a+c==b)
		return 1;
	return 0;
}
int main(void)
{
	int t,x,y,z;
	cin>>t;
	while(t--){
		cin>>x>>y>>z;
		if(possible(x,y,z))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}