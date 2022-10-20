//the monk recently learnt about 
#include <stdio.h>
int main()
{
    int n,m,i,j=0,big,bigger,biggest;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("-1\n-1\n");
    for(i=2;i<n;i++){
         biggest=bigger=big=-1;
        for(j=0;j<=i;j++){
            if(a[j]>big){
                biggest=bigger;
                bigger=big;
                big=a[j];
            }
            else if(a[j]>bigger){
                biggest=bigger;
                bigger=a[j];
            }
            else if(a[j]>biggest)
                biggest=a[j];
        }
        if(a[i]>biggest) {if(biggest<big) m++;}
        printf("%d\n",big*biggest*bigger);
    }
	return 0;
}