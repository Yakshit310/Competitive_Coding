#include<iostream>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	int x,y,z;
	while(t--){
		cin>>x>>y>>z;
		if(x+y+z==180)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}