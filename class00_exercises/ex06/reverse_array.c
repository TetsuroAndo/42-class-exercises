/* class00/ex06/reverse_array.c
 * 課題名：reverse_array
 * 提出ファイル：reverse_array.c
 * 使用可能な関数：
 * ------------------------------------------ *
 * int型の配列とその要素数を引数として受け取り、配列の要素を逆順に並び替える関数を書きなさい。
 * 関数は次のように宣言すること：
 * void reverse_array(int *arr, int size);
 */

#include <stdio.h>

int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);
	reverse_array(arr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return (0);
}