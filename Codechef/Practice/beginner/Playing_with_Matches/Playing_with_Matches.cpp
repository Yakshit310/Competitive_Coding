#include<iostream>
using namespace std;
int main()
{
	int comp[10]={6,2,5,5,4,5,6,3,7,6};
	int A,B;
	int t;
	cin>>t;
	int arr[t];
	int x=0;
	while(t){
		cin>>A>>B;
		int r=A+B;
		int c=0;
		while(r){
			for(int i=0;i<10;i++)
					if(r%10==i)
						c+=comp[i];
			r/=10;
		}
		arr[x]=c;
		x++;
		t--;
	}
	for(int i=0;i<x;i++)
		cout<<arr[i]<<endl;
	return 0;
}