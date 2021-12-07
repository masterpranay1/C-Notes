// #include<stdio.h>
// #include<math.h>
// int main() {
//     printf("%f", sqrt(125));
//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int num;
//     scanf("%d", &num);
//     if(num & 1) {
//         printf("Odd \n");
//     } else {
//         printf("Even \n");
//     }
//     return 0;
// }

//sum of 5 numbers
// #include<stdio.h>
// int main()
// {
//     float a,b,c,d,e,sum;
//     float average;
//     printf("enter the number a");
//     scanf("%f",&a);
//     printf("enter the number b");
//     scanf("%f",&b);
//     printf("enter the number c");
//     scanf("%f",&c);
//     printf("enter the number d");
//     scanf("%f",&d);
//     printf("enter the number e");
//     scanf("%f",&e);
//     sum=a+b+c+d+e;
//     average=sum/5;
//     printf("the sum of given number is %f",sum);
//     printf("the average is %f",average);
//     return 0;

    
// }

//calculator
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     int press;
//     printf("enter the number a\n");
//     scanf("%d",&a);
//     printf("enter the number b\n");
//     scanf("%d",&b);
//     printf("enter 1 for addition\nenter 2 for subtraction\nenter 3 for multiplication\nenter 4 for division\n");
//     scanf("%d",&press);
//     if(press==1)
//     {
//         printf("the addition of two number is%d",a+b);
//     }
//     else if(press==2)
//     {
//         printf("the subtraction of two number is%d",a-b);
//     }
//     else if(press==3)
//     {
//         printf("the multiplication of two number is%d",a*b);
//     }
//     else if(press==4)
//     {
//         if(b == 0) {
//             printf("Senond number is zero \n");
//         } else {
//             printf("the division of two number is%d",a/b);
//         }
//     }
//     else
//     {
//         printf("invalid number");
//     }
//     return 0;
    
// }

//switch case

// #include<stdio.h>
// int main()
// {
//     int a,b,press;
//     printf("enter the number a\n");
//     scanf("%d",&a);
//     printf("enter the number b\n");
//     scanf("%d",&b);
//     printf("enter the press number");
//     scanf("%d",&press);
//     switch(press)
//     {
//         case 1:
//         printf("the addition of two number is%d",a+b);
//         break;
//         case 2:
//         printf("the subtraction of two number is%d",a-b);
//         break;
//         case 3:
//         printf("the multiplication of two number is%d",a*b);
//         break;
//         case 4:
//         if(b==0)
//         {
//             printf("second number is zero");
//         }
//         else
//         {
//             printf("the division of two number is%d",a/b);
//         }
//         break;
//         default:
//         printf("invalid operator");
//     }
//     return 0;


// }

//for addition
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=0;i<=100;i++)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }

//even numbers

//sum
// #include<stdio.h>
// int main()
// {
//     int i,n,sum=0;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++)
//     {
//         if(i%2==0)
//         {
//             sum+=i;
//         }    
//     }
//     printf("%d\n",sum);
//     return 0;
// }

//prime and composite number
// #include<stdio.h>
// int main()
// {
//     int i,n;
//     int count=0;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//         }
//     }
//     if(count==2)
//     {
//         printf("%d is a prime number",n);
//     }
//     else
//     {
//         printf("%d is a composite number",n);
//     }
//     return 0;
// }

//sum of prime number
#include<stdio.h>
int main()
{
    int i,n;
    int count;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    return 0;
}





