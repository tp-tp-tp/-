#include<stdio.h>
#include <sys/time.h>

int main()
{

    int n,i;
    double a[1000],b[1000],sum = 0;
    printf("����������ά����");
    scanf("%d",&n);
    printf("����A������");
    for(i = 0;i<n;i++) scanf("%lf",&a[i]);
    printf("����b������");
    for(i = 0;i<n;i++) scanf("%lf",&b[i]);
    struct timeval start,end;
    gettimeofday(&start, NULL );
    #pragma acc parallel
    for(i=0;i<n;i++) sum += a[i]*b[i];
    printf("A��B = %lf\n",sum);
    gettimeofday(&end, NULL );
    int timeuse =1000000 * ( end.tv_sec - start.tv_sec ) + end.tv_usec - start.tv_usec;
    printf("time=%d us\n",timeuse);
    return 0;
}
