/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Print the statistics of an array from an array
 *
 * <Add Extended Description Here>
 *
 * @author Dennis Manavalan
 * @date 28 March
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int a[]= { 34, 201, 190, 154,   8, 194,   2,   6,114, 88,   45,  76, 123,  87,  25,  23,200, 122, 150, 90,   92,  87, 177, 244, 201,   6,  12,  60,   8,   2,   5,  67,7,  87, 250, 230,  99,   3, 100,  90};

int print_array()
{
    int i;
    printf("array=[");
    for(i=0;i<40;i++)
    {
        printf("%d,",a[i]);
    }
    printf("]\n\n");
    
}
int find_mean()
{
    int i,s=0,m;
    for(i=0;i<40;i++)
    {
        s=s+a[i];
    }
    m=s/40;
    printf("mean=%d\n\n",m);
}

int find_maximum()
{
    int i,max=0;
    for(i=0;i<40;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }

    printf("maximum value=%d \n\n",max);
}

int find_minimum()
{
    int i,min=a[0];
    for(i=0;i<40;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
        }
    }

    printf("minimum value=%d \n\n",min);
}

int sort_array()
{
  int i,j,temp;
  for(j=0;j<=40;++j)
  {
    for(i=j+1;i<=40;++i)
     {
      if(a[j]<a[i])
      {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
      }
     }
   }
   printf("sort_array=[");
   for(i=0;i<=40;i++)
    {
        printf("%d,",a[i]);
    }
    printf("]\n\n");
} 
int find_median()
{
    int i,j,temp;
  for(j=0;j<=40;++j)
  {
    for(i=j+1;i<=40;++i)
     {
      if(a[j]<a[i])
      {
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
      }
     }
   }
  int med=(a[21]+a[20])/2;
  printf("median=%d\n\n",med);
}
float print_statistics()
{
  printf("..........................\n");
  printf("Staststics of the array: \n\n");
  find_mean();
  find_median();
  find_maximum();
  find_minimum();
  printf("..........................\n\n");
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics();
  print_array();
  find_median();
  find_mean();
  find_maximum();
  find_minimum();
  sort_array();

}

/* Add other Implementation File Code Here */
