#include<stdio.h>
#include<string.h>
int main()
{
  
  char a[100], b[100];
  
  int i,j, count, flag = 0;
  
  scanf("%s %s", a, b);
  
  for(i = 0; i < strlen(a); i++)
  {	  
      count = 0;
	  for(j = 0; j < strlen(b); j++)
	  {
		  if(a[i] == b[j])
			  count++;
	  }
	  
	  if(count == 0)
	  {
		  flag = 1;
		  break;
	  }
	  
  }	  
  
  if(flag)
	  printf("NO");
  else
	  printf("YES");

  return 0;
}