// pattern4 output:
// ******
//  *****
//   ****
//    ***
//     **
//      *
#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()

{
    system("cls");
    int a, b, c, d;
    printf("Enter a Value = ");
    scanf("%d", &c);
    for (a = 1; a <= c; a++)
    {
        for (b = 1; b <= a - 1; b++)
        {
            printf(" ");
        }
        for (d = 1; d <= c - a + 1; d++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
    return 0;
}