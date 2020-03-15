#include<iostream>
using namespace std;
void display(int n)
{
	int x=1;
	int arr[n][n];
	for(int k=0;k<2*n-1;k++)
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(i+j==k){
					arr[i][j]=x;
					x++;
				}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
}
int main(void)
{
	int t,N;
	cin>>t;
	while(t--){
		cin>>N;
		display(N);
	}
}