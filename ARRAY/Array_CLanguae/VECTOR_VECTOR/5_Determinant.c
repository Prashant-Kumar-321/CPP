#include<stdio.h>
#include<conio.h>

// Global VAriable 
int N;

int Determinant(int mat[3][3], int sz);

void CreateArray(int a[][N],int sz)
{
    printf("Enter elements of matrix : ");
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
          scanf("%d",&a[i][j]);
    }
}


int main()
{
   printf("Enter order of matrix : ");
   scanf("%d",&N);

    int mat[N][N],d;
    
    CreateArray(mat, N);

    d = Determinant(mat,N);

    printf("Determinant = %d",d);

     getch();
    return 0;
}

int Determinant(int mat[N][N], int sz)
{
    int sub_mat[sz][sz];
    int c, i, j, m, n,det_sum = 0, f = 1;

    if(sz == 1)
      return mat[0][0];

    else
    {
        for(c = 0; c<sz; c++)
        {
            m=0; n=0;

           for(i=0; i<sz; i++)
           {
            for(j=0; j<sz; j++)
            {
                if(i != 0 && j != c)
                {   
                    sub_mat[m][n] = mat[i][j]; 
                    if(n<sz-1)
                       n++;
                    else
                    {
                        m++;
                        n=0;
                    }
                }
            }
           }

            det_sum += f * mat[0][c] * Determinant(sub_mat, sz-1);
            f *= -1;
        }
    }
    return det_sum;
}
