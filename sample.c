#include <stdio.h>
#include <memory.h>

void printfloat(float f)
{
	unsigned int n;
	unsigned int flag = 1;
	int i;
	memcpy(&n, &f, sizeof(float));

	printf("%12f=",f);
	
	for(i=0;i<sizeof(int)*8;i++){
		if(i==1||i==9)
			printf(" ");
		if(n&(flag<<(sizeof(int)*8-i-1)))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

int main()
{
  float f = 0.3;
//  printf("43.25 = %b\n", *(unsigned int *) &f);
printfloat(f);	
  return 0;
}
