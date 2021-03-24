#include<stdio.h>

void print1 (int *ptr, int rows);

int main()
{
	int one[] = {0, 1, 2, 3, 4};

	printf("one    = %p\n", one);   // one의 값이 주소로 0061FF0C
	printf("&one   = %p\n", &one);   // one의 주소도 0061FF0C
	printf("&one[0]   = %p\n", &one[0]);  //0061FF0C
    printf("\n");

	print1(&one[0], 5);//0061FF0C
                       //0061FF10
	                   //0061FF14
	                   //0061FF18
	                   //0061FF1C    -- integer형이라 4바이트씩 커지고 있음
	return 0;

}

void print1 (int *ptr, int rows)
{
	//print out a one-dimensional array using a pointer

	int i;
	printf("Address \t Contents\n");

	for(i=0; i < rows; i++)
		printf("%p \t  %5d\n", ptr+i, *(ptr+i));
	printf("\n");

}
