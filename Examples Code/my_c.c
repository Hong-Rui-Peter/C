// c語言敘述
#include <stdio.h>

int main()
{
	printf("我是 C 語言所撰寫的程式\n\n");
	printf("必須經由編譯產生可執行的程式檔(exe或com)\n\n");
	printf("%s\n\n", "如 小算盤:calc.exe 小畫家:mspaint.exe");
	printf("執行時直接鍵入\'主檔名\'\n");
	printf("\n");

	system("pause");
	return 0;
}

// gcc -o  可執行程式檔檔名 原始程式檔名
// gcc -o  my_C_C++.exe  my_C_C++.c
