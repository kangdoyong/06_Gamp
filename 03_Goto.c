#include <stdio.h>

// goto���̶�?
// ������ ���̺� ��ġ�� �� ���� ���α׷��� �帧�� �����Ű�� ������

void main()
{
	int a = 0;
	while (1)
	{
		if (a == 5)			
			goto Teleport;

		printf("a�� %d \n", a++);
	}
Teleport:
	printf("Teleport\n");
}