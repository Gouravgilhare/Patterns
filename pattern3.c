#include<stdio.h>
#include<conio.h>

int  main()
{
    int row,col,i;
    row=1;
    col=1;
    printf("enter a value   ");
    scanf("%d\n",&i);
    for(row=1;row<=i;row++)
    {
        for(col=1;col<=i;col++)
        {
            printf("%d",i-col+1);
        }
        printf("\n");
    }






    
    getch();
    return 0;
}