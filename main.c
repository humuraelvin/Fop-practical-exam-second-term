#include <stdio.h>
#include <stdlib.h>

int printSquare(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

int printHalfSquare(){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}

int printPascalsTriangle(){
   

    int r, c;
    int height = 4;
    int pt[10][10];


    printf("\n") ;     
    for (r = 0; r < height; r++) {
        for (c = 0; c <= r; c++) {
            if (c == 0 || c == r) {
                pt[r][c] = 1; 
            } else {
                pt[r][c] = pt[r-1][c] + pt[r-1][c-1]; 
            }
        }
    }

    
    for (r = 0; r < height; r++) {
        for (c = 0; c <= r; c++) {
            printf("%d ", pt[r][c]);
        }
        printf("\n");
    }

   

}

int exitFunction(){
    exit(0);
}

int main(){

    int choice;

    while (choice != 0)
    {
        if (choice == 0)
        {
            exitFunction();
        }else
        {
        printf("Enter your choice: \n");
        printf("1. Print 4x4 square of stars \n");
        printf("2. Print 4x4 half square(right triangle)  of stars \n");
        printf("3. Print pascal's triangle of height 4\n");
        printf("0. Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printSquare();
        }else if (choice == 2)
        {
            printHalfSquare();
        }else if (choice == 3)
        {
            printPascalsTriangle();
        }else if (choice == 0)
        {
            exitFunction();
        }
        }
        
        
    }
    
    return 0;

}