#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
	int t,n;
	float v1,v2;
	cin>>t;
	while(t--){
		cin>>n>>v1>>v2;
		if(v1/sqrt(2)>v2/2)
			cout<<"Stairs";
		else
			cout<<"Elevator";
		cout<<endl;
	}
}