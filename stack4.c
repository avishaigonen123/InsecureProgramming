/* stack4-stdin.c                               *
 * specially crafted to feed your brain by gera */

#include <stdio.h>

int main() {
	int cookie;
	char buf[80];

	printf("buf: %08x cookie: %08x\n", &buf, &cookie);
	gets(buf);
	// printf("buf: %08x cookie: %08x\n", &buf, cookie);
	// printf("%s\n", buf);
	if (cookie == 0x000d0a00)
		printf("you win!\n");
}
