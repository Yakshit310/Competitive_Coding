#include<iostream>
#include<string>
#include<set>
using namespace std;
void fun(string str,int k)
{
	set<int> s;
	s.insert(k);
	for(int i=0;i<str.size();i++){
		if(str[i]=='L'){
			k-=1;
			s.insert(k);
		}
		else{
			k+=1;
			s.insert(k);
		}
	}
	cout<<s.size()<<endl;
}
int main(void)
{
	int t,n,k;
	string str;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cin>>str;
		fun(str,k);
	}
}