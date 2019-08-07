/*****************************************************
这是一个可以将1—9内三位数不同组合方式遍历并计数的代码
*****************************************************/
#include<stdio.h>
int range = 9;
void main(void)
{
	int count = 0;
	for (int i = 1; i <= range; i++)
	{
		for (int j = 1; j <= range; j++)
		{
			for (int k = 1; k <= range; k++)
			{
				if (i != j && j != k && i != k)
				{
					printf("%5d", i * 100 + j * 10 + k);
					count++;
					if (count % 10 == 0) printf("\n");
				}
				else
				{
					continue;//跳过本次循环的后面语句，直接执行下一循环，即不显示x
					printf("x");
				}
			}
		}
	}
	printf("\n");
	printf("共有%d个数", count);
}
