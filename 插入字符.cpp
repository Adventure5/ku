#include <stdio.h>
#include <string.h>
 int main(void)
 {
 	 char str[20],ch; 
 	 int i,n;
 	 printf("�����ַ���:  "); 
 	 gets(str);
 	 printf("���������ַ�:  "); //�ͺ��������˳������� 
 	 scanf("%c",&ch);
 	 printf("��������λ��:  "); 
 	 scanf("%d",&n);
// 	 str[strlen(str)]='\0'; 
 	 for(i=strlen(str)-1;i>=n;i--)
 	 {
 	 		  str[i+1]=str[i];
	  }
	   	 
	str[n]=ch;
    printf("�ı���ַ���:  "); 
 	printf("%s",str);
	 return 0;
 }
