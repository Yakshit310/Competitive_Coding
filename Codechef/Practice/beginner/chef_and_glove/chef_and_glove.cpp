#include<iostream>
using namespace std;
void fun(int f[],int g[],int n)
{
	int fr=0,ba=0;
	for(int i=0;i<n;i++){
		if(f[i]<=g[i])
			fr++;
		if(f[n-i-1]<=g[i])
			ba++;
	}
	if(fr==n && ba==n)
		cout<<"both";
	else if(fr==n)
		cout<<"front";
	else if(ba==n)
		cout<<"back";
	else
		cout<<"none";
	cout<<endl;
}
int main(void)
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int f[n],g[n];
		for(int i=0;i<n;i++)
			cin>>f[i];
		for(int i=0;i<n;i++)
			cin>>g[i];
		fun(f,g,n);
	}
}