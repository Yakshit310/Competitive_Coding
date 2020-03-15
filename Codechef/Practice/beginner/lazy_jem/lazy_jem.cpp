#include<iostream>
using namespace std;
void time_taken(int n,int b,unsigned long long int m)
{
	unsigned long long int c=0;
	while(n){
		c+=(n/2+n%2)*m+b;
		n=n/2;
		m*=2;
	}
	cout<<c-b<<endl;
}
int main(void)
{
	int t,N,B;
	unsigned long long int M;
	cin>>t;
	while(t--){
		cin>>N>>B>>M;
		time_taken(N,B,M);
	}
}