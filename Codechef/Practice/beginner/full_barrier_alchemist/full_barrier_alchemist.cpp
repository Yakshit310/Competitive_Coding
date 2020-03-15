#include<iostream>
using namespace std;
int main(void)
{
	int t,N,H,y1,y2,L,i,x;
	cin>>t;
	while(t--){
		cin>>N>>H>>y1>>y2>>L;
		int ans=0;
		while(N--){
			cin>>i>>x;
			if((i==1&&(H-y1)>x)||(i==2&&y2<x))
            	--L;   
        	if(L>0)             
        		++ans;
        }
        cout<<ans<<endl;
	}
}