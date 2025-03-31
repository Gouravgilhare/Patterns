#include<stdio.h>
#include<conio.h>

int  main()
{
    int a,b,c;
    printf("Enter a value ");
    scanf("\n%d\n",&c);

    for(a=1;a<=c;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
        
   }

    
    getch();
    return 0;
}