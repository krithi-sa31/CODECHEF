#include <stdio.h>

int main() {
	// your code goes here
	int t,n,x;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d",&n,&x);
	    if(n<=x)
	    {
	        printf("0\n");
	    }
	    else
	    {
	        int needed=n-x;
	        int packets=needed/4;
	        if(needed%4!=0){
	            packets++;
	            
	        }
	        printf("%d\n",packets);
        }
	}
	return 0;

}

