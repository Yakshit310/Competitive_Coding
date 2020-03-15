#include<iostream>
using namespace std;
void num_pan(int G[],int R[],int N)
{
	int c=0;
	if(G[0]>=R[0])
		c++;
	for(int i=1;i<N;i++){
		if(G[i]-G[i-1]>=R[i])
			c++;
	}
	cout<<c<<endl;
}
int main(void)
{
	int t,N;
	cin>>t;
	while(t--){
		cin>>N;
		int G[N],R[N];
		for(int i=0;i<N;i++)
			cin>>G[i];
		for(int i=0;i<N;i++)
			cin>>R[i];
		num_pan(G,R,N);
	}
}