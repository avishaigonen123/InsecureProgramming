/* abo1.c                                       *
 * specially crafted to feed your brain by gera */

/* Dumb example to let you get introduced...    */

int main(int argv,char **argc) {
	char buf[256];

	strcpy(buf,argc[1]);
}


/*

regular buffer overflow, just give 260 bytes of 'A' and then ret-address.

*/