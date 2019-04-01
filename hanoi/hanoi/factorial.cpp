#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi(int n, int start, int work, int target);

void hanoi(int n, int start, int work, int target) {
	if (n == 1) {
		printf("%c에서 원반 %d를(을) %c로 옮김 \n", start, n, target);
	}
	else {
		hanoi(n - 1, start, target, work);
		printf("%c에서 원반 %d를(을) %c로 옮김 \n", start, n, target);
		hanoi(n - 1, work, start, target);
		
	}
	

}
void main()
{
	hanoi(3, 'A', 'B', 'C');
	
}
