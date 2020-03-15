#include<iostream>
using namespace std;
void level()
{
	int c=0,num;
	for(int i=0;i<5;i++){
		cin>>num;
		if(num==1)
			c++;
	}
	switch(c)
        {
            case 0:
                printf("Beginner\n");break;
            case 1:
                printf("Junior Developer\n");break;
            case 2:
                printf("Middle Developer\n");break;
            case 3:
                printf("Senior Developer\n");break;
            case 4:
                printf("Hacker\n");break;
            case 5:
                printf("Jeff Dean\n");break;
    }
}
int main(void)
{
	int n;
	cin>>n;
	while(n--){
		level();
	}
}