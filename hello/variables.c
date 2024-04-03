
//  extern int n = 10;

//  static const int m = 20;


#include<stdio.h>
int main(){

    int arr[]={1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr;
    for (int i = 0; i < length; i++)
    {
        printf("\nElement %d : %d",i+1,*ptr);
        *ptr++;
    }
    return 0;
}


#include<stdio.h>
int main(){
    


    return 0 ;
}