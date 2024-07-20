#include <stdio.h>

// goto문이란?
// 지정한 레이블 위치로 한 번에 프로그램의 흐름을 도약시키는 점프문

void main()
{
	int a = 0;
	while (1)
	{
		if (a == 5)			
			goto Teleport;

		printf("a는 %d \n", a++);
	}
Teleport:
	printf("Teleport\n");
}