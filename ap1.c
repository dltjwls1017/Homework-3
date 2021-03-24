#include <stdio.h>
#include <stdlib.h>


void main()
{

int list[5];
int *plist[5] = {NULL,};  //integer형 포인터를 담고 있는 plist를 초기화


plist[0] = (int *)malloc(sizeof(int));  //heap 영역으로부터 인티저형 4바이트를 받아 plist[0]에 넣음

list[0] = 1;
list[1] = 100;


*plist[0] = 200;


printf("value of list[0] = %d\n", list[0]);  // list[0]의 값은 1
printf("address of list[0]           = %p\n", &list[0]);  // list[0]의 주소는 0061FF0C
printf("value of list                = %p\n", list);  // list의 값도 똑같이 0061FF0C
printf("address of list (&list)      = %p\n", &list); // list의 죽소도  0061FF0C
// list의 주소 = list[0]의 주소 = list 값


printf("---------------------------------------\n\n");

printf("value of list[1] = %d\n", list[1]);  //list[1]의 값은 100
printf("address of list[1] = %p\n", &list[1]);  //list[1]의 주소는 0061FF10
printf("value of *(list+1) = %d\n", *(list+1));  //list의 주소에 1을 더한 곳이 가리키는 값이 100
printf("address of list+1 = %p\n", list+1);  //0061FF10으로, 100이 들어있는 값의 주소가 나옴
//list의 타입이 integer이기 때문, list+1은 list의 주소에 4바이트씩 더해진다


printf("---------------------------------------\n\n");
printf("value of *plist[0] = %d\n", *plist[0]);  // plist[0]의 주소가 가르키는 값은 200
printf("&plist[0]          = %p\n", &plist[0]);  // plist[0]의 주소는 0061FEF8
printf("&plist             = %p\n", &plist);   // plist의 주소도 0061FEF8
printf("plist              = %p\n", plist);    // plist의 값도 0061FEF8
printf("plist[0]           = %p\n", plist[0]);  // plist[0]의 값은 006B1908 //200이 있는 곳의 주소값을 가짐
printf("plist[1]           = %p\n", plist[1]);  // plist[1]의 값은 00000000  (null의 값)
printf("plist[2]           = %p\n", plist[2]);  // plist[2]의 값은 00000000  (null의 값)
printf("plist[3]           = %p\n", plist[3]);  // plist[3]의 값은 00000000  (null의 값)
printf("plist[4]           = %p\n", plist[4]);  // plist[4]의 값은 00000000  (null의 값)
//plist의 주소 = plist[0]의 주소


free(plist[0]);


}
