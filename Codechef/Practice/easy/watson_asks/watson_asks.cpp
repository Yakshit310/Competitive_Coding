#include<iostream>
using namespace std;
#define ui unsigned int
int abs_diff(ui x,ui y)
{
	if(x>y)
		return x-y;
	return y-x;
}
int main(void)
{
	int t,c;
	cin>>t;
	ui N;
	while(t--){
		cin>>N;
		ui arr[N];
		c=0;
		for(int i=0;i<N;i++){
			cin>>arr[i];
		}
		for(int i=1;i<N;i++){
			if(abs_diff(arr[i],arr[i-1])>1){
				c=1;
				break;
			}
		}
		if(c==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}