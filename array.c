// #include<stdio.h>
// int main ( ){
//    int a[5] = {10,20,30,40,50};

//    printf ("elements of the array are\n");
//    for (int i=0; i<5; i++)
//       printf ("%d ", a[i]);
//       return 0;
// }

#include<stdio.h>  
int main(){      
int i=0,j=0;    
int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};     
//traversing 2D array    
for(i=0;i<4;i++){   //row 
 for(j=0;j<3;j++){  //colum 
   printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);    
 }//end of j    
}//end of i    
return 0;  
}    
