#include <stdio.h>

struct student {
	   char lastName[13];   //13바이트
	   int studentId;       //4바이트
	   char grade;          //2바이트
}; 

int main()
{
	struct student pst;

	printf("size of student = %ld\n", sizeof(struct student));   //typedef이 없기 때문 struct를 넣어줘야함
	                                                            // 13+4+2=19바이트지만 결과값은 24바이트.
    //lastname에서 4바이트씩 더해지다 13바이트가 될 때 나머지가 패딩되어 16바이트, studentId에서 4바이트, grade에서 2바이트 더해지고 나머지 패딩되어 4바이트 됨
	//gcc컴파일러는 패딩을 하고 있다는 것을 알 수 있음
	printf("size of int = %ld\n", sizeof(int));
	printf("size of short = %ld\n", sizeof(short));

	
	//패딩 = 채워넣기
	return 0;

}
