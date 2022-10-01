//saravanan with his friends going to theatre for a movie
#include <stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=1; i<=N; i++){
        int odd=1;
        for(j=1;j<=i;j++){
           if(i%2==0){
               printf("%d ",odd+1);
           }
           else{
               printf("%d ",odd);
           }
           odd+=2;
        }
        printf("\n");
    }
	return 0;
}