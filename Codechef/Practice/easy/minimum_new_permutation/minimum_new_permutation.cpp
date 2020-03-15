#include<iostream>
using namespace std;
void fun(int n)
{
	int arr[n];
	for(int i=1;i<n;i+=2){
		arr[i]=i;
		arr[i-1]=i+1;
	}
	if(n%2==1){
		arr[n-1]=n;
		arr[n-1]=arr[n-1]+arr[n-2];
		arr[n-2]=arr[n-1]-arr[n-2];
		arr[n-1]=arr[n-1]-arr[n-2];
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
} 
int main(void)
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		fun(n);
	}
}