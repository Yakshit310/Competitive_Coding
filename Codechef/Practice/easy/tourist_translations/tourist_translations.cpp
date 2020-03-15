#include <iostream>
using namespace std;
int main(void)
{
	int t;
	string str,s;
	cin>>t;
	cin>>str;
	while(t--){
		cin>>s;
		for(int i=0;i<s.size();i++){
			if(s[i]==95)
				cout<<(char)32;
			else if(s[i]>=97 && s[i]<=122)
				cout<<str[(int)s[i]-97];
			else if(s[i]>=65 && s[i]<=90)
				cout<<(char)(str[(int)s[i]-65]-32);
			else
				cout<<s[i];
		}
		cout<<endl;
	}
}