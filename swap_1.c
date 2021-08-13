/*Write a C program to swap two numbers using pointers.
*/
#include<stdio.h>
void swap(int,int);
void swap_r(int*,int*);
int main(){
    int a=10,b=20;
    int *ptra=&a;
    int *ptrb=&b;
    printf("a= %d b= %d\n",a,b);
    swap(a,b);
    printf("a= %d b= %d\n",a,b);
    swap_r(ptra,ptrb);
    printf("a= %d b= %d\n",a,b);
    return 0;
}
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void swap_r(int *m,int *n){
    int temp;
    temp=*m;
    *m=*n;
    *n=temp; 
    
}