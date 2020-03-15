#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int ar[t],x=0;
	while(t){
		int n,qnum,qmarks;
		cin>>n;
		int arr[8]={0,0,0,0,0,0,0,0};
		for(int i=0;i<n;i++){
			cin>>qnum>>qmarks;
			if(arr[qnum-1]<qmarks && qnum<9)
				arr[qnum-1]=qmarks;
		}
		int	r=0;
		for(int i=0;i<8;i++)
			r=r+arr[i];
	    ar[x]=r;
		t--;
		x++;
	}
	for(int i=0;i<x;i++)
	    cout<<ar[i];
	return 0;
}