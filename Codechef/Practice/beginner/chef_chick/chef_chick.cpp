#include<iostream>
using namespace std;
int max_jump(int n)
{
	int arr[n];
	int m;
	cin>>arr[0];
	m=arr[0];
	for(int i=1;i<n;i++){
		cin>>arr[i];
		if(m>arr[i])
			m=arr[i];
	}
	return m;
}
int main(void)
{
	int t,size;
	cin>>t;
	while(t--){
		cin>>size;
		cout<<max_jump(size)<<endl;
	}
}