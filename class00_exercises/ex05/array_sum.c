/* class00/ex05/array_sum.c
 * 課題名：array_sum
 * 提出ファイル：array_sum.c
 * 使用可能な関数：
 * ------------------------------------------ *
 * int型の配列とその要素数を引数として受け取り、配列の全要素の合計を返す関数を書きなさい。
 * 関数は次のように宣言すること：
 * int array_sum(int *arr, int size);
 */

#include <stdio.h>

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int size;
	int sum;

	size = sizeof(arr) / sizeof(arr[0]);
	sum = array_sum(arr, size);
	printf("Sum: %d\n", sum);
	return (0);
}