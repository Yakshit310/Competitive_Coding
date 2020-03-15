#include<iostream>
#include<string>
using namespace std;
int display(string s)
{
	int x=0,y=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='a')
			x++;
		else
			y++;
	}
	if(x<=y)
		return x;
	return y;
}
int main(void)
{
	int t;
	cin>>t;
	string str;
	while(t--){
		cin>>str;
		cout<<display(str)<<endl;
	}
}