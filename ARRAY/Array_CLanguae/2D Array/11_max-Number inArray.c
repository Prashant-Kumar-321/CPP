#include<stdio.h>
#include<conio.h>

void findmax( int num[],int size)
{
    int i, max;
    max = num[0];  // Assume num[0] is max ;

    for(i=1; i<size; i++)
        if(max < num[i]) max = num[i]; 

    printf("\nMaximum = %d", max);

}
// function will print element of num array in reverse order 
void  Reverseprint(int a[], int size)
{
    int i;
    for(i = (size-1); i>=0; i--)
      printf("%2d ",a[i]);
    
    printf("\n\n(Done!)\n");
}

int main()
{
    int num[5] ; 

    printf("Ente 5 numbers : \n");
    for(int i=0; i<5; i++)
      scanf("%d",&num[i]);
    
    findmax(num,5);       // function call to find max in num[5];
    printf("\n");
    Reverseprint(num, 5); // print all elements in reverse order of array;  
    
    getch();
    return 0;
}