#include <stdio.h>

int main() {
	// your code goes here
	int t, s1,s2,s3,d1,d2,d3;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&d1,&d2,&d3);
	    scanf("%d%d%d",&s1,&s2,&s3);
	    
	    
	    int ts=s1+s2+s3;
	    int td=d1+d2+d3;
	    
	    if(td>ts){
	        printf("DRAGON\n");
	    } else if(ts>td){
	        printf("SLOTH\n");
	    }else{
	        if(d1>s1){
	            printf("DRAGON\n");
	        }else if(s1>d1){
	            printf("SLOTH\n");
	        }else{
	            if(d2>s2){
	                printf("DRAGON\n");
	            }else if(s2>d2){
	                printf("SLOTH\n");
	            }else{
	                printf("TIE\n");
	            }
	        }
        }
    }
	    
	    
	return 0;
}

