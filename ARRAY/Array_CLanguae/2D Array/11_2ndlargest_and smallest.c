#include<stdio.h>
#include<conio.h>

int second_largest_num(int a[], int size);
 // function for finding second largest number in array
int second_smallest_num(int a[] , int );
// function for finding second smallest number in array ; 

void third_smallest_and_largest_num(int a[], int);

int main()
{
    int num[10] = {4,5,6,-3,11,9,3,8,10,-2}, second_largest,second_smallest;

    second_largest = second_largest_num(num, 10);

    second_smallest = second_smallest_num(num,10); 

    printf("Second largest number = %d\n",second_largest);
    printf("Second smallest number = %d",second_smallest);
    third_smallest_and_largest_num(num, 10);
 
    getch();
    return 0;
}

// function definition of finding second_largest_number in array
int second_largest_num(int a[], int size)
{
    int i,max2,max1;

    max1 = max2 = a[0]; 
      
    
    for(i=1; i<size; i++)
    {
        if(max1 < a[i])
        {
            max2 = max1; 
            max1 = a[i]; 
        }
        else if(max2 < a[i])
           max2 = a[i]; 
    }
     return max2; 
}

// function Definition of finding second_smallest number in array 
int second_smallest_num(int a[], int size)
{
    int i=0, min1,min2;

    // let assume min1 is smallest number in array and min2 is    second smallest number in array 

    min1 = min2 = a[0]; 

// comparing each element of array with min1 and min2 ;
    for(i=2; i < size; i++)
    {
      if(min1>a[i])
      {
        min2 = min1; 
        min1 = a[i]; 
      }
      else if(min2> a[i])
        min2 = a[i]; 
    }

    return min2; 
}

// function definition of finding third smallest number in array; 
void third_smallest_and_largest_num(int a[], int size)
{
    int max1, max2, max3, i;
    max1 = max2 = max3 = a[0];

    // loop for finding max3 in array 
     for(i=1; i<size; i++)
     {
        if(max1<a[i])
        {
            max3 = max2; 
            max2 = max1; 
            max1 = a[i]; 
        }
        else if(max2<a[i])
        {
            max3 = max2;
            max2 = a[i]; 
        }
        else if(max3<a[i])
           max3 = a[i]; 
     }

   printf("\nThird largest number in array: %d",max3);

   // loop for finding third smallest number 
      max1 = max2 = max3 = a[0]; 
    // Reintialization of max1 max2 and max3;


     for(i=1; i<size; i++)
     {
        if(max1>a[i])
        {
            max3 = max2; 
            max2 = max1; 
            max1 = a[i]; 
        }
        else if(max2>a[i])
        {
            max3 = max2;
            max2 = a[i]; 
        }
        else if(max3>a[i])
           max3 = a[i]; 
     }

     printf("\nThird smallest numebr is %d",max3);


}