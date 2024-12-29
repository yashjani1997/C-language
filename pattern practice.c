#include <stdio.h>

int main() 
{
  int i,j;
  
  for (i = 1; i <=5; i++)
  {

      for (j = 1; j <= 5; j++)
      {
       if(j <=i)
      
        printf("%d", j);
       else
       	printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}
______________________________________________________________________________
#include <stdio.h>

int main() 
{
  int i,j;
  
  for (i = 1; i <=5; i++)
  {

      for (j = 1; j <= 5; j++)
      {
       if(j <=i)
      
        printf("%d", 1-j+i);
       else
       	printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}
__________________________________________________________________________________
#include <stdio.h>

int main() 
{
  int i,j;
  
  for (i = 1; i <=5; i++)
  {

      for (j = 1; j <= 5; j++)
      {
       if(j <=i)
      
        printf("%d", i);
       else
       	printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}
________________________________________________________________________________
#include <stdio.h>

int main() 
{
  int i,j;
  
  for (i = 1; i <=5; i++)
  {

      for (j = 1; j <= 5; j++)
      {
       if(j <=i)
      
        printf("%d",6- i);
       else
       	printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}
___________________________________________________________________________________
#include <stdio.h>

int main() 
{
  int i,j;
  // Outer loop
  for (i = 1; i <=5; i++)
  {

      for (j = 1; j <= 5; j++)
      {
       if(j <=i)
       {
      
        printf("%d",5-i+j);
       }
       else
       {
       	printf(" ");
       }
      }
      printf("\n");
      
  }
 
  return 0;
}
______________________________________________________________________________________
#include <stdio.h>

int main() 
{
  int i,j;
  int k = 5;
  for (i = 1; i <=5; i++)
  {

      for (j = 1; j <= 5; j++)
      {
       if(j <=i)
       {
      
        printf("%d",k-j+1);
        
        
       }
       else
       {
       	printf(" ");
       }
      }
      printf("\n");
      
  }
 
  return 0;
}
_________________________________________________________________________________________
#include <stdio.h>

int main() 
{
  int i,j;
  // Outer loop
  for (i=1;i<=5; i++)
  {
    // Inner loop
     for (j=1;j<= 5;j++)
      {
       if(j <=6-i)
      	    printf("%d",j);
       else
       	    printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}
_____________________________________________________
#include <stdio.h>

int main() 
{
  int i,j;
  // Outer loop
  for (i=1;i<=5; i++)
  {
    // Inner loop
     for (j=1;j<= 5;j++)
      {
       if(j <=6-i)
      	    printf("%d",i);
       else
       	    printf(" ");
       
      }
      printf("\n");
      
  }
 
  return 0;
}
_____________________________________________________________
#include <stdio.h>

int main() 
{
  int i,j;
//   int k=6;
  // Outer loop
  for (i=1;i<=5; i++)
  {
    // Inner loop
     for (j=1;j<= 5;j++)
      {
       if(j <=6-i)
       {
      	    printf("%d",6-j);
       }
       else
       {
       	    printf(" ");
       }    
      }
      printf("\n");
      
  }
 
  return 0;
}
_______________________________________________________________________________
#include <stdio.h>

int main() 
{
  int i,j;
//   int k=6;
  // Outer loop
  for (i=1;i<=5; i++)
  {
    // Inner loop
     for (j=1;j<= 5;j++)
      {
       if(j <=6-i)
       {
      	    printf("%d",6-i);
       }
       else
       {
       	    printf(" ");
       }    
      }
      printf("\n");
      
  }
 
  return 0;
}
_______________________________________________________________________________________
#include <stdio.h>

int main() 
{
  int i,j;
//   int k=6;
  // Outer loop
  for (i=1;i<=5; i++)
  {
    // Inner loop
     for (j=1;j<= 5;j++)
      {
       if(j <=6-i)
       {
      	    printf("%d",6-j-i+1);
       }
       else
       {
       	    printf(" ");
       }    
      }
      printf("\n");
      
  }
 
  return 0;
}
________________________________________________________________________________________________
#include <stdio.h>

int main() 
{
  int i,j;

  for (i=1;i<=5; i++)
  {
    
     for (j=1;j<= 5;j++)
      {
       if(j <=i)
       {
      	    printf("*");
       }
       else
       {
       	    printf(" ");
       }    
      }
      printf("\n");
      
  }
 
  return 0;
}
_____________________________________________________________________________________________________
#include <stdio.h>

int main() 
{
  int i,j;

  for (i=1;i<=5; i++)
  {
    
     for (j=1;j<= 5;j++)
      {
       if(j <=6-i)
       {
      	    printf("*");
       }
       else
       {
       	    printf(" ");
       }    
      }
      printf("\n");
      
  }
 
  return 0;
}
____________________________________________________________________________________________________________

#include <stdio.h>

int main() {
    int rows = 5; 

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= i; j++) 
           {
            if (j % 2 == 1) 
            {
                printf(" 1 ");
            } 
            else 
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
______________________________________________________________________

#include <stdio.h>

int main() {
    int rows = 5; 

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= i; j++) 
           {
            if (j % 2 == 1) 
            {
                printf(" 0 ");
            } 
            else 
            {
                printf(" 1 ");
            }
        }
        printf("\n");
    }

    return 0;
}
___________________________________________________________________________
#include <stdio.h>
 
int main()
{
    int i,j,k = 1;
   
    for (i = 0; i <= 5; i++)
    {
         for (j = 0; j < i; j++) 
        {
           printf("%d",k);
            k++;
        }
       
        printf("\n");
    }
    return 0;
}
__________________________________________________
#include <stdio.h>
 
int main()
{
    int i,j;
    char k='A';
   
    for (i = 0; i <= 5; i++)
    {
         for (j = 0; j < i; j++) 
        {
           printf("%c",k);
            k++;
        }
       
        printf("\n");
    }
    return 0;
}
____________________________________________________________
int main()
{
    int rows = 5;
    char k='A';

      for (int i = 0; i < rows; i++) {
            for (int j = 0; j <= i; j++)
        {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}
________________________________________________________
