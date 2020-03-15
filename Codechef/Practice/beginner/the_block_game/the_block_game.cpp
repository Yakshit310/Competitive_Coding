#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int win_or_lose(int num)
{
	ostringstream str1;
	str1<<num;
	string s=str1.str();
	string r=s;
	int n= r.size();
	for(int i=0;i<n/2;i++)
		swap(s[i],s[n-i-1]);
	return s.compare(r);
}
int main(void)
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(win_or_lose(n)==0)
			cout<<"wins"<<endl;
		else
			cout<<"losses"<<endl;
	}
}