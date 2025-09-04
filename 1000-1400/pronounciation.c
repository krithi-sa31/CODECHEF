#include <stdio.h>

int main() {
	// your code goes here
	int t, n,count;

	
	scanf("%d",&t);
	while (t--){
	    scanf("%d",&n);
	    char s[101];
	    scanf("%s",s);
	    count=0;
	    int ishard=0;
	    for(int j=0;j<n;j++)
	    {
	        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
	        {
	            count=0;
	        }
	        else {
	            count++;
	            if (count>=4)
	            {
	                ishard=1;
	                break;
	            }
	        }
	        
	    }
	    if(ishard)
	    {
	        printf("NO\n");
	    }
	    else
	    {
	        printf("YES\n");
	    }
	}

}

