#include <iostream>
using namespace std;
unsigned long fact(int num)
{
    unsigned long f;
    if(num==1 || num==0)
        return 1;
    for(int i=2;i<=num;i++)
        f*=i;
    return f;
}
int main() {
    int t,num;
    cin>>t;
    while(t--){
        cin>>num;
        cout<<fact(num)<<endl;
    }
	return 0;
}