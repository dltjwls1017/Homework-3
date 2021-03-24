#include <stdio.h>
#include <stdlib.h>

void main()
{
	int list[5];
	int *plist[5];


	list[0] = 10;
	list[1] = 11;


    plist[0] = (int *)malloc(sizeof(int));  //heap 영역으로부터 인티저형 4바이트를 받아 plist[0]에 넣음


	printf("list[0] \t= %d\n", list[0]);  //list[0]의 값은 10
	printf("address of list \t= %p\n", list);  //list의 주소는 0061FF0C
	printf("address of list[0] \t= %p\n", &list[0]);   // list[0]의 주소도 0061FF0C
	printf("address of list + 0 \t= %p\n", list+0);     //같은 주소 0061FF0C
	printf("address of list + 1 \t= %p\n", list+1);     //4바이트 커진 0061FF10
	printf("address of list + 2 \t= %p\n", list+2);     //4바이트씩 커져서 0061FF14
	printf("address of list + 3 \t= %p\n", list+3);     //4바이트 커진 0061FF18
	printf("address of list + 4 \t= %p\n", list+4);     //4바이트 더 커진 0061FF1C
	printf("address of list[4] \t= %p\n", &list[4]);     //list+4 의 주소 = list[4]의 주소


	free(plist[0]);

}
