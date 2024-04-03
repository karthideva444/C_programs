// #include <stdio.h>


// void first()
// {
//     float a=1.3,b=3.6;
//     printf("%f%f",a,b);
// };

// int main()
// {   
//     float a,b;
//     printf("\nEnter the limit :");
//     scanf("%f",&a);
//     printf("%f",a);
//     return 0;
// }

// second largest number in a array
// #include<stdio.h>
// int main(){

//     int arr[10]={5,6,1,4,9};
//     int max=-1;
//     int smax=-1;
//     for(int i=0;i<sizeof(arr)/4;i++){
//         if(arr[i]> max){
//             smax=max;
//             max=arr[i];
//         }else if (arr[i] < max)
//         {
//            smax= arr[i];           
//         }
//     }
//     printf("%d",smax);

//     return 0;
// }


// string reverse
// #include<stdio.h>
// int main(){
//      char arr[10]={'a','b','c'};
//      int length = sizeof(arr)/sizeof(arr[0]);

//      for (int i = length-1; i >= 0; i--)
//      {
//         printf("%c",arr[i]);
//      }
     
//     return 0;
// }


// two sum 
// #include<stdio.h>
// int main(){
//     int arr[]= {1,4,6,3,2,8,7};
//     int res= 3;
//     int length = sizeof(arr)/sizeof(arr[0]);

//     for (int i = 0; i < length-1; i++)
//     {
//         for (int j = (i+1); j < length; j++)
//         {
//             if (arr[i]+arr[j]==res)
//             {
//                 int a = arr[i];
//                 int b = arr[j];
//                 printf("%d%d",a,b);
//             }            
//         }        
//     }
//     return 0;
// }


//three sum 
// #include<stdio.h>

// int main(){

//     int arr[]= {7,5,2,3,5,0,1,4};
//     int res= 4;
//     int length = sizeof(arr)/sizeof(arr[0]);

//     for (int i = 0; i < length-1; i++)
//     {
//         for (int j = i+1; j < length; j++)
//         {
//             for (int k = j+1; k < length; k++)
//             {
//                 if (arr[i]+arr[j]+arr[k]==res)
//                 {
//                     int a = arr[i];
//                     int b = arr[j];
//                     int c = arr[k];
//                     printf("%d%d%d",a,b,c);
//                 }
                
//             }
            
//         }
        
//     }
    

//     return 0;
// }

// #include <stdio.h>
// #include<stdlib.h>
// #include "variables.c"

    // int variables(int x,int y);
        
    // int main() {

    //     printf("%d",n);
    //     printf("%d",m);
    //     return 0;

    // }

// #include<stdio.h>

// int main(){

//     int num1 = 10,num2 = 20,temp;
    //arithmetic method
    // num1 = num1+num2;//30
    // num2 = num1-num2;//10
    // num1 = num1-num2;//20
//---------------------
//temporary variable method
//     temp=num1;//10
//     num1=num2;//20
//     num2=temp;
// //------------------------

//     printf("%d\n",num1);
//     printf("%d\n",num2);

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter the num :");
//     scanf("%d",&num);
//     printf("%d",(num<<3)+num);
//         printf("%d",num*9);
    
// }


// #include<stdio.h>
// int main(){

//     int num;
//     printf("Enter any num :");
//     scanf("%d",&num);
//     if ((num&num-1) == 0)
//     {
//         printf("%d power of 2",num);
       
//     }else
//     {
//        printf("%d not power of 2",num);
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     for (int i = 1; i <= 5; i++){
//         printf("\n%d",i);}
//     return 0;
// }



// #include<stdio.h>

// #define min(num1,num2) ((num1) <= (num2)?(num1):(num2))

// int main(){

//     // int num1=1,num2=2;

//     printf("%d",min(1,2));

//     return 0;
// }

// #include<stdio.h>

// int main(){

//     int n,ch,qty,net=0;
//     start:
//     printf("WELCOME TO HOTEL\n");
//     printf("1.Tea             : 10 \n");
//     printf("2.Coffee          : 20\n");
//     printf("3.MilkShake       : 30\n");
//     printf("4.Boost           : 40\n");
//     printf("Enter your choice :\n");
//     scanf("%d",&ch);

//         if ( ch == 1)
//         {
//             printf("you have selected tea\n");
//             printf("Entered the qty :\n");
//             scanf("%d",&qty);
//             net = net + (qty*10);
//         }
//         else if ( ch == 2)
//         {
//             printf("you have selected coffee\n");
//             printf("Entered the qty :\n");
//             scanf("%d",&qty);
//             net = net + (qty*20);
//         }
//         else if ( ch == 3)
//         {
//             printf("you have selected milkshake\n");
//             printf("Entered the qty :\n");
//             scanf("%d",&qty);
//             net = net + (qty*30);
//         }
//         else if ( ch == 4)
//         {
//             printf("you have selected Boost\n");
//             printf("Entered the qty :\n");
//             scanf("%d",&qty);
//             net = net + (qty*40);
//         }
//         else{
//             printf("Invalid user input...\n");
//         }


//         printf("Do you want to continue press 1 :\n");
//         scanf("%d",&n);
//         if(n==1){
//             goto start;
//         }
//         else{
//             printf("Your Bill amount is : %d\n",net);
//         }


//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int *ptr = arr;

//         for (int i = 0; i < size; i++) {
//             printf("Element %d: %d\n", i + 1, *ptr);
//             ptr++;
//         }
//         return 0;
// }

// #include <stdio.h>

// int main()

// {

// int *i;

// int a[]={0,1,2,3,4,5};

// for(i=&a[0];i<&a[10];i++){

// printf("%d",*i);

// }

// return 0;

// }


//------------------


// #include <stdio.h>

// int main() {

//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int *ptr = arr;
//     for (int i = 0; i < size; i++) {
//         printf("Element %d: %d\n", i + 1, *ptr);
//         ptr++;
//     }

//     return 0;
// }


//---------------
//toggle an array


// #include <stdio.h>

// int toggleBit(int num, int position) {
//     // XOR the number with 1 left-shifted to the desired position
//     return num ^ (1 << position);
// }
// int main() {
//     int number = 10; // Binary: 1010
//     printf("Original number: %d\n", number);
//     int positionToToggle = 2; // 0-based index
//     number = toggleBit(number, positionToToggle);
//     printf("Number after toggling bit %d: %d\n", positionToToggle + 1, number);
//     return 0;
// }

// #include<stdio.h>

// int toggleBit(int num,int position){
//     return num ^ (1<< position);
// }

// int main (){
//     int number = 10;//1010
//     int position = 0;//1011
//     int res = toggleBit(number,position);
 
//     printf("\nafter toggle :%d",res);
//     return 0;
// }
