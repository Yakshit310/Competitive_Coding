#include<iostream>
using namespace std;
int main(void)
{
	int t,m,c,x,y,p;
	cin>>t;
	cin>>m>>c;
	int i=0,j=0;
	while(t--){
		cin>>x>>y>>p;
		if(y>(m*x+c))
			i+=p;
		else
			j+=p;
	}
	if(i>=j)
		cout<<i;
	else
		cout<<j;
	cout<<endl;
}