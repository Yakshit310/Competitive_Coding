#include<bits\stdc++>
using namespace std;

int greatest_median(int a[],int m,int k)
{
	int key;
	sort(a,a+m);
	key=a[(m+k)/2];
	return key;
}
int main(void)
{
	int t,N,k;
	cin>>t;
	while(t--){
		cin>>N>>k;
		int arr[N];
		for(int i=0;i<N;i++)
			cin>>arr[i];
		cout<<greatest_median(arr,N,k)<<endl;
	}
}