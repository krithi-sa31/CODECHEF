#include <stdio.h>

int main() {
	// your code goes here
	int n,k,t,i;
	scanf("%d",&t);
	while (t--){
	    scanf("%d%d",&n,&k);
	    int a[n];
	    
	   for(i=0;i<n;i++)
	   {
	    scanf("%d",&a[i]);
	   }
	    
	    int protein=0;
	    int ok=1;
	    for(i=0;i<n;i++){
	        protein+=a[i];
	        if(protein<k){
	            printf("NO %d\n",i+1);
	            ok=0;
	            break;
	            
	        }
	        protein-=k;
	    }
	    
	    if(ok)
	    {
	        printf("YES\n");
	    }
	 
	}
  return 0;
}

