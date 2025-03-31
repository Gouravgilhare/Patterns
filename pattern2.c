#include<stdio.h>
#include<conio.h>
#include<windows.h>

// void (clrscr);

int  main()
{
    int a,b,c;
    printf("Enter a value ");
    scanf("\n%d\n",&c);

    for(a=1;a<=c;a++)
    {
        for(b=1;b<=c;b++)
        {
            printf("*");
        }
       printf("\n");
        
   }

    
    getch();
    return 0;
}