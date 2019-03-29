#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct employee {
	char name[10];
	int year;
	int pay;
};



int main()
{
	struct employee Lee;
	struct employee *Sptr = &Lee;
	strcpy(Sptr->name, "이순신");
	Sptr->year = 2015;
	Sptr->pay = 5900;


	printf("\n 이름 : %s", Sptr->name);
	printf("\n 연봉 : %d", Sptr->year);
	printf("\n 입사 : %d\n", Sptr->pay);
	
}
