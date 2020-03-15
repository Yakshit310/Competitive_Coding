#include<iostream>
#include<math.h>
using namespace std;
int s(int g,int f)
{
	if((g*20)-(f*10)>0)
		return ((g*20)-(f*10));
	return 0;
}
int main(void)
{
	int t,num;
	cin>>t;
	while(t--){
		cin>>num;
		int goal[num],foul[num];
		for(int i=0;i<num;i++)
			cin>>goal[i];
		for(int i=0;i<num;i++)
			cin>>foul[i];
		int m=0;
		for(int i=0;i<num;i++)
			m=max(m,s(goal[i],foul[i]));
		cout<<m<<endl;
	}
}