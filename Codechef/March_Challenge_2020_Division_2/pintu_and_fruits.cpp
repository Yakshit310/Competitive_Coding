#include<iostream>
using namespace std;
int min(int x,int y)
{
    if(x<=y)
        return x;
    return y;
}
int main(void)
{
    int t,M,N,m;
    cin>>t;
    while(t--){
        cin>>N>>M;
        int F[N],P[N];
        int arr[M+1]={0};
        for(int i=0;i<N;i++){
            cin>>F[i];
            arr[F[i]]=1;
        }
        for(int i=0;i<N;i++){
            cin>>P[i];
            arr[F[i]]+=P[i];
        }
        m=2147483647;
        for(int i=1;i<M+1;i++)
            if(arr[i])
                m=min(m,arr[i]);
        cout<<m-1<<endl;
    }
}