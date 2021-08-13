/*2 Write a C program to copy one array to another using pointers.*/
#include <stdio.h>
#include<string.h>
int copy(int*,int*,int*);
int main()
{
    int arr[10]={0,3,2,1,6,4,7,5,8,9},arrc[10]={0};
    printf("%d\n",copy(arr,arrc,arrc));
    return 0;
}
int copy (int *p,int *q,int *s){
    if(p==s-2)
    return q-s;/*diff b/w base address and the last ele copied..no var/sizeof involved*/ 
    else
    *q=*p;
    printf("%p->%d->%p\n",p,*q,q);
    copy(p+1,q+1,s);/*recursive ptr copy*/
}