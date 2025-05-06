#include <stdio.h>

int main() {
	// your code goes here
	int t,n,x;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d",&n,&x);
	    int slices=n*x;
	    printf("%d\n",((n*x)+3)/4);
	    
	}

}
