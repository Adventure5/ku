#include <stdio.h>
#include <string.h>
 int main(void)
 {
 	 char str[20],ch; 
 	 int i,n;
 	 printf("输入字符串:  "); 
 	 gets(str);
 	 printf("输入插入的字符:  "); //和后面的输入顺序调换。 
 	 scanf("%c",&ch);
 	 printf("输入插入的位置:  "); 
 	 scanf("%d",&n);
// 	 str[strlen(str)]='\0'; 
 	 for(i=strlen(str)-1;i>=n;i--)
 	 {
 	 		  str[i+1]=str[i];
	  }
	   	 
	str[n]=ch;
    printf("改变后字符串:  "); 
 	printf("%s",str);
	 return 0;
 }
