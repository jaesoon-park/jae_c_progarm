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
	strcpy(Sptr->name, "�̼���");
	Sptr->year = 2015;
	Sptr->pay = 5900;


	printf("\n �̸� : %s", Sptr->name);
	printf("\n ���� : %d", Sptr->year);
	printf("\n �Ի� : %d\n", Sptr->pay);
	
}
