#include<iostream>
using namespace std;
int range(int a,int b,int y,int x1,int x2,int i)
{
    if(i-1<x1 || i>x2)
        return 0;
    if(a==y && ((i-1)==x2 || i==x1))
        return 0;
    if(a<=b && a<=y && b>=y)
        return 1;
    if(a>=b && a>=y && b<=y)
        return 1;
    return 0;
}
int main(void)
{
    int t,N,Q,x1,x2,y;
    cin>>t;
    while(t--){
        cin>>N>>Q;
        int arr[N+1];

        for(int i=1;i<=N;i++)
            cin>>arr[i];

        while(Q--){
            int c=0;
            cin>>x1>>x2>>y;

            for(int i=2;i<=N;i++){
                if(range(arr[i],arr[i-1],y,x1,x2,i)){
                    c++;
                }
            }
            cout<<c<<endl;
        }
    }
}