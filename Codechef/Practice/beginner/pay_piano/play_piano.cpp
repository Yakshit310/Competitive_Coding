#include<iostream>
#include<string>
using namespace std;
void display(string s)
{
	if(s.size()%2==1){
		cout<<"no\n";
		return;
	}
	int x,y;
	for(int i=0;i<s.size()-1;i+=2){
		x=0;
		y=0;
		if(s[i]=='A' || s[i+1]=='A')
			x++;
		if(s[i]=='B' || s[i+1]=='B')
			y++;
		if(x!=y){
			cout<<"no\n";
			return;
		}
	}
	cout<<"yes"<<endl;
}
int main(void)
{
	int t;
	cin>>t;
	string str;
	while(t--){
		cin>>str;
		display(str);
	}
}