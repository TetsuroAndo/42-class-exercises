/* class00/ex03/find_max.c
 * 課題名：find_max
 * 提出ファイル：find_max.c
 * 使用可能な関数：
 * ------------------------------------------ *
 * int型の配列から最大値を見つける関数を書きなさい。
 * 関数は配列へのポインタと配列の要素数を引数として受け取ること。
 * 関数は次のように宣言すること：
 * int find_max(int *arr, int size);
 */

int	find_max(int *arr, int size)
{
	int	max;
	int	i;

	i = 0;
	max = arr[0];
	while (max < size)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		i++;
	}
	return (max);
}

#include <stdio.h>

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	int max = find_max(arr, size);
	printf("Max: %d\n", max);
	return (0);
}