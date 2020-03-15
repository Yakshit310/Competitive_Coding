#include<iostream>
using namespace std;
int main(void)
{
	int t,n;
	cin>>t;
	while(t--){
		int c=0,x=0,y=0;
		cin>>n;
		while(n--){
			char ch;
			cin>>ch;
			if((int)ch==78)
				x=1;
			if((int)ch==73)
				c=1;
			if((int)ch==89)
				y=1;
		}
		if(c==1 && x==1 && y==0)
			cout<<"INDIAN"<<endl;
		else if((x==1 && y==0) || (x==0 && y==1))
			cout<<"NOT SURE"<<endl;
		else
			cout<<"NOT INDIAN"<<endl;
	}
}