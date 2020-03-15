#include<iostream>
#include<string>
#include<set>
using namespace std;
char reverse(char ch)
{
	if((int)ch<110)
		ch=110+(109-(int)ch);
	else if((int)ch>109)
		ch=109+(110-(int)ch);
	return ch;
}
void fun(string str,int n)
{
	char c;
	if(n%2!=0)
		str[n-1]=reverse(str[n-1]);
	for(int i=0;i<(n/2)*2;i+=2){
		c=reverse(str[i]);
		str[i]=reverse(str[i+1]);
		str[i+1]=c;
	}
	cout<<str<<endl;
}
int main(void)
{
	int t,n;
	string str;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>str;
		fun(str,n);
	}
}