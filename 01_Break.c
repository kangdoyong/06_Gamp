// �������̶�?
// ���α׷��� �帧�� ����, ���α׷��� ���� ��ġ�� ���ϴ� ������ �����ų �� ���

// c���
// break;
// continue
// goto
// return

// break
// switch���� Ư�� ���̽��� ������ �ߴ��ϰ��� �� �� ���
// ���� ���� ���� �ݺ����� �ߴ��ϰ��� �� �� ���

#include <stdio.h>

void main()
{
	int i = 10;

	while (1)
	{
		--i;
		printf("i�� %d \n", i);

		if (i == 5)
		{
			printf("Ż��\n");
			break;
		}
	}
}