#include<iostream>
using namespace std;
void cost(int T[],int S[],int N,int k)
{
	int c=0;
	for(int i=0;i<N;i++){
		if(k>T[i])
			k-=T[i];
		else{
			c+=(T[i]-k)*(S[i]);
			k=0;
		}
	}
	cout<<c<<endl;
}
int main(void)
{
	int t,N,k;
	cin>>t;
	while(t--){
		cin>>N>>k;
		int T[N],S[N];
		for(int i=0;i<N;i++)
			cin>>T[i]>>S[i];
		cost(T,S,N,k);
	}
}