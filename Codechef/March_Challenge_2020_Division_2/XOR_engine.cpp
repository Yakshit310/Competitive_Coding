#include<iostream>
using namespace std;
int main(void)
{
	int t,Q,n,x,P;
	cin>>t;
	while(t--){
		cin>>n>>Q;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		while(Q--){
			cin>>P;
			int	y=0,z=0;
			for(int i=0;i<n;i++){
				x=P ^ arr[i];
				if(__builtin_popcount(x)%2==0)
					y++;
				else if(__builtin_popcount(x)%2==1)
					z++;
			}
			cout<<y<<" "<<z<<endl;
		}
	}
}