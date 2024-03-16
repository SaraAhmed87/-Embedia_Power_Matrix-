#include <stdio.h>
#include <stdlib.h>

// Function to calculate power
int power(int base, int exponent) {
    int result = 1;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

// Function to convert character to integer
int charToInt(char *c) {
     int num = 0;
     int i = 0;
     while(c[i]!=0)
     {
         num*=10;
         num+= c[i ] - '0';
         i++;
     }
     return num;
}

// Function to check if a matrix is an Embedia Power Matrix
int isEmbediaPowerMatrix(char matrix[3][3],int rows, int cols ) {
    for(int i = 1; i < rows-1 ; i++) {
        for(int j = 0; j < cols ; j++) {
            int current = charToInt(matrix[i ][j]);
            int above = charToInt(matrix[i - 1][j]);
            int below = charToInt (matrix[i +1][j]);

            if(power(below , above) != current ) {
                return 0;
            }
            else
            {
                return 1;
            }
        }
}
}

// Main function

 int main() {
    char *matrix_1[][3]= {
     {"3","2","2"},
     {"8","9","25"},
     {"2","3","5"}
} ;
    int rows_1 = 3 ;
    int cols_1= 3 ;

    if ( isEmbediaPowerMatrix(*matrix_1, rows_1 , cols_1 )){
        printf("Test case 1 : Embedia Power Matrix\n");
    }
    else {
            printf("Test case 1 : Not an Embedia Power Matrix\n");
}

    char *matrix_2[][3]= {
     {"1","3","5"},
     {"3","7","11"},
     {"5","11","17"}};


    int  rows_2= 3 ;
    int  cols_2= 3 ;

    if ( isEmbediaPowerMatrix(*matrix_2, rows_2, cols_2)){
        printf("Test case 2 : Embedia Power Matrix\n");
    }
    else {
        printf("Test case 2 : Not an Embedia Power Matrix\n");
        }

        char *matrix_3[][3]= {
            {"3","4","2"},
            {"512","256","49"},
             {"8","4","7"}};


    int  rows_3= 3 ;
    int  cols_3= 3 ;

    if (isEmbediaPowerMatrix (*matrix_3, rows_3, cols_3)){
        printf("Test case 3 : Embedia Power Matrix\n");
        }
    else {
        printf("Test case 3 : Not an Embedia Power Matrix\n");

        }

return 0;

 }











