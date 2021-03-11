#include<stdio.h>
#include<string.h>
main()
{
 char j[50],i[50]="";
 int x,y,k,len,c=0; printf("Enter data in binary form : ");
 scanf("%s",&j);
 len=strlen(j);
 printf("The string lenght is : %d",len);
 k=strlen("01111110");
 for(x=8,y=0;x<len-8;x++,y++)
 {
 if(j[x]=='1')
 {
 c++;
 if(c==5)
 {
 i[y]=j[x];
 x=x+1;
 c=0;
 }
 else
 {
 i[y]=j[x];
 }
 }
 else
 { c=0;
 i[y]=j[x];
 } }
 i[y]='\0';
 printf("\n%s",i);
}

