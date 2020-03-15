#include <iostream>
using namespace std;

int main() 
{
    int t,h,m,c,i,x=10,a,b;
    cin >>t;
    while(t--)
    {
        cin>>h;
        cin>>m;
        c=1;
        for(i=1;i<=9;i++)
        {
            a=i;
            b=i;
            while(a<h)
            {
               while(b<m)
               {
                  c++;
                  b=b*x+i;
               }
               a=a*x+i;
               b=i;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

/*
#include<iostream>
using namespace std;
int num_digits(int n)
{
	int c=0;
	while(n){
		c++;
		n/=10;
	}
	return c;
}
int conv(int n,int t)
{
	int c=0;
	while(t--){
		c=c*10+n;
	}
	return c;
}
void fun(int m,int h)
{
	int ms=num_digits(m);
	int hs=num_digits(h);
	int c=1,x,y;
	for(int i=1;i<10;i++){
		x=conv(i,ms);
		y=conv(i,hs);
		if(x<m && y<h)
			c+=ms*hs;
		else if(x<m && y>h)
			c+=ms*(hs-1);
		else if(x>m && y<h)
			c+=(ms-1)*hs;
		else
			c+=(ms-1)*(hs-1);
	}
	cout<<c<<endl;
}
int main(void)
{
	int t,min,hour;
	cin>>t;
	while(t--){
		cin>>min>>hour;
		fun(min,hour);
	}
}
*/