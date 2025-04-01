// PATTERN OUTPUT
// AAAAAA
// BBBBBB
// CCCCCC
// DDDDDD
// EEEEEE
// FFFFFF


#include<stdio.h>
#include<conio.h>
#include<windows.h>
int  main()
{
    system("cls");
    int row,col,n;
    char ch;
      
    printf("Enter a Value = ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            ch= 'A'+row-1;
            printf("%c",ch);
            
        }

        printf("\n");

    }


    
    getch();
    return 0;
}