#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        set<int> st;
        while(n){
            st.insert(n%10);
            n/=10;
        }
        int c=st.size();
        cout<<c*c*c<<endl;
    }
}