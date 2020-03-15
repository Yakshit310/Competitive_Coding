#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int sum_digit(int x)
{
	int c=0;
	while(x){
		c+=x%10;
		x/=10;
	}
	return c;
}
void display(int arr[],int n)
{
	int m=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			m=max(m,sum_digit(arr[i]*arr[j]));
		}
	}
	cout<<m<<endl;		
}
int main(void)
{
	int t,N;
	cin>>t;
	while(t--){
		cin>>N;
		int arr[N];
		for(int i=0;i<N;i++)
			cin>>arr[i];
		display(arr,N);
	}
}