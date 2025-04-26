#include <stdio.h>

int main() {
	// your code goes here
	int a,b;
	scanf("%d%d",&a,&b);
	int c=a+b;
	printf("%d",c);
	printf("%d",1);

}

//alternative solution

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", 10 * (a + b) + 1);
    return 0;
}
