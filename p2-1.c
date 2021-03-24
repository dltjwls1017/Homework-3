#include<stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;	
int i;

void main(void)
{

	for(i=0; i < MAX_SIZE; i++)
		input[i] = i;

	/*for checking call by reference*/
	printf("address of input = %p\n", input);  //input 배열의 주소를 찍음, input의 주소는 004070A0

	answer = sum(input, MAX_SIZE);
	printf("The sum is: %f\n", answer); //

}

float sum(float list[], int n)
{
	printf("value of list = %p\n",  list);  // 함수 호출로 sum 함수의 list로 주소값만 복사. list는 input의 주소를 값으로 갖는다. 004070A0
	printf("address of list = %p\n\n", &list); // list의 주소는 0061FF00

	int i;
	float tempsum = 0; 
	for(i = 0; i < n; i++)  //값을 그대로 변수 n에 복사를 해서, n의 값이 바뀌어도 원래의 값은 변하지 않게 됨.
		tempsum += list[i];  // list[i]가 = 기호 우측 : list+i가 가리키는 값 반환
	                         // list[i]가 = 기호 좌측 : 값을 list+i 위치에 저장
	return tempsum;
}
