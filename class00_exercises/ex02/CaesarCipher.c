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

#include <stdio.h>

int	main(void)
{
	char input[1000] = "Hello, World! This is a test. zzZZZ";

	caesar_cipher(input);

	return (0);
}