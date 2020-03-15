#include<iostream>
using namespace std;
int fun(int arr[],int n)
{
	int x=0,max;
	for(int i=0;i<n;i++){
			max=1;
			for(int j=i+1;j<n;j++)
				if(arr[i]==arr[j])
					max++;
			if(x<max)
				x=max;
	}
	return n-x;
}
int main(void)
{
	int t;
	cin>>t;
	int ans[t];
	int a=t;
	int n;
	while(t){
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		ans[a-t]=fun(arr,n);
		t--;
	}
	for(int i=0;i<a;i++){
		cout<<ans[i]<<endl;
	}
}