// 1. Write a program to check whether a given number is positive or non-positive.

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);

//     if (a>0)
//     {
//         printf("The number is positive");
//     }
//     else
//     {
//         printf("The number is non-positive");
//     }
    
//     return 0;
// }

// 2. Write a program to check whether a given number is divisible by 5 or not

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);

//     if (a%5==0)
//     {
//         printf("It is divisible");
//     }
//     else
//     {
//         printf("It is non divisible");
//     }
//     return 0;
// }

// 3. Write a program to check whether a given number is an even number or an odd
// number.

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);

//     if (a%2==0)
//     {
//         printf("Number is even");
//     }
//     else
//     {
//         printf("Number is odd");
//     }
    
//     return 0;
// }

// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);

//     if ((a&1)==0)
//     {
//         printf("Number is even");
//     }
//     else
//     {
//         printf("Number is odd");
//     }
        
//     return 0;
// }

// 5. Write a program to check whether a given number is a three-digit number or not.

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);

//     if (a/100>0)
//     {
//         printf("It is three digit number");
//     }
//     else
//     {
//         printf("It is not three digit number");
//     }
        
//     return 0;
// }

// 6. Write a program to print greater between two numbers. Print one number of both are
// the same.

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter the number A: ");
//     scanf("%d",&a);

//     printf("Enter the number B: ");
//     scanf("%d",&b);

//     if (a>=b)
//     {
//         printf("A is greater than B = %d",a);
//     }
//     else
//     {
//         printf("B is greater than A = %d",b);
//     }
    
//     return 0;
// }

// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots

// #include<stdio.h>
// int main()
// {
//     float a,b,c,d,r1,r2;
//     printf("Enter ther values of a,b,c: ");
//     scanf("%f %f %f",&a,&b,&c);

//     d = b*b - 4*a*c;

//     if (d>0)
//     {
//         r1 = (-b + sqrt(d))/(2*a);
//         r2 = (-b - sqrt(d))/(2*a);
//         printf("Roots of a given quadratic equation is real and distinct");
//     }
//     else if (d==0)
//     {
//         r1 = -b /(2*a);
//         r2 = -b /(2*a);
//         printf("Roots of a given quadratic equation is real and equal");
//     }
//     else
//     {
//         printf("Roots of a given quadratic equation is imaginary");
//     }
    
//     return 0;
// }

// 8. Write a program to check whether a given year is a leap year or not.

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);

//     if (a%400==0)
//     {
//         printf("It is a leap year");
//     }
//     else if (a%100==0)
//     {
//         printf("It is not a leap year");
//     }
//     else if(a%4==0)
//     {
//         printf("It is a leap year");
//     }
//     else
//     {
//         printf("It is not a leap year");
//     }
        
//     return 0;
// }

// 9. Write a program to find the greatest among three given numbers. Print number once 
// if the greatest number appears two or three times.

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter values of A,B and C = ");
//     scanf("%d %d %d",&a,&b,&c);

//     if (a>=b && a>=c)
//     {
//         printf("A is greatest %d",a);
//     }
//     else if (b>=a && b>=c)
//     {
//         printf("B is greatest %d",b);
//     }
//     else
//     {
//         printf("C is greatest %d",c);
//     }
    
//     return 0;
// }

// 10. Write a program which takes the cost price and selling price of a product from the 
// user. Now calculate and print profit or loss percentage

// #include<stdio.h>
// int main()
// {
//     float cp,sp,p,l,profitper,lossper;
//     printf("Enter the Cost price and Selling price: ");
//     scanf("%d %d",&cp,&sp);

//     if (sp>=cp)
//     {
//         p = sp - cp;
//         profitper = p/cp*100;
//         printf("Profit %% = %.02f",profitper);
//     }
//     else
//     {
//         l = cp - sp;
//         lossper = l/cp*100;
//         printf("Loss%% = %f",lossper);
//     }
    
//     return 0;
// }

// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
// out of 100 and passing marks is 33. Now display whether the candidate passed the 
// examination or failed.

// #include<stdio.h>
// int main()
// {
//     float E,M,S,SS,H;
//     printf("Enter the Marks: ");   
//     scanf("%f %f %f %f %f",&E,&H,&M,&S,&SS);

//      if (E>=33 && H>=33 && M>=33 && S>=33 && SS>=33)
//     {
//         printf("You are pass");  
//     }
//     else
//     {
//         printf("You are fail");
//     }

//     return 0;
// }

// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

// #include<stdio.h>
// int main()
// {
//     char C;
//     printf("Enter the alphabet: ");
//     scanf("%c",&C);

//     if(C >= 'A' &&  C <= 'Z')
//     {
//         printf("Given alphabet is Uppercase");
//     }
//     else if(C>='a' && C<='z')
//     {
//         printf("Given alphabet is Lowercase");
//     }
//     else
//     {
//         printf("Given character is not alphabet");
//     }
    
//     return 0;
// }

// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);

//     if (a%3==0 && a%2==0 )
//     {
//         printf("It is divisible");
//     }
//     else
//     {
//         printf("It is not divisible");
//     }
    
//     return 0;
// }

// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the number: ");
//     scanf("%d",&a);

//     if (a%7==0 && a%3==0)
//     {
//         printf("It is divisible");
//     }
//     else
//     {
//         printf("It is not divisible");
//     }
    
//     return 0;
// }

// 15. Write a program to check whether a given number is positive, negative or zero.

// #include<stdio.h>
// int main()
// {
//     int x;
//     printf("Enter the number: ");
//     scanf("%.2f",&x);

//     if (x>0)
//     {
//         printf("It is positive");
//     }
//     else if (x==0)
//     {
//         printf("It is zero");
//     }
//     else
//     {
//        printf("It is Negative");
//     }
    
//     return 0;
// }

// 16. Write a program to check whether a given character is an alphabet (uppercase), an 
// alphabet (lower case), a digit or a special character.

// #include<stdio.h>
// int main()
// {
//     char x;
//     printf("Enter the character: ");
//     scanf("%c",&x);

//     if (x>='A' && x<='Z')
//     {
//         printf("It isan uppercase alphabet");
//     }
//     else if (x>='a' && x<='z')
//     {
//         printf("It is an lowercase alphabet");
//     }
//     else if (x>='0' && x<='9')
//     {
//         printf("It is an digit");   
//     }
//     else
//     {
//         printf("It is an special character");
//     }
       
//     return 0;
// }

// 17. Write a program which takes the length of the sides of a triangle as an input. Display 
// whether the triangle is valid or not.

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter the length of sides a triangle: ");
//     scanf("%d %d %d",&a,&b,&c);

//     if(a+b>c && b+c>a && c+a>b)
//     {
//         printf("It is an valid triangle");
//     }
//     else
//     {
//         printf("It is an invalid triangle");
//     }
       
//     return 0;
// }

// 18. Write a program which takes the month number as an input and display number of 
// days in that month

#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);

    if (x==4 || x==6 || x==9 || x==11)
    {
        printf("%d = There is 30 days ",x);
    }
    else if (x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x== 12)
    {
        printf("%d = There is an 31 days ",x);
    }
    else
    {
        printf("%d = there is an 28/29 days ",x);
    }
    
    return 0;
}