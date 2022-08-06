#include <stdio.h>

void main4() {
	// break와 continue를 활ㅇ용
	int i = 0;
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 1) {
			continue;
		}
		if (i == 52 ) {
			break;
		}
		if (i > 0) {
			printf("%d \n", i);
		}
	}
}