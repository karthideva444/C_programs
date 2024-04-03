
extern void variables(){
    int x=100;
    printf("val x : %d\n",x);

}

// #include<stdio.h>

// int main (){

//   int a,b,c;
//   float x;
//   printf("\nEnter 2 Nos : ");
//   scanf("%d%d",&a,&b);
//   c = a+b;
//   printf("\ntotal : %d",c);
//   c = a-b;
//   printf("\nsub : %d",c);
//   c = a*b;
//   printf("\nmul : %d",c);
//   x = (float)a/(float)b;
//   printf("\ndiv : %0.2f",x);
//   c = a%b;
//   printf("\nmod : %d",c);
//     return 0;
// }

      // #include<stdio.h>
      //     int main ()
      //     {
      //     float bs,da,hra,gs;
      //     printf("\nEnter your basic salary :");
      //     scanf("%f",&bs);
      //     da= bs*0.4;
      //     hra= bs*0.2;
      //     gs= bs+hra+da;
      //     printf("\nBasic salary : %0.2f",bs);
      //     printf("\nDA :%0.2f",da);
      //     printf("\nhra :%0.2f",hra);
      //     printf("\n gross : %0.2f",gs);
      //     return 0;
      // }

// #include<stdio.h>
// int main(){
// float km,m,cm,ft,i;
// printf("\nEnter thr kilometers :");
// scanf("%f",&km);
// m = km*1000;
// cm = m*100;
// ft = cm /2.54;
// i = ft/12;
// printf("\nkm :%f",km);
// printf("\nm :%f",m);
// printf("\ncm :%f",cm);
// printf("\nft :%f",ft);
// printf("\ni :%f",i);
//   return 0;
// }

// #include<stdio.h>
// int main (){
//  int m1,m2,m3,m4,m5,mark;
//  float avg;
//  printf("\nenter the 5 marks :");
// scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
//  mark =m1+m2+m3+m4+m5;
//  avg = mark/5;
// printf("\n The total mark is :%d",mark);
// printf("\nThe average mark is :%0.2f",avg);
// return 0;
// }
 
// #include<stdio.h>
// int main(){
//   int f,c;
//   f = 6;
  // printf("\nEnter the temperture in farent :");
  // scanf("%d",&f);
//    c = (f-32)*(5.0/9.0);
//   printf("\nThe degree celsius is : %d",c);
//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int a,b,c,d,e,f,g,h,i,sum=0;
//   // printf("\n Enter th five digit number: ");
//   // scanf("%d",&a);
//   a=12345;
//   b=a/10;
//   c=a%10;
//   d=b/10;
//   e=b%10;
//   sum+=c;
//   sum+=e;
//   f=d/10;
//   g=d%10;
//   sum+=g;
//   h=f/10;
//   sum+=h;
//   i=f%10;
//   sum+=i;
//   printf("\ntotal : %d",sum);

//   return 0;

// }

// #include<stdio.h>
// int main(){
//   int amount;
//   printf("\nEnter the amount : ");
//   scanf("%d",&amount);

//   printf("\nThe 100 rupees note in the total amount is :%d",(amount/100));
//   printf("\nThe 50 rupees note in the total amount is  :%d",(amount%100)/50);
//   printf("\nThe 10 rupees note in the total amount is  :%d",((amount%100)%50)/10);
//   printf("\nThe remaining money are                    :%d",((amount%100)%50)%10);

//   return 0;

// }

// #include<stdio.h>
//   int main(){
//   int sp,cp,pf;
//   printf("\nEnter the total selling price of 15 items :");
//   scanf("%d",&sp);
//   printf("\nEnter the total profit earned for 15 items :");
//   scanf("%d",&pf);
//   cp = (sp-pf)/15;
//   printf("\n The cost price of 1 item is :%d",cp);
//     return 0;
//   }

  // #include<stdio.h>

  // int main (){

  // char name[10];
  // int age;
  // printf("\n Enter your name :");
  // scanf("%s",name);
  // printf("\n Enter your age :");
  // scanf("%d",&age);
  // if(age>18){ 
  //   printf("\n %s age is %d he is eligible for vote",name,age);
  // }else if (age==18)
  // {
  //    printf("\n %s age is %d he is eligible for vote but have to wait ",name,age);
  // }else if(age==15){
  //   printf("\n%s age is %d so he younger for vote",name,age);
  // }else{
  //   printf("\n%s have to go school because he is %d",name,age);
  // };
  //   return 0;
  // }

// #include<stdio.h>

// int main(){
  
//   char variable;
//   printf("\n Enter the character :");
//   scanf("%c",&variable);
//   switch(variable){
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//     printf("\n %c is vowel",variable);
//     break;
//   default:
//   printf("\n%c is not a vowel",variable);
//   break;
//   }

//   return 0;
// }

// #include<stdio.h>

// int main(){

//   int n,d1,d2,d3,a;
//   printf("\nEnter the 3 digit number :");
//   scanf("%d",&n);
//   d1=n%10;
//   a=n/10;
//   d2=a%10;
//   d3=a/10;
//   a=(d3*d3*d3)+(d2*d2*d2)+(d1*d1*d1);
//   if (a==n)
//   {
//     printf("\n %d is an arm strong number",n);
//   }else{
//     printf("\n %d is not an arm strong number",n);
//   }
  
//   return 0;
// }

// #include<stdio.h>

// int main(){

//   int n,q,g,net=0;
//   reorder:
//   printf("\n\t\t          MENU CARD");
//   printf("\n\t \t1.coffee            Rs:15");
//   printf("\n\t \t2.tea               Rs:10");
//   printf("\n\t \t3.cold_coffee       Rs:25");
//   printf("\n\t \t4.milkshake         Rs:50");
//   printf("\n Enter your choice :");
//   scanf("%d",&n);
 
//   if (n==1)
//   {
//      printf("\nyou have selected coffee");
//      printf("\n Enter the quantity :");
//      scanf("%d",&q);
//      net=net+(q*15);
//   }else if (n==2)
//   {
//    printf("\nyou have selected tea");
//      printf("\n Enter the quantity :");
//      scanf("%d",&q);
//      net=net+(q*10);
//   }else if (n==3)
//   {
//     printf("\nyou have selected cold_coffee");
//      printf("\n Enter the quantity :");
//      scanf("%d",&q);
//      net=net+(q*25);
//   }else if(n==4)
//   {
//     printf("\nyou have selected milk_shake");
//      printf("\n Enter the quantity :");
//      scanf("%d",&q);
//      net=net+(q*50);
//   }else
//   {
//     printf("\n you are not entered anything ");
//   return 0;
//   }
//   printf("\nDo you want anything press 1 :");
//   scanf("%d",&g);
//   if (g==1)
//   {
//    goto reorder;
//   }else
//   {
//     printf("your total amount is:%d",net);
//     printf("\nThank you come again");
//   }
  
// }


// #include<stdio.h>
// int main(){
  
//   int i=0;
//   karthi:
//   printf("\n%d",i);
//   i++;
//   if (i!=5)
//   {
//     goto karthi;
//   }
  
//   // printf("\nend");

//   return 0;

// }

//how do you find a second largest number in an array without sorting.

// #include<stdio.h>
// int main(){
  
//   int i=1,n;
//   printf("\nEnter the Limit : ");
//   scanf("\n%d",&n);
//   while (i<=n)
//   {
//     printf("\n%d",i*2);
//     i+=2;
//   }
//   return 0;
// }


// #include<stdio.h>
// int main()
// {
//   int i=0,n;
//   printf("\nEnter the limit :");
//   scanf("%d",&n);
//   do{
//     printf("\n%d",i);
//     i+=2;
//   }while(i<=n);
//   return 0;
// }


// #include<stdio.h>

// int main(){

//   int i,n,v,a;
//   printf("\n Enter the value start from :");
//   scanf("\n%d",&n);

//   printf("\n Enter the limit :");
//   scanf("\n%d",&v);

//   printf("\n Enter the variations :");
//   scanf("\n%d",&a);
//   for (i=n; i<=v; i+=a)
//   {
//     printf("\n%d",i);
//   }
//   return 0;
// }

// #include<stdio.h>
 
// int main(){

//   int i,j;
//   for ( i = 0; i < 5; i++)
//   {
//    for (j =0; j < 5; j++)
//    {
//     printf("*");
//    }
//   printf("\n");
   
//   }
  

//   return 0;
// }

// #include<stdio.h>

// int main(){

//   int i,j;

//   for(i=0;i<=5;i++)
//   {
//     for(j=0;j<=i;j++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }  

  
//   return 0;
// }


// #include<stdio.h>

// int main(){

//   int i;
//   for (i=0;i<=10;i++)
//   { 
//     if(i==8)
//     {
//         break;
//     }
//     if(i==4)
//     {
//       continue;
//     }
//     printf("\n%d",i);
//   }

//   return 0;
// }


// #include<stdio.h>

// int main()
// {
//      int i,n,num,sum=0;
//     printf("\n Enter the limit :");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//       printf("\n Enter the numbers :");
//       scanf("%d",&num);
//       if(num==0)
//           continue;
//       sum+=num;
//     }

//     printf("\ntotal number :%d",sum);
//     return 0;
// }

// #include<stdio.h>


// int main()
// {
//   int i;
//   char a;
//   a='a';
//   for(i=0;i<=255;i++)
//   {
//     printf("\n%d : %c",i,i);

//   }
//   printf("\n%c : %c",a,a-32);
//   return 0;
// }

// #include<stdio.h>

// int main()
// {

//   int i;
//   for(i=-5;i<=1;i--)
//   {
//       printf("\n%d",i);
//   }

//   return 0;
// }

// #include<stdio.h>

// int main()
// {
//  int i,n,a[10];
//  printf("\n Enter the limit :");
//  scanf("%d",&n);
//  for(i=1;i<=n;i++)
//  {
//   printf("\n Enter the value :");
//   scanf("%d",&a[i]);
//  }
//  for ( i = 1; i <=n; i++)
//  {
//    printf("%d",a[i]);
//  }
 

//   return 0;
// }

//  #include<stdio.h>

//  int main ()
//  {
  
//   int a[100][100],b[100][100],c[100][100];
//   int i,j,m,n;

//   printf("\n Enter the rows :");
//   scanf("%d",&n);
//   printf("\n Enter the columns :");
//   scanf("\n%d",&m);

//   //----------------------
//   for ( i = 0; i < n; i++)
//   {
//     for ( j = 0; j < m; j++)
//     {
//       printf("Enter the values :a[%d][%d]",i,j);
//       scanf("%d",&a[i][j]);
//     }
    
//   }
//   //-------------------
//   for ( i = 0; i < n; i++)
//   {
//     for ( j = 0; j < m; j++)
//     {
//       printf("Enter the values :b[%d][%d]",i,j);
//       scanf("%d",&b[i][j]);
//     }
//   }
//   //------------------------
//   for ( i = 0; i < n; i++)
//   {
//     for ( j = 0; j < m; j++)
//     {
//       c[i][j] = a[i][j]+b[i][j];
//       printf("\t%d",c[i][j]);
      
//     }
//     printf("\n");
//   } 
  
  
  
//   return 0;
//  }


 //------------------------------
   
// #include <stdio.h>
// #include <stdlib.h>
// // Comparison function for qsort
// int compare(const void *a, const void *b) {
//     // Cast the elements to the correct data type and compare them
//     return (*(int*)a - *(int*)b);
// }

// int main() {
//     int arr[] = {5, 2, 9, 1, 5, 6},n = sizeof(arr) / sizeof(arr[0]);;
//     printf("Original array: ");
//     for (int i = 0; i < n; i++) 
//     {
//         printf("%d ", arr[i]);
//     }
//     qsort(arr, n, sizeof(int), compare);
//     printf("\nSorted array: ");
//     for (int i = 0; i < n; i++) 
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


//  #include<stdio.h>
//  #include<string.h>

//  int main()
//   {
//     char a[20],c[20];
//     char x[]={"RAM"};
//     char y[]={"KUMAR"};
//     printf("\n x : %s",x);
//     printf("\nEnter the string :");
//     gets(a);
//     printf("\ncompare   : %d",strcmp(x,a));
//     // printf("\nlength    : %d",strlen(a));
//     printf("\ncopy      : %s",strcpy(c,a));
//     strcat(x,y);
//     printf("\nconcat    : %s",x);
//     return 0;
//   }

// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     printf("\nsqrt : %0.2f",sqrt(4));
//     printf("\npow : %0.2f",pow(2,3));
//     // printf("\nabs : %d",abs(-2));
//     printf("\nceil : %0.2f",ceil(2.9));
//     printf("\nceil : %0.2f",ceil(2.3));
//     printf("\nfloor : %0.2f",floor(2.9));
//     printf("\nfloor : %0.2f",floor(2.3));
//     printf("\nround : %0.2f",round(2.9));
//     printf("\nround : %0.2f",round(2.3));


//   return 0;
// }

// #include<stdio.h>

// void add(){
// int a,b,c;
//  printf("\n Enter the A value :");
//   scanf("%d",&a);
//   printf("\n Enter the B value :");
//   scanf("%d",&b);
//   c=a+b;
//   printf("\n%d",c);
// }
// int main()
// {
// int n,i;
// printf("\n Enter the limit :");
// scanf("%d",&n);
// for ( i = 0; i < n; i++)
// {
//   add();
// }
 
//   return 0;
// }

//function declaration
//function definition
//function calling


// #include<stdio.h>

// // C program to traverse the array
 
// #include <stdio.h>

//   int main(){
//    int i,a[]={10,2,3,4};
//    for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
//    {
//     printf("\nvalue :%d",a[i]);
//    }
   

//     return 0;
//   }
 

// #include<stdio.h>
// int add();
// int main(){
// int a;
// a=add();
// printf("\n Total : %d",a);
// return 0;
// }

// int add()
// {
// int a,b;
// printf("\n Enter the values of A&B :");
// scanf("%d%d",&a,&b);
//   return a+b;
// }

// #include<stdio.h>
//     int add(int,int);
//     int main(){
//     int a,b;
//     printf("\n Enter the values of A&B :");
//     scanf("%d%d",&a,&b);
//     a=add(a,b);
//     printf("\nTotal : %d",a);
//       return 0;
//     }
//     int add(int x,int y)
//     {

//     return x+y;
//     }


//callby reference function
// #include<stdio.h>

// void swap(int *x,int *y)
// {
//   int temp;
//   temp = *x;
//   *x=*y;
//   *y=temp;

// }

// int main ()
// {
//   int a,b;
//   printf("\n Enter the value of A & B :");
//   scanf("%d%d",&a,&b);
//   printf("\nBefore swap A : %d | B : %d",a,b);
//   swap(&a,&b);
//   printf("\nAfter swap A : %d | B : %d",a,b);


//   return 0;
// }

//local variables

// #include<stdio.h>

//   int i;

// int main()
// {
//   // int i;

// for (int i = 0; i < 5; i++)
// {
//  printf("\n%d",i);
// }
//  printf("\n%d",i);

//    return 0;
// }

// #include<stdio.h>
 
//  int main()
//  {

//   int a=10,*p,**q,***r;
//   p=&a;

//   printf("\n value of a :%d",a);
//   printf("\n address of a :%d",&a);
//   printf("\n value of p :%d",p);
//   printf("\n address of p :%d",&p);
//   printf("\n P dereferencing :%d",*p);
//   printf("\n---------------------");

//   q=&p;
//   printf("\n value of p :%d",p);
//   printf("\n address of p :%d",&p);
//   printf("\n value of q :%d",q);
//   printf("\n address of q :%d",&q);
//   printf("\n q dereferencing :%d",**q);
//   printf("\n---------------------");

//   r=&q;
//   printf("\n value of q :%d",q);
//   printf("\n address of q :%d",&q);
//   printf("\n value of r :%d",r);
//   printf("\n address of r :%d",&r);
//   printf("\n r dereferencing :%d",***r);
//   printf("\n---------------------");


//   return 0;
//  }


// #include<stdio.h>

// int main ()
// {
 

//  int arr[]={10,20,30,40,50};
//  int *p;

//  p=&arr;
//    printf("\n value of p :%d",*p);
//       printf("\n address of p :%d",&p);
//  printf("\n *p :%d",*p);
//  printf("\n *++p :%d",*++p);
//   printf("\n address of p :%d",&p);
//   printf("\n value of p :%d",*p);
//    printf("\n address of p :%d",&p);
//   printf("\n value of p :%d",*p);


//   return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {

//     int i;
//     int *ptr=(int *)calloc(3,sizeof(int));
//     // if (ptr==NULL)
//     // {
//     // printf("memory not available...");
//     // exit(1);
//     // }
//     // printf("\n Enter the 3 numbers : \n");
//    for ( i = 0; i < 3; i++)
//    {
//       scanf("%d",ptr+i);
//    }
//    ptr=(int *)realloc(ptr,sizeof(int));
//    for ( i = 3; i < 5; i++)
//    {
//       scanf("%d",ptr+i);
//    }
//    for ( i = 0; i < 5; i++)
//    {
//       printf("%d ",*(ptr+i));
//    }
//   return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>


// int *getting_values()
// {
// int i;

// int *ptr=(int *)malloc(3*sizeof(int));
// for ( i = 0; i < 3; i++)
// {
// printf("\nEnter the number :");
// scanf("%d",ptr+i);
// }
// return ptr;
// }


// int main()
// {
// int i,n=0;
// int *ptr=getting_values();
// for ( i = 0; i < 3; i++)
// {
//   n+=*(ptr+i);
// }
//   printf("\nTotal :%d",n);
//   free(ptr);
//   ptr=NULL;

//   return 0;
// }


// #include<stdio.h>
// struct student
// {
// char *name;
// int age;
// float percent;
// };

// int main ()
// {
// struct student obj;
// obj.name="karthick";
// obj.age=22;
// obj.percent=100;
// printf("\nName   :%s",obj.name);
// printf("\nAge   :%d",obj.age);
// printf("\nPercent   :%0.2f",obj.percent);
//   return 0;
// }


// #include<stdio.h>
//  struct student 
// {
//   char *name;
//   int age;
//   float per;
// }student;

// int main ()
// {
//   struct student obj={"karthi",22,87.7};

//   printf("\nStudent name : %s",obj.name);
//   printf("\nStudent age : %d",obj.age);
//   printf("\nStudent per : %0.2f",obj.per);
//   return 0;

// }


// #include<stdio.h>
// struct student
// {
// char *name;
// int age;
// float per;
// };
// void display(struct student *ptr)
// {
//   printf("\nName : %s",ptr->name);
//    printf("\nage : %d",ptr->age);
//     printf("\nfloat : %0.1f",ptr->per);
// }
// int main ()
// {
//   struct student obj={"karthi",22,54.5};
//   struct student *ptr=&obj;
//   display(ptr);
//   return 0;
// }

// #include<stdio.h>

// int main()
// {

//   return 0;
// }



// #include <Keypad.h>
// #include <LiquidCrystal_I2C.h>

// const row =4;
// const  column =4;

// char keys [row][column]={
// {'1','2','3','A'},
// {'4','5','6','B'},
// {'7','8','9','C'},
// {'*','0','#','D'}
// };

// pin_row[row]={9,8,7,6};
// pin_column[column]={5,4,3,2};

// Keypad keypad = Keypad(makeKeymap(keys),pin_row,pin_column,row,column);
// LiquidCrystal_I2C lcd(0x27, 16, 2);

// int cursor =0;

// char m ; // Set your desired password here
// char n ;
// // char key[10];


// void setup() 
// {
  // lcd.init();
  // lcd.backlight();
  // lcd.println("hello...");
  // delay(1000);
  // lcd.clear();
  

// }
// void loop()
// {
//   printf("\nEnter 4 pins :");
//   scanf("%s",&m);
//   printf("entered pin :",m);
//   // delay(2000);
//   // lcd.clear();
  
//   printf("Re-enter pin :");
//   scanf("%s",&n);
//   if(m==n)
//   {
//     printf("valid pin :");
//   }
//   else{
//     printf("Invalid pin");
//   }

      
// } 
// #include<stdio.h>
  
// int main ()
// {
//   int m,n;
//   // delay(2000);
//   // lcd.clear();
  
//   printf("\nEnter 4 pins :");
//   scanf("%d",&m);
//   printf("\nRe-enter pin :");
//   scanf("%d",&n);
//   if(n==m)
//   {
//     printf("\nvalid pin :");
//   }
//   else{
//     printf("\nInvalid pin");
//   }

//   return 0;
// }


// #include<stdio.h>
// #include<string.h>

// int weight = 60;
// char input1[5] ="high";
// char input2[10] ="low";

// void forward ()
// {
//   if(input1 == "low" && input2 == "high")
//   {
//     printf("Run forward");
//   }
// }

// void Backward ()
// {
//   if(input1 == "high" && input2 == "low")
//   {
//     printf("Run Backward");
//   }
// }

// void stop()
// {
//  if(input1 == "low" && input2 == "low")
//   {
//     printf("STOP");
//   }
// }


// int main ()
// {


//   if (weight >=60 && input1 == "low" && input2 =="high")
//   {
//     forward();
//   }
//   else if(weight >=60 && input1 == "high" && input2 =="low")
//   {
//     Backward();
//   }
//   else{
//     stop();
//   }

//   return 0;
// }
















