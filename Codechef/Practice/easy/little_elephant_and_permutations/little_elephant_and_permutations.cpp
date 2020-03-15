#include <iostream>
using namespace std;
void fun(int arr[],int n)
{
	int x=0,y=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j])
				x++;
		}
	}
	for(int i=0;i<n-1;i++)
		if(arr[i]>arr[i+1])
			y++;

	if(x==y)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
int main(void)
{
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		fun(arr,n);
	}
}