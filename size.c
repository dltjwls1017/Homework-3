#include<stdio.h>
#include<stdlib.h>

void main()
{
	int **x; 
	
	printf("sizeof(x) = %lu\n", sizeof(x));   // 주소를 저장하고 있는 사이즈가 4바이트 (32비트)
	printf("sizeof(*x) = %lu\n", sizeof(*x));   //주소를 담는 4바이트 짜리를 만들어서 x에 넘겨줌, 주소를 저장하고 있는 사이즈가 또한 4바이트이기 떄문
	printf("sizeof(**x) = %lu\n", sizeof(**x));   // 두 번 접근하면 원하는 데이터를 얻을 수 있다! 두번 레퍼런싱해서 접근한 값은 integer이기 때문 4바이트가 나온다.

}
