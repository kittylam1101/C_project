#include<stdio.h>
#include<stdlib.h>
#include"Header.h"
#include<time.h>
int main(void)
{
	printf("�׷��K�X�C��,�п�J1-100�d��H�����Ʀr(���]�A1��100) \n");
	scanf_s("%d", &a);
	srand(time(NULL));
	bingo = 2+ rand() % 98;
	while (a<=min || a>=max)
	{
		printf("��J��ƿ��~,�Э��s��J\n");
		printf("�׷��K�X�C��,�п�J1-100�d��H�����Ʀr(���]�A1��100)\n");
		scanf_s("%d", &a);
	}
	if (a == bingo)
		printf("�׷��K�X�O%d,�A�q���F\n", bingo);
		while (a != bingo && a>=min && a<=max)
		{
			if (a < bingo)
 			{
				min = a;
				printf("�A�q���F,�п�J%d-%d���Ʀr�d��(���]�A%d��%d)", min, max, min, max);
				scanf_s("%d", &a);
				while (a <= min || a >= max)
				{
					printf("��J��ƿ��~,�Э��s��J\n");
					scanf_s("%d", &a);
				}
			}
			else
			{
				max = a;
				printf("�A�q���F,�п�J%d-%d���Ʀr�d��(���]�A%d��%d)", min, max, min, max);
				scanf_s("%d", &a);
				while (a <= min || a >= max)
				{
					printf("��J��ƿ��~,�Э��s��J\n");
					scanf_s("%d", &a);
				}
			}

	}
	if (a == bingo)
	printf("�A�q��F,�׷��K�X�O%d\n", bingo);
	system("pause");
	return 0;




}