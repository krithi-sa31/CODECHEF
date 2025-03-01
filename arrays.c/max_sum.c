#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        // Your code goes here
        int max=a[0];
        int secmax=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                secmax=max;  //assign the old max to 2nd largest and then save the newly found largest to the max
                max=a[i];
            }
            else if(a[i]>secmax && a[i]!=max)
            {
                secmax=a[i]; //if new value is greater than the 2n largest but smaller than the largest, assign new value to second largest
            }
            
        }
        int maxsum=max+secmax;
        printf("%d\n",maxsum);
        
    }

    return 0;
}
