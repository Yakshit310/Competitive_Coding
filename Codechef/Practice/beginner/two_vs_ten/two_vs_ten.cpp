#include<iostream>
using namespace std;
int main(void)
{
	int t,n;
	cin>>t;
	int x=0;
	while(t--){
		cin>>n;
		if(num%10==0)
			x=0;
		else if(num%10==5)
			x=1;
		else
			x=-1;
		cout<<x<<endl;
	}
}