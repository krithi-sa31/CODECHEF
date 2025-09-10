#include <stdio.h>

int main() {
	// your code goes here
	int t,a,b;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&a,&b);
	    
	    int limak_c=0;
	    int bob_c=0;
	    int turn=1;
	    
	    while(1){
	        if(turn%2!=0){
	            limak_c+=turn;
	            if(limak_c>a){
	                printf("BOB\n");
	                break;
	            }
	        }else{
	                bob_c+=turn;
	                if(bob_c>b){
	                    printf("LIMAK\n");
	                    break;
	                }
	            }
	            turn++;
	        }
	    }
	
    return 0;
}

