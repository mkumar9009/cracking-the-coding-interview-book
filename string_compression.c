/* This program compressees the string aaaccccbbbbffffssss to a3c3b4f4s4*/
// Time complexity O(N)
// Space complexity o(N)
#include<stdio.h>
#include<string.h>


int main()
{
  int cnt=1,j=0,i=0;
  char inp[100];
  char out[100];
  int cnter [100]; 
  printf("Enter the string ");
  fgets(inp,sizeof(inp),stdin);

  for(i=1;i<strlen(inp);i++)
  {
     if(inp[i]==inp[i-1])
     {
        cnt++;
     }
     else
     {

        out[j]=inp[i-1];
        cnter[j]=cnt;
        j=j+1;
        cnt=1;
     }
       


  }
   if(i==j)
   {
      printf("inp %s",inp);
   }
   else
   {
     for(i=0;i<j;i++)
      printf("%c%d",out[i],cnter[i]);
 
   }

getchar();

}
