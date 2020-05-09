#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        set<char> st;
        for(int i=0;i<str.size();i++)
            st.insert(str[i]);
        cout<<st.size()<<endl;
    }
}