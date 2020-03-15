#include<iostream>
using namespace std;
int display(int x,float y,int z)
{
	if(x>50 && y<0.7 && z>5600)
		return 10;
	if(x>50 && y<0.7)
		return 9;
	if(y<0.7 && z>5600)
		return 8;
	if(x>50 && z>5600)
		return 7;
	if(x>50 || y<0.7 || z>5600)
		return 6;
	return 5;
}
int main(void)
{
	int t,H,T;
	float C;
	cin>>t;
	while(t--){
		cin>>H>>C>>T;
		cout<<display(H,C,T)<<endl;
	}
}