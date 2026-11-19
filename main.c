/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    if(n==1)
    {
    printf("Neither prime nor composite nummber");
    return 0;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {c++;
        printf("Not a prime number");
        break;
        }
    }
    if(c==0)
    printf("Prime Number");
}
