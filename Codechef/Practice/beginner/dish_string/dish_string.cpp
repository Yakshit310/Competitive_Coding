#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main(void)
{
	int t,N;
	cin>>t;
	string str;
	while(t--){
		int c=0;
		vector<string> v1,v2;
		for(int i=0;i<4;i++){
			cin>>str;
			v1.push_back(str);
		}
		for(int i=0;i<4;i++){
			cin>>str;
			v2.push_back(str);
		}
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(v1[i].compare(v2[j])==0)
					c++;
			}
		}
		if(c>1)
			cout<<"similar"<<endl;
		else
			cout<<"dissimilar"<<endl;
	}
}