#include<iostream>
#include<string.h>
using namespace std;
void marks(string str1,string str2,int N)
{
	int c=0;
	for(int i=0;i<N;i++){
		if(str1[i]==str2[i])
			c++;
		else if(str2[i]!='N')
			i++;
	}
	cout<<c<<endl;
}
int main(void)
{
	int t,n;
	cin>>t;
	string cor,ans;
	while(t--){
		cin>>n;
		cin>>cor>>ans;
		marks(cor,ans,n);
	}
}