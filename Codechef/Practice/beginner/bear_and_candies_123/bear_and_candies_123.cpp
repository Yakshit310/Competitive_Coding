#include<iostream>
using namespace std;

void fun(int A,int B)
{
	int n=A+B;
	int c=1,x=0;
	while(n>=0){
		if(c%2!=0)
			x=1;
		else
			x=0;
		n-=c;
		c++;
	}
	if(x==1)
		cout<<endl<<"Bob";
	else
		cout<<endl<<"Limak";
}
int main(void)
{
	int t,A,B;
	cin>>t;
	while(t--){
		cin>>A>>B;
		fun(A,B);
	}
}