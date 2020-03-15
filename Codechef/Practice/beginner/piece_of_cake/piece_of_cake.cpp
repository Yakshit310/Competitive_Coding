#include<iostream>
#include<string>
using namespace std;
void fun(string str)
{
	int l=str.size();
	if(l%2!=0){
		cout<<"NO"<<endl;
		return;
	}
	for(int i=0;i<l;i++){
		int c=0;
		for(int j=0;j<l;j++)
			if(str[i]== str[j]){
				c++;
			}
		if(c*2==l){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}
int main(void)
{
	string str;
	int t;
	cin>>t;
	while(t--){
		cin>>str;
		fun(str);
	}
}