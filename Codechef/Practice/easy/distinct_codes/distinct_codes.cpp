#include<iostream>
#include<set>
using namespace std;
int main(void)
{
	int t;
	cin>>t;
	string str,s;
	while(t--){
		cin>>str;
		set<string> pair;
		for(int i=0;i<str.size()-1;i++){
			s="";
			s+=str[i];
			s+=str[i+1];
			pair.insert(s);
		}
		cout<<pair.size()<<endl;
	}
}