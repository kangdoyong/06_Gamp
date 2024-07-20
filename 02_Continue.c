
#include <stdio.h>

void main()
{
	// 반복문에서 사용 가능

	for (int i = 0; i < 5; ++i)
	{
		// i의 값이 3일 경우, 출력을 안하고 싶을 때
		// -> continue 키워드를 만날 경우 다음 반복으로 넘어감
		if (i == 3) continue;
		
		printf("i는 %d \n", i);
	}
}