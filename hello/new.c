// #include<stdio.h>

// int main(){

//     char name[]= {'a','v','e','n','g','e','r','s'};
//     for(int i = 0,j = 7;i<=7;i++,j--){
//         if(name[i] < name[j]){
//             name[i] = name[j];
//         }
//         else{
//             name[i] = name[i];
//         }
//     }
//     for (int i = 0; i <= 7; i++)
//     {
//         printf("%c",name[i]);
//     }
    

//     // return 0;
// }

// int main(){

//     int i= -1,j =0;

//     label1:
//     while (i<0)
//     {
        
//         i++;
//         while (j<3)
//         {
//             printf("loop");
//             goto label1;
//         }       
//     }
    
// }

// int main(){

// int res= 5;
// int i,j,k,l;
// int **ptr = &res;

// for (i = 0; i < 5; i++)
// {

//     for ( k = 2; k<=7; k++)//35
//     {
//       res = res+1;
//     }
    
// }
// printf("%d",*ptr);

//     return 0;
// }


// int main(){

// int a=9,b=a,d=7,j=1;

// return 0;
// }
//  int k = 2021;
//     int cmpute(int a,int b){
//         k=k+(a*b);
//         return k;

//     }
// int main(){
//     int a=11,b=12,c=13;
//     a=cmpute(c,b);
//     c=cmpute(b,a);
//     // b=cmpute(a,c);   
//     printf("\n%d\n",c); 



//     return 0;
// }

// int main(){
   
//     int x=250,y=200,z=100,w=15;
//      start:
//     if (w==0)
//     {
//         printf("%d",x);
//     }
//     else{
    
//     while (w=0)
//     {
//         //  z=x+y;//450
//         // y=y-x+z;//400
//         // x=x-y+z;//300
//         x=x-1;//300
//         w=w-1;
        
//     };
//     goto start;
//     }   
//     return 0 ;
// }



//Find the output of the following program:
// #include<stdio.h>
// int main()
// {
// char a[] = {'b','c','d','e','f','g'}; 
// for (int i=1; i<=6; i++)
// {
//     a[i] = a[i] + i;
//     printf("%d",i);
// }
// for (int i=0; i<6; i++)
// {
// printf("%c",a[i]);
// }
// return 0;
// };

#include <stdio.h>

// int main() {
//     int T1 = 3572;
//     int TOTAL = 0;
//     int T2 = 0;
//     int T3 = 0;

//     if (T1 > 0) {
//         int T2 = T1%10; // 2
//         int T3 = (T2 * 10)+T2; // 22
//         T3 = T3 + 1; // 23
//         T1 = T1/10;//
//         TOTAL= T3;
//         // printf("%d", TOTAL);
//     } else {
//         printf("%d", TOTAL);
//     }

//     return 0;
// }



// int main (){
//     int i=10,j=10,k=20,J=10;

//     for (int m = 0; m <= 10; m++)
//     {
//         int l =++i + ++j - k--;
        
//     }
//     printf("%d%d%d%d",i,j,k,l);

//     return 0;
// }


#include<stdio.h>

int main(){

    char a[] = {'b','c','d','e','f','g'};
    for (int i = 1; i <= 6; i++)
    {
        printf("\n%c\n\n%c",a[i-1],a[i-1] + i);
        a[i-1]=a[i-1]+i;

    }
    for (int i = 0; i < 6; i++)
    {
        printf("%c",a[i]);
    }

    return 0;
}


