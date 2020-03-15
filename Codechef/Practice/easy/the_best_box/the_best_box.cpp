#include<iostream>
#include<math.h>
using namespace std;
void fun(int P,int S)
{
	float b,l;
	b=(P-sqrt(P*P - 24*S))/12;
	l=P/4 - 2*b;
	float V=l*b*b;
	printf("%.2f \n",l*b*b);
}
int main(void)
{
	int t,P,S;
	cin>>t;
	while(t--){
		cin>>P>>S;
		fun(P,S);
	}
}