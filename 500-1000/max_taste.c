#include <stdio.h>

int main() {
	// your code goes here
	int a,b,c,d,t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    int x=(a>b)?a:b;
	    int y=(c>d)?c:d;
	    int sum=x+y;
	    printf("%d\n",sum);
	}
	
}

