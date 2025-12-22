#include<stdio.h>
int multiply()
{

   int num;
   int first_number=30;
   int second_number=40;
   printf("\nmultiply: %d ",first_number*second_number); 
}

int divide()
{

    int first_number= 50;
    int second_number=40;
    printf("\ndivide: %d ",first_number/second_number);
}
int main()
{
    int num;
    printf("\n1.multiply");
    printf("\n2.divide");
    printf("\nenter a any number");
    scanf("%d",&num);

    if(num==1)
    {
         multiply();

    }
     else if(num==2)
    {
        divide();
    }


   
   

   return 0;
   
   }






