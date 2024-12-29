//Diadonal sum
#include <stdio.h> 
  
int main() 
{ 
  
    int i, j, m = 3, n = 3, a = 0, sum = 0; 
    
    // input matrix 
    int matrix[3][3]= { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } }; 
    if (m == n) 
    { 
        // printing the input matrix 
        printf("The matrix is \n"); 
        // iterates number of rows 
        for (i = 0; i < m; ++i) { 
            
            // iterates number of columns 
            for (j = 0; j < n; ++j) { 
                printf(" %d", matrix[i][j]); 
            } 
            printf("\n"); 
        } 
        for (i = 0; i < m; ++i) { 
            
            // calculating the main diagonal sum 
            sum = sum + matrix[i][i]; 
            
            // calculating the off diagonal sum 
            a = a + matrix[i][m - i - 1]; 
        } 
        
        // printing the result 
        printf("\nMain diagonal elements sum is = %d\n", sum); 
    } 
    else
        // if both rows and columns are not equal then it is 
        // not possible to calculate the sum 
        printf("not a square matrix\n"); 
    return 0; 
}
_______________________________________________________________________________________________________________
//Antidiagonal
#include <stdio.h> 
  
int main() 
{ 
  
    int i, j, m = 3, n = 3, a = 0, sum = 0; 
    
    // input matrix 
    int matrix[3][3] 
        = { { 3, 6, 8 }, { 4, 5, 6 }, { 7, 8, 9 } }; 
    if (m == n) 
    { 
        // printing the input matrix 
        printf("The matrix is \n"); 
        // iterates number of rows 
        for (i = 0; i < m; ++i) { 
            
            // iterates number of columns 
            for (j = 0; j < n; ++j) { 
                printf(" %d", matrix[i][j]); 
            } 
            printf("\n"); 
        } 
        for (i = 0; i < m; ++i) { 
            
            // // calculating the main diagonal sum 
            // sum = sum + matrix[i][i]; 
            
            // calculating the off diagonal sum 
            a = a + matrix[i][m - i - 1]; 
        } 
        
        // printing the result 
        // printf("\nMain diagonal elements sum is = %d\n", sum); 
        printf("Off-diagonal elements sum is = %d\n", a); 
    } 
    else
        // if both rows and columns are not equal then it is 
        // not possible to calculate the sum 
        printf("not a square matrix\n"); 
    return 0; 
}
________________________________________________________________________________
//Boundry sum
#include<stdio.h>
#include<limits.h>
int main(){
   int m, n, sum = 0;
   printf("Enter the order of the matrix : ");
   scanf("%d %d",&m,&n);
   int i, j;
   int mat[m][n];
   printf("Input the matrix elements");
   for(i = 0; i<m; i++){
      for(j = 0; j<n; j++)
      scanf("%d",&mat[i][j]);
   }
   printf("Boundary Matrix");
   for(i = 0; i<m; i++){
      for(j = 0; j<n; j++){
         if (i == 0 || j == 0 || i == n - 1 || j == n - 1 )
         {
            printf("%d ", mat[i][j]);
            sum = sum + mat[i][j];
         }
         else
         printf(" ");
      }
      
   }
   printf("Sum of boundary is %d", sum);
}