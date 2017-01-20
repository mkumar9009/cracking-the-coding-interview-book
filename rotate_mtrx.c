/* This program rotaes the matrix clockwise by 90' */
/*Time com plexity O(N^2) Space Complexity O(N^2) */
#include<stdio.h>
#include<string.h>
#define N 4
int main ()
{

int i=0,j=0,k=0;
int a[N][N]={ 1, 2, 3, 4,
            5, 6, 7, 8,
            9,10,11,12,
            13,14,15,16
           };
int b[N][N];
//Taking an extra variable k to rotate this

for (j=N-1;j>=0;j--)
 {
   for(i=0,k=N-1;i<N;i++,k--)
   {
     b[j][k]=a[i][j];
   }
 }

for(i=0;i<N;i++)
{
 for(j=0;j<N;j++)
  {
    printf("%d ",b[i][j]);
  }
    printf("\n");
}

getchar();
return 0;
}
