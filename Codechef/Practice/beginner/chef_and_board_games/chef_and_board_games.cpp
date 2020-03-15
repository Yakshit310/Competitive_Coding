#include<iostream>
using namespace std;
int main()
{
	int num,r=0;
	cin>>num;
	for(int i=1;i<=num;i=+2){
		int k = num - i + 1; 
		r += (k * k); 
	}
	cout<<r;
	return 0;
}