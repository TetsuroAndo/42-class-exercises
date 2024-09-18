/* class00/ex01/write_string.c
 * 課題名：write_string
 * 提出ファイル：write_string.c
 * 使用可能な関数：write
 * ------------------------------------------ *
 * 文字列を標準出力に出力する関数を書きなさい。
 * 関数に渡されたポインタは文字列の最初のアドレスを含む。
 * 関数は次のように宣言すること：
 * void write_string(char *str);
 */

#include <unistd.h>

void	write_string(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int	main(void)
{
	write_string("Hello, World!");
	return (0);
}