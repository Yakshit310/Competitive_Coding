#include<iostream>
#include<math.h>
using namespace std;
void number(int a,int b)
{
	int c=0,x=1;
	for(int i=1;i<=b;i++){
		if(b-a-i+1<=0)
			c+=x;
		x=pow(2,i);
	}
	cout<<c<<endl;
}
int countSetBits(int n) 
{ 
    int count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
}
int main(void)
{
	int t,N,A,B,x;
	cin>>t;
	while(t--){
		cin>>N>>A>>B;
		x=countSetBits(A)+countSetBits(B);
		if(x==N)
			number(N,N);
		else if(x<N)
			number(x,N);
		else if(x>N)
			number(2*N-x,N);
	}
}