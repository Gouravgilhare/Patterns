// pattern output 
// 1
// 22
// 333
// 4444
#include<stdio.h>
#include<conio.h>

int  main()
{
    int a,b,c;
    printf ("Enter a Value = ");
    scanf("%d",&c);
    for(a=1;a<=c;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",a);
        }
        printf("\n");
    }




    
    getch();
    return 0;
}