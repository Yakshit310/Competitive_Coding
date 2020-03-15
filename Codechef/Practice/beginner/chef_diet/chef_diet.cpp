#include<iostream>
using namespace std;
int main(void)
{
	int t,N,k,x;
	cin>>t;
	while(t--){
		cin>>N>>k;
		int s=0,c=0;
		for(int i=1;i<N+1;i++){
			cin>>x;
			c+=x;
			if(c<k && s==0){
				s=i;
			}
			c-=k;
		}
		if(s==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO "<<s<<endl;
	}
}