// PATTERN OUTPUT 
// ABC 
// ABC 
// ABC 
#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main ()
{
    system("cls");
    int row,col,n;
    
     printf ("Enter a Value = ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        char ch = 'A';
        for(col=1;col<=n;col++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }

    getch();
    return 0;
}