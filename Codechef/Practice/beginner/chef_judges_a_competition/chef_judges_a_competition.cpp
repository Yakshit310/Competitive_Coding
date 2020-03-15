#include<iostream>
#include<math.h>
using namespace std;

void winner(int a[],int b[],int m)
{
	int x=INT_MIN,y=INT_MIN;
	int j=0,k=0;
	for(int i=0;i<m;i++){
		j+=a[i];
		k+=b[i];
		x=max(x,a[i]);
		y=max(y,b[i]);
	}
	if(j-x==k-y)
		cout<<"Draw";
	else if(j-x<k-y)
		cout<<"Alice";
	else
		cout<<"Bob";
	cout<<endl;
}
int main(void)
{
	int t,m;
	cin>>t;
	while(t--){
		cin>>m;
		int a[m];
		int b[m];
		for(int i=0;i<m;i++)
			cin>>a[i];
		for(int i=0;i<m;i++)
			cin>>b[i];
		winner(a,b,m);
	}
}