#include<iostream>
using namespace std;
void func(string str)
{
    int n=str.size();
    int c=0;
    int n=str.size();
    int c=1+n;
    for(int i=1;i<n;i++){
        if(str[i]>str[i-1])
            c+=(int)str[i]-(int)str[i-1];
        else if(str[i]<str[i-1])
            c+=26+(int)str[i]-(int)str[i-1];
        if(c>n*11){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

}
int main(void)
{
    int t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        func(str);
    }
}