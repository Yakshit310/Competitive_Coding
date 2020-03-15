#include<iostream>
using namespace std;
void best(int L[],int R[],int n)
{
	int m=0,c,r;
	for(int i=0;i<n;i++){
		r=L[i]*R[i];
		if(r>m){
			m=r;
			c=i;
		}
		else if(r==m && R[i]>R[c])
			c=i;
	}
	cout<<c+1<<endl;
}
int main(void)
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int L[n],R[n];
		for(int i=0;i<n;i++)
			cin>>L[i];
		for(int i=0;i<n;i++)
			cin>>R[i];
		best(L,R,n);
	}
}