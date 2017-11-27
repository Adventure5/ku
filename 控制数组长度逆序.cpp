#include <stdio.h>
 int main(void)
 {
 	 int a[50],count=0,i,t;
 	 for(i=0;i<50;i++)
 	 {
 	 	scanf("%d",&a[i]);
		count++;                  //count 前后的问题 
 	 	if(getchar()=='\n') break;
	  }
//	  printf("%d\n",count);
	  for(i=0;i<count/2;i++)
	  {
	  	t=a[i];
	  	a[i]=a[count-1-i];
	  	a[count-1-i]=t;
	  }
	  for(i=0;i<count;i++)
	  printf("%d ",a[i]);
 	return 0;
 }
