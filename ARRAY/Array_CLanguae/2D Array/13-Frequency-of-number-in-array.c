#include<stdio.h>
#include<conio.h>

void find_frequency(int a[], int size)
{
    int hash[110] = {0}, i;
    
    for(i=0; i<size; i++)
    {
        hash[a[i]]++;
    }

    // loop to calculate frequency of numbers in arraya[]
    printf("| Number Frequency |\n");
    for(i=0; i<110; i++)
    {
        if(hash[i] != 0)
          printf("| %d --------->  %d |\n",i,hash[i]);
    }        

}

int main()
{
   int age[20]; 
   int i;

   // Taking input elements of array by user
   printf("Enter age of 20 Student : \n"); 
   for(i=0; i<20; i++)
   {
    scanf("%d",&age[i]);
   } 

   find_frequency(age, 20);

    getch();
    return 0;

}