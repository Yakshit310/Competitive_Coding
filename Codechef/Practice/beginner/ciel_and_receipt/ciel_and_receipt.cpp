#include<iostream>
using namespace std;
int boring(int num)
{
	int arr[13]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	int key,c=0;
	while(num>0){
		if(num>=arr[11])
			key=arr[11];
		else
			for(int i=0;i<12;i++)
				if(arr[i]>num){
					key=arr[i-1];
					break;
				}
		c++;
		num-=key;
	}
	return c;
}
int main(void)
{
	int t,num;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++){
		cin>>num;
		arr[i]=boring(num);
	}
	for(int i=0;i<t;i++){
		cout<<arr[i]<<endl;
	}
}