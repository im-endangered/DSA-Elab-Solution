//sanam's dream came true
#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    printf("Complete linked_list:\n[h]=>");
    for(i=1;i<=n;i++){
        printf("%d=>",i);
    }
    printf("[h]\n");
    printf("Odd:\n[h]=>");
    for(i=1;i<=n;i++){
        if(i%2!=0)  printf("%d=>",i);
    }
        printf("[h]\n");
 printf("Even:\n[h]=>");
    for(i=1;i<=n;i++){
        if(i%2==0)  printf("%d=>",i);
    }
        printf("[h]\n");
	return 0;
}
