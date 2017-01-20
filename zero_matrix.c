#include<stdio.h>
#include<string.h>

#define N 4

int main () 
{

  int rowFlag=0;
  int colFlag=1;
  int i,j; 
  int a[N][N]= { 0, 0, 0, 1,
                 0, 1, 0, 0,
                 1, 0, 0, 0,
                 0, 0, 0, 0
               };

  for(i=0;i<N;i++)
  {
    if(a[0][i]==1)
    rowFlag =1;
  }

  for(i=0;i<N;i++)
  {
    if(a[i][0]==1)
    colFlag =1;
  }


  for(i=1;i<N;i++)
  {
   for(j=1;j<N;j++)
   {
     if(a[i][j]==1)
     {
        a[0][j]=1;
        a[i][0]=1;
     }
   }  
  }
// set rows and columns

  for(i=1;i<N;i++)
  {
   for(j=1;j<N;j++)
   {
     if(a[i][0]==1 || a[0][j]==1)
     {
        a[i][j]=1;
     }
   }
  }
//set first row
if (rowFlag==1)
{
  for(i=0;i<N;i++)
  a[0][i]=1;
}

//set first col
if(colFlag=1)
{
  for(i=0;i<N;i++)
  a[i][0]=1;
}
//print the matrix
  for(i=0;i<N;i++)
  {
   for(j=0;j<N;j++)
   {
        printf("%d ",a[i][j]);
   }
      printf("\n");
  }
 
}
