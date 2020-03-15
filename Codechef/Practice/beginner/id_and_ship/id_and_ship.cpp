#include<iostream>
using namespace std;
void fun(char ch)
{
	if(ch=='B' || ch=='b'){
		cout<<"BattleShip"<<endl;
		return;
	}
	if(ch=='C' || ch=='c'){
		cout<<"Cruiser"<<endl;
		return;
	}
	if(ch=='D' || ch=='d'){
		cout<<"Destroyer"<<endl;
		return;
	}
	if(ch=='F' || ch=='f'){
		cout<<"Frigate"<<endl;
		return;
	}
}
int main(void)
{
	int t;
	char ch;
	cin>>t;
	while(t--){
		cin>>ch;
		fun(ch);
	}
}