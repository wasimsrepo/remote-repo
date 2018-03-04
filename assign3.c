#include<stdio.h>
int main(){
	
	int n, i, ones = 0, zeros = 0, temp, r;
	scanf("%d", &n);
	temp = n;
	while(n>0)
	{
		r = n % 10;
		n = n / 10;
		if(r == 0)
			zeros++;
		else
			ones++;
	}
	
	if(ones == 1 || zeros == 1)
		printf("YES");
	else
		printf("NO");
	
	return 0 ;
}