#include <stdio.h>
#include <omp.h>
#include <sys/time.h> // for gettimeofday()
void main()
{
  struct timeval start,end;
    gettimeofday(&start, NULL );
 int i,j,sum=0;
    for(i=2;i<10000;i++)
{
    for(j=2;j<i;j++)
{
    if(i%j==0)break;
}
  if(i==j)
{
      sum+=1;
}
}
  printf("geshu:%d\n",sum);
gettimeofday(&end, NULL );
long timeuse =1000000 * ( end.tv_sec - start.tv_sec ) + end.tv_usec - start.tv_usec;
printf("time=%f s\n",timeuse/1000000.0);
}

