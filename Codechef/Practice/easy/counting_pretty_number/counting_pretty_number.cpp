#include <iostream>
using namespace std;
void fun(int x,int y)
{
	int c=0;
	while(x<=y){
		if(x%10==2){
			c++;
			x++;
		}
		else if(x%10==3){
			c++;
			x+=6;
		}
		else if(x%10==9){
			c++;
			x+=3;
		}
		else
			x++;
	}
	cout<<c<<endl;
}
int main(void){
	int t,x,y;
	cin>>t;
	while(t--){
		cin>>x>>y;
		fun(x,y);
	}
}
/*
#include<iostream>
using namespace std;
void fun(int x,int y)                       time effecient code **
{
	int c=0;
	int i=y%10;
	if(i==9)
		c+=3;
	else if(i<9 && i>=3)
		c+=2;
	else if(i<=2)
		c++;
	i=x%10;
	if(i<=2)
		c+=3;
	else if(i<=3)
		c+=3;
	else if(i<=9)
		c+=1;
	i=((y-y%10-x+x%10-10)/10)*3;
	c+=i;
	cout<<c<<endl;
}
int main(void){
	int t,x,y;
	cin>>t;
	while(t--){
		cin>>x>>y;
		fun(x,y);
	}
}
*/