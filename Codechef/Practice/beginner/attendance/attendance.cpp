#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t-- >0){
	    int n;
	    cin>>n;
	    string str[n][2];
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>str[i][0]>>str[i][1];
	        a[i]=0;
	    }
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(str[i][0]==str[j][0]){
	                a[i]=1;
	                a[j]=1;
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]==0){
	            cout<<str[i][0]<<endl;
	        }else if(a[i]==1){
	            cout<<str[i][0]<<" "<<str[i][1]<<endl;
	        }
	    }
	}
return 0;}
