#include <stdio.h>

int main(void)
{
    unsigned int color_a;
    unsigned int color_a_r;
    unsigned int color_a_g;
    unsigned int color_a_b;
    unsigned int color_b;
    unsigned int color_b_r;
    unsigned int color_b_g;
    unsigned int color_b_b;
    printf("Escribe un numero hexadecimal de 6 digitos: ");
    scanf("%X",&color_a);
    printf("Escribe otro numero hexadecimal de 6 digitos: ");
    scanf("%X",&color_b);
    printf("Primer color:\n");
    color_a_r = color_a >> 16;
    color_a_g = color_a >> 8;
    color_a_g = color_a_g & 255;
    color_a_b = color_a & 255;
    printf("< %d, %d, %d >\n",color_a_r, color_a_g, color_a_b);
    
    printf("Segundo color:\n");
    color_b_r = color_b >> 16;
    color_b_g = color_b >> 8;
    color_b_g = color_b_g & 255;
    color_b_b = color_b & 255;
    printf("< %d, %d, %d >\n",color_b_r, color_b_g, color_b_b);
    
    printf("Color Complementario del primer color: %X\n", ~color_a & 16777215);
    printf("Color Complementario del primer color: %X\n", ~color_b & 16777215);
    printf("Adicion de colores: %X\n", color_a | color_b);
    printf("Sustraccion de colores: %X\n", (color_a ^ color_b)&color_a);

    return 0;
}