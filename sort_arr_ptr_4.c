/*4. sort an array elements using the ptrs*/
#include<stdio.h>
void sort(int*,int*,int*);
void swap(int*,int*);
int main(){
    int arr[]={1,5,2,7,8};/*array declaration,def,init*/
    int size=sizeof(arr)/sizeof(int),i=0;/*set end pt by last ele*/
   
    int *ptr=arr+1,*pptr=ptr+size-1;
   
    
       while(ptr!=pptr){/*to clr indicate stack frame*/
        sort(arr,ptr,ptr+1);/*base add,strt pt,adj ele  &arr[0],&arr[0]=1,&arr[1]=5*/
       printf("\n");/*arr={1,5,2,7,8}*/
       ptr++;
        }
       
      
   for(i=0,ptr=arr;i<5;i++)
   printf("%p  ->  %d\n",ptr++,*ptr);/*print res*/
    return 0;
}
void sort(int *p,int *q,int *s){
    
    if(q==p-1)/*return to whr its called once comp address reaches strt address*/
    return;
    
    
    
    
   printf("%p - > %d\n",q,*q);/*print stack frame ele*/
    
    if(*s<*q)/*check adj ele > ref ele*/
    swap(s,q);/*if so swap*/
    s--;/*dec ref*/
    q--;/*dec adj*/
    sort(p,q,s);/*recur call for next iteration*/
    
    
   /* printf("%p - > %d\n",q,*q);*//*recur instead while in main but for clr indication of stack frame commented*/
    /*sort(p,q,s+1);*/
}
void swap(int *w,int *x){
    int temp;
    temp=*w;/*exchange elements*/
    *w=*x;
    *x=temp;
    return;
}