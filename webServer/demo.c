#include <stdio.h>
int main(int argc, char *argv[])
{
	char buf[10];
	buf[0]=0xe8;
	buf[1]=0x8b;
	buf[2]=0xa6;

	printf("%s\n",buf);
	return 0;
}


