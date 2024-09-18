/* class00/ex08/ft_arithmetic.c
 * 課題名：ft_arithmetic
 * 提出ファイル：ft_arithmetic.c
 * 使用可能な関数：
 * ------------------------------------------ *
 * 2つの引数を受け付ける関数を作成すること：1つ目はint型整数のポインタ、2つ目はint型整数。
 * この関数は1つ目のポインタが指すint型整数に対して、2つ目のint型整数を用いて算術演算を行うこと。
 * 関数は次のように宣言すること：
 *  void ft_add(int *ptr, int number);
 *  void ft_subtract(int *ptr, int number);
 *  void ft_multiply(int *ptr, int number);
 *  void ft_divide(int *ptr, int number);
 * 各関数は、それぞれ加算、減算、乗算、除算を行うこと。
 * 除算の場合、ゼロ除算に注意すること。
 */

#include <stdio.h>

int	main(void)
{
	int number = 10;
	int *ptr = &number;

	ft_add(ptr, 5);
	printf("加算後の数値: %d\n", number);
	ft_subtract(ptr, 3);
	printf("減算後の数値: %d\n", number);
	ft_multiply(ptr, 2);
	printf("乗算後の数値: %d\n", number);
	ft_divide(ptr, 2);
	printf("除算後の数値: %d\n", number);
	return (0);
}