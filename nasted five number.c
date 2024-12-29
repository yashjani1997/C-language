#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the value of a ");
    scanf("%d", &a);
    printf("enter the value of b ");
    scanf("%d", &b);
    printf("enter the value of c ");
    scanf("%d", &c);
    printf("enter the value of d ");
    scanf("%d", &d);
    printf("enter the value of e ");
    scanf("%d", &e);
   if(a<b)
   {
       if(a<c)
       {
            if(a<d)
            {
                if(a<e)
                {
                    printf("minimum number is %d",a);
                }
                else
                {
                    printf("minimum number is %d",e);
                }
            }
            else
            {
                if(d<e)
                {
                    printf("minimum number is %d",d);
                }
                else
                {
                    printf("minimum number is %d",e);
                }
            }
       }
       else
       { 
           if(c<d)
           {
               if(c<e)
               {
                   printf("minimum number is %d",c);
               }
               else
               {
                   printf("minimum number is %d",e);
               }
           }
           else
           {
               if(d<e)
               {
                   printf("minimum number is %d",d);
               }
               else
               {
                   printf("minimum number is %d",e);
               }
           }
       }
   }
   else
   {
       if(b<c)
       {
           if(b<d)
           {
               if(b<e)
               {
                   printf("minimum number is %d",b);
               }
               else
               {
                   printf("minimum number is %d",e);
               }
           }
           else
           {
               if(d<e)
               {
                   printf("minimum number is %d",d);
               }
               else
               {
                   printf("minimum number is %d",e);
               }
           }
       }
       else
       {
           if(c<d)
           {
               if(c<e)
               {
                   printf("minimum number is %d",c);
               }
               else
               {
                   printf("minimum number is %d",e);
               }
           }
           else
           {
               if(d<e)
               {
                   printf("minimum number is %d",d);
               }
               else
               {
                   printf("minimum number is %d",e);
               }
           }    
       }
   }
    return 0;
}
__________________________________________________________________
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the number of a ");
    scanf("%d",&a);
    printf("enter the number of b ");
    scanf("%d",&b);
    printf("enter the number of c ");
    scanf("%d",&c);
    printf("enter the number of d ");
    scanf("%d",&d);
  if(a>b)
  {
      if(a>c)
      {
          if(a>d)
          {
              printf("maximum number %d",a);
          }
          else
          {
              printf("macimum number %d",d);
          }
      }
      else
      {
        if(c>d)
        {
            printf("maximum number %d",c);
        }
        else
        {
            printf("maximum number %d",d);
        }
      }
  }
  else
  {
      if(b>c)
      {
          if(b>d)
          {
              printf("maximum number %d",b);
          }
          else
          {
              printf("maximum number %d",d);
          }
      }
      else
      {
          if(c>d)
          {
              printf("maximum number %d",c);
          }
          else
          {
              printf("maximum number %d",d);
          }
      }
  }
  return 0;
}
    
