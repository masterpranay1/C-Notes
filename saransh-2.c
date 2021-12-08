//prime number or not
// #include<stdio.h>
// int main()
// {
//     int i,n;
//     int count;
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

//prime number
// #include<stdio.h>
// int main()
// {
//     int i,j,n;
//     int count=0;
//     printf("enter the number");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         count=0;
//         for(j=1;j<=i;j++)
//         {
//             if(i%j==0)
//             {
//                 count++;
//             }
//         }
//         if(count==2)
//         {
//             printf("%d is a prime number\n",i);
//         }
//     }
//     return 0;
// }

//reverse
// #include<stdio.h>
// int main()
// {
//     int n,a;
//     printf("enter the number");
//     scanf("%d",&n);
//     int x=0;
//     while(n>0)
//     {
//         a=n%10;
//         n=n/10;
//         x=x*10+a;
//     }
//     printf("%d",x);
// }

//array
// #include<stdio.h>
// int main()
// {
//     int a[5];
//     int i;
//     printf("enter the elements in array\n");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<5;i++)
//     {
//         printf("the number is %d\n",a[i]);
//     }
//     return 0;
// }

//square
// #include<stdio.h>
// int main()
// {
//     int a[5];
//     int i,square;
//     printf("enter the elements of array\n");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<5;i++)
//     {
//         square=a[i]*a[i];
//         printf("the square of number is %d\n",square);
//     }
//     return 0;
// }

