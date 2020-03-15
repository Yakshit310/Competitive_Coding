#include<iostream>
using namespace std;
int main(void)
{
	int t,index;
	long long unsigned int n;
	long long int x,m;
	cin>>t;
	while(t--){
		cin>>n;
		x=0;
		m=0;
		for(long long unsigned int i=0;i<n;i++){
			x=n+x-pow(2,i);
			if(x>m){
				m=x;
				index=i;
			}
			if(x<=0){
				cout<<i<<" ";
				break;
			}
		}
		cout<<index+1<<endl;
	}
}