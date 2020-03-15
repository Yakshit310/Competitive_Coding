#include<iostream>
#include<string>
using namespace std;
int fun(string ch,int num)
{
	int c=0;
	for(int i=0;i<num-1;i++){
		if(ch[i]!='a' && ch[i]!='e' && ch[i]!='i' && ch[i]!='o' && ch[i]!='u')
			if(ch[i+1]=='a' || ch[i+1]=='e' || ch[i+1]=='i' || ch[i+1]=='o' || ch[i+1]=='u')
				c++;
	}
	return c;
}
int main(void)
{
	int t,num;
	string str;
	cin>>t;
	while(t--){
		cin>>num;
		cin>>str;
		cout<<fun(str,num)<<endl;
	}
}