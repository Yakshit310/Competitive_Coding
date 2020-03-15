#include<iostream>
using namespace std;
void display(int num)
{
	if(num<10)
		cout<<"What an obedient servant you are!";
	else
		cout<<"-1";
	cout<<endl;
}
int main(void)
{
	int t,num;
	cin>>t;
	while(t--){
		cin>>num;
		display(num);
	}
}