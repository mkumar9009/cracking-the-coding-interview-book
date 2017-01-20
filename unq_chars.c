
/* This program prints the unique characters in the string in the ascii value order */
/* Using Bit vector to count the unique characters */

#include<stdio.h>
#include<string.h>

long unsigned int vector = 0x0;
char* getunqchar(char a[]) {
    char str[30],*f;
    int i,j=0;
    long unsigned int t, test = 0;
    for (i = 0; i < strlen(a) - 1; i++) {
        t = (long unsigned int)(a[i]) - 65;
        test = (long unsigned int)(1UL << t);
        vector = (vector ) | test;

    }
        printf("vec is %lx \n",vector);

   for(i=0;vector!=0;i++,vector=vector>>1)
   {
     if(vector&0x1)
     {
      str[j]= (char)(65+i);
      printf("%c",str[j]);
     }

   }
   f=str;
   return f;

}



int main (){
int i=0;
char name[30],*temp;
int cnt[52],t;

memset(cnt,0,sizeof(cnt));
printf("Enter the string name");
fgets(name, sizeof(name), stdin);
//gets(name);
//printf("vec is %ld",(long unsigned int)1<<40);

vector=(long int)0x0;
temp = getunqchar(name);
puts(temp);
getchar();

/*for(i=0;i<strlen(name)-1;i++)
{
  t = (int) (name[i]) -65;
	printf("%d\t",t);
  cnt[t]++;
  
}

for(i=0;i<52;i++)
{

  if (cnt[i]!=0)
   printf("%c %d",i+65,cnt[i]);  
}
*/



}

