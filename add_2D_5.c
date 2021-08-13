/*


4)Write a C program to add 2D array using pointers.
*/

#include <stdio.h>
#define i_SIZE 3
#define j_SIZE 3
int main()
{
    int arr1[i_SIZE][j_SIZE]={{1,2,3},{5,6,4},{7,8,6}},arr2[i_SIZE][j_SIZE]={{1,2,3},{5,6,4},{7,8,6}};
   /*declared and initialized 2 arrays of 2D*/
  
   int *ptr_1=&arr1[0][0];/*base of arr1*/
   int *ptr_2=&arr2[0][0];/*base of arr2*/
   
   
   do{
       *ptr_1+=*ptr_2;/*adds 2nd array to array 1*/
       ptr_1++;/*pointer moves to next*/
       ptr_2++;
       
   }while(*ptr_2!=arr2[i_SIZE][j_SIZE]);
   
   register int i,j;
   for(i=0;i<i_SIZE;i++)
   for(j=0;j<j_SIZE;j++){
   printf("%d\t",arr1[i][j]);
   }
    
    return 0;
}

