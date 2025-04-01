// pattern output 
// 1
// 21
// 321
// 4321
#include<stdio.h>
#include<conio.h>


int  main()
{   int a,b,c,d=a;
    printf ("Enter a Value = ");
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        for(b=1;b<=a;b++)
        {
            d=a-b+1;
            printf("%d",d);
         
        }
        printf("\n");
        
    }

    getch();
    return 0;
}