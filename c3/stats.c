/**************************************************************************//**
 * @file stats.c
 * @brief Assignment first for the course for the Coursera Specialization of Embedded
    Software Essentials to use in conjunction with the course1, the Introductio
### to Embedded Software and Development Environments.
 * 
 * @author Joydeep Sinha Chowdhury
 * @date 2018-12-07
 *
 * A simple C-Programming that exhibits a handful of basic c-programming
 * features to show how to calculate some statistics on a set of numbers:
 *     - Mean
 *     - Maximum
 *     - Minimum
 *     - Median
       
 *
 *    
 *
 *****************************************************************************/
/******************************************************************************
 * Copyright (C) 2018 by Joydeep Sinha Chowdhury - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/





#include<stdio.h>                 /* Standard header file */

#include"stats.h"                /* User defined header file;and this contains all function declaration*/

 int main()                      
{
                                /*Declaring the array of size 40 */ 
  int a[40], n, i,m;            
  float t;

   printf("*************************Enter the size of the array:**************************\n");
   printf("\n");
   scanf("%d",&n);                                   /* Taking input from the user */                                               
   print_array(&a[0], n);                           /* print_array function call */ 
  for(i=0;i<n;i++)
  printf("Value of a[%d] is :   %d\n",i,a[i]);      /* Printing the given input array elements */
  printf("\n");
  m= Find_maximum(&a[0],n);                         /* Function call for Finding the max */                        
  printf("The maximum element is %d\n ", m);
  printf("\n");
  m=Find_minimum(&a[0],n);                           /* Function call for finding the Min */                        
  printf("The minimum is: % d \n",m);
  printf("\n"); 
  t=Find_mean(&a[0],n);                                 /* Function call for Finding Mean */    
  printf("The mean of the array is: %f \n",t);
  printf("\n");
  sort_array(&a[0],n);                                /* Function Call for finding the sorted array */ 
  printf("After sorting the array :\n");
  printf("\n");
  for(i=0;i<n;i++)
  printf("Value of sorted arrays a[%d] is :  %d\n",i,a[i]);  /* Printing the sorted array */
  printf("\n");
  t=find_median(&a[0],n);                                    /* Function call for the Median calculation from the sorted arry */    
  printf("The Median of the array is: %f\n",t);
  printf("\n");
   
   print_statistics(&a[0],n);                              /* Function call for printing all the Value from the min, max, mean and median */ 
   
   return 0;

   }



int print_array(int* a,int n)                                                                         /* Function defination of Print_array */
{
  printf("**************************** Enter the array elements:*******************************\n");
  printf("\n");  
for(int i=0;i<n;i++)

   scanf("%d",&a[i]);

return 0;
}

int Find_maximum( int *a,int n)                       /* Function defination of Find_maximum */
  {
   int i, m=0;

   for (i=0;i<n;i++)
    {
     if (a[i]>m)
      
    m=a[i];

      }
   return m;

   }


 int Find_minimum( int *a,int n)                           /* Function defination of find_minium */
 {
  int i, m;

 for(i=0;i<n;i++)

 {
  if (a[i]<m)

   m=a[i];

 }
  return m;

  }


  int Find_mean(int *a, int n)
  {                                                                  /* Function defination of find_mean */
   int i,m=0;
   float t=0;
   for (i=0;i<n;i++)
   {

   m=m+a[i];
 
   t=m/n;

   }

  return t;
   }


  void sort_array(int *a,int n)                                  /* Function defination of sort_array */

  {
 
    int i,j,t;
 
    for(i=0;i<n;i++)
   {
        for(j=i+1;j<n;j++)

     {

         if (a[i]<a[j])
 
         {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                      
           }
  
       }

     }

     }

      float find_median(int *a,int n)                                    /* Function defination of find_median */
       {
         float t=0;
         if (n%2==0)
        {

          t= (a[(n-1)/2]+a[n/2])/2;

        }
          else
          t= a[n/2];

          return t;
  

        }

        void print_statistics(int *a,int n)                                          /* Function defination of print_statistics  */

       {      
          float t;
          int m;

          printf("************************* Below are the Stats:********************************************************\n");
          printf("\n"); 
          m= Find_minimum(&a[0],n);
          printf("The Minimum is: % d \n",m);
          printf("\n");
          m= Find_maximum(&a[0],n);                              
          printf("The Maximum element is: %d\n ",m);
          printf("\n"); 
          t=Find_mean(&a[0],n);
          printf("The Mean of the array is: %f \n",t);
          printf("\n"); 
          t=find_median(&a[0],n);
          printf("The Median of the array is: %f\n",t);
          printf("\n");
          printf("*****************************************************************************************************\n");  



       }


