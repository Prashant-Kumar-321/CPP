#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,l;
    int  a[4][3] = {{4,5,78}, {33,34,76}, {56,32,57},{5,9,34} } ;


    // taking 12 elements form user
    printf("Enter age of 12 stuedents of clss 12 :  ");

//     i= &a;
//     j=&a[1][0];
//     printf("i = %d, j = %d ",i,j);
//     Address    ( array[i][j]  ) = base Addresss of array + [(c * size of DT) * i] + [size of DT * j];
//    getch();

    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j] );
    }

    // program to sort element of array in increasing order
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=i; k<4; k++)
            {
                if(k == i)
                    l = j+1;
                else
                    l = 0 ;

                for(l; l<3; l++)
                {
                    if(a[i][j] > a[k][l]) // a[i][j] < a[k] [l] apply this condition to sort elements in decreasing order
                    {
                        // swap
                        a[i][j] += a[k][l];
                        a[k][l] = a[i][j] - a[k][l];
                        a[i][j] -= a[k][l];
                    }
                }
            }
        }
    }


    // printing elements of arrays
    printf("Age in increasing order \n");

    for(i=0 ; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
