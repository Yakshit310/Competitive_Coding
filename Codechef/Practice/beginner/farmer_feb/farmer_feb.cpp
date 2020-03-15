#include<iostream>
using namespace std;

int isprime(int num)
{
	if(num<=1)
		return 0;
	if(num<=3)
		return 1;
	if(num%2==0 || num%3==0)
		return 0;
	int i=5;
	while(i*i<=num){
		if(num%i==0 || num%(i+2)==0)
			return 0;
		i=i+6;
	}
	return 1;
}
int fun(int num)
{
	for(int i=1;i<2147483647;i++){
		if(isprime(num+i))
			return i;
	}
}
int main()
{
	int t,x,y;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++){
		cin>>x>>y;
		arr[i]=fun(x+y);
	}
	for(int i=0;i<t;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}