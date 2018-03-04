   //revised program by using charcter for NPTEL target 100/100
   
   #include <stdio.h>
    #include<string.h>
    int main() {
    	char str[100000];
    	scanf("%s",str);
    	int sum = 0;
        int n = strlen(str);
  
        for( int i=0 ; i<n; i++)
        {
            sum += str[i] - '0';
        }
           
        if(sum == n-1 || sum == 1)   
        {
        	printf("YES");
        }
        else
        printf("NO");
    	return 0;
    } 