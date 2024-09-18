/* class00/ex02/CaesarCipher.c
 * 課題名：CaesarCipher
 * 提出ファイル：CaesarCipher.c
 * 使用可能な関数：write
 * ------------------------------------------ *
 * 文字列を受け取り、文字列の文字すべてをそれぞれアルファベット昇順で1ずらしたものと、
 * 改行を標準出力に出力するプログラムを書きなさい。
 * 'z'は'a'となり、'Z'は'A'となる。大文字でも小文字は変更しないこと。
 * コマンドライン引数の数が1つではない場合、改行だけを標準出力に出力すること。
 * void	caesar_cipher(char *str)
 */

#include <unistd.h>

void	caesar_cipher(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str < 'z') || (*str >= 'A' && *str < 'Z'))
		{
			*str += 1;
		}
		else if (*str == 'z' || *str == 'Z')
		{
			*str -= 25;
		}
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

#include <stdio.h>

int	main(void)
{
	char input[1000] = "Hello, World! This is a test. zzZZZ";

	caesar_cipher(input);

	return (0);
}