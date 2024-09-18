/* class00/ex04/swap_int.c
 * 課題名：swap_int
 * 提出ファイル：swap_int.c
 * 使用可能な関数：
 * ------------------------------------------ *
 * 2つのint型のポインタを引数として受け取り、それらが指す値を交換する関数を書きなさい。
 * 関数は次のように宣言すること：
 * void swap_int(int *a, int *b);
 */

#include <stdio.h>

int	main(void)
{
	int a = 2147483647;
	int b = -2147483648;
	swap_int(&a, &b);
	printf("a: %d, b: %d\n", a, b);
	return (0);
}