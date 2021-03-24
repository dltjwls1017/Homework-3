#include <stdio.h>

struct student1 {
	   char lastName;
	   int studentId;
	   char grade;

};     //구조체 선언

typedef struct {
	    char lastName;
	    int studentId;
	    char grade;
}student2;

int main()
{
	struct student1 st1 = {'A', 100, 'A'};  //student1 구조체에 끝이름 A, 학번 100, 성적 A 입력
	                                        //typedef를 사용하지 않으면 반드시 앞에  struct를 써야함


	printf("st1.lastName = %c\n", st1.lastName);       //A
	printf("st1.studentId = %d\n", st1.studentId);      //100
	printf("st1.grade = %c\n", st1.grade);          //A


	student2 st2 = {'B', 200, 'B'};

	printf("\nst2.lastName = %c\n", st2.lastName);     //B
	printf("st2.studentId = %d\n", st2.studentId);       //200
	printf("st2.grade = %c\n", st2.grade);          //B

	student2 st3;

	st3 = st2;  	//구조치환. st2에서 st1으로 복사가 일어남

	printf("\nst3.lastName = %c\n", st3.lastName);     //B
	printf("st3.studentId = %d\n", st3.studentId);       //200
	printf("st3.grade = %c\n", st3.grade);          //B
                                                        //모두 메모리의 stack에 들어가있음
	//equality test//전체구조의 동등성 검사
	//if(st3 == st2)
	//	printf("equal\n");
	//else
	//	printf("not equal\n");
                                     //컴파일 에러가 남 == 비교를 할 수 없다 (하나하나 다 비교해봐야함)
	return 0;

}
