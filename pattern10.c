// PATTERN OUTPUT
// ABC
// BCD
// CDE
// DEF
#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main ()
{
    system("cls");
    int row,col,n;
    char ch='A';
        
    printf ("Enter a Value = ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        
        for(col=1;col<=3;col++)
        {
           ch ='A'+row+col-2;
            printf("%c",ch);
             ch++;
        }
        printf("\n");
       
        
    }
 
    getch();
    return 0;

}