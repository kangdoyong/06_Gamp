
#include <stdio.h>

void main()
{
	// �ݺ������� ��� ����

	for (int i = 0; i < 5; ++i)
	{
		// i�� ���� 3�� ���, ����� ���ϰ� ���� ��
		// -> continue Ű���带 ���� ��� ���� �ݺ����� �Ѿ
		if (i == 3) continue;
		
		printf("i�� %d \n", i);
	}
}