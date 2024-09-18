/*
 * 課題名：array_copy
 * 提出ファイル：array_copy.c
 * 使用可能な関数：
 * ------------------------------------------ *
 * int型の配列とその要素数、そしてコピー先の配列を引数として受け取り、配列の内容をコピーする関数を書きなさい。
 * 関数は次のように宣言すること：
 * void array_copy(int *src, int *dest, int size);
 */

#include <stdio.h>

int	main(void)
{
	int source[] = {1, 2, 3, 4, 5};
	int destination[5];
	int size = 5;
	int i;

	array_copy(source, destination, size);

	for (i = 0; i < size; i++)
	{
		printf("%d ", destination[i]);
	}
	printf("\n");

	return (0);
}