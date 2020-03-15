#include<iostream>
using namespace std;
int main(void)
{
	unsigned int t,N,c,sum;
	long long unsigned int k;
	cin>>t;
	while(t--){
		cin>>N>>k;
		sum=0;
		c=0;
		int arr[N];
		for(int i=0;i<N;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		for(int i=0;i<N;i++){
			if(sum-arr[i]<arr[i]+k)
				c++;
		}
		cout<<c<<endl;
	}
}