#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int t,N,x;
	string str1,str2;
	cin>>t;
	while(t--){
		cin>>N;
		cin>>str1>>str2;
		int s=0,r=0;
		for(int i=0;i<N;i++){
			if(str1[i]=='1')
				s++;
			if(str2[i]=='1')
				r++;
		}
		if(s==r)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}