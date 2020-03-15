#include<iostream>
using namespace std;

int main(void)
{
	int n,r,R;
	cin>>n>>r;
	while(n--){
		cin>>R;
		if(r<=R)
			cout<<"Good boi"<<endl;
		else
			cout<<"Bad boi"<<endl;
	}
}