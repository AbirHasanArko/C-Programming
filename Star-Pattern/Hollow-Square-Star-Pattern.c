#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
  
    for(int i = 1; i <= n; i++){    // Loop for each row
        for(int j = 1; j <= n; j++){    // Loop for items in each row
            if(i == 1 || i == n || j == 1 || j == n){   // 1st row || n-th row || 1st column || n-th column
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n"); // New line after each row
    }
  
    return 0;
}

/*
Enter the number of rows: 5
*****
*   *
*   *
*   *
*****
*/
