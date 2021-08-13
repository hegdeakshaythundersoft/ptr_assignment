/*3 Write a C program to copy one string to another string and find length of new string using pointers..*/
#include <stdio.h>
#include<string.h>
int copy(char*,char*,char *s);
int main()
{
    char str[10]="oranges",str_c[10];
    char *ptr=str,*ptr_c=str_c;
    printf("%s\n strlen = %ld\t  len_cal= %d\n",str_c,strlen(str_c),copy(ptr,ptr_c,ptr_c));
    return 0;
}
int copy (char *p,char *q,char *s){
    if(*p=='\0')
    return q-s;/*diff b/w base address and the last ele copied..no var/sizeof involved*/ 
    else
    *q=*p;
    copy(p+1,q+1,s);/*recursive ptr copy*/
    
    
}
