#include<iostream>
using namespace std;

int num_wolf(int num)
{
	if(num%7==0)
		return 1;
	else 
		return 0;
}
int main(void)
{
	int t,count,size,k,num;
	cin>>t;
	while(t--){
		count=0;
		cin>>size>>k;
		while(size--){
			cin>>num;
			if(num_wolf(num+k))
				count++;
		}
		cout<<count<<endl;
	}
}