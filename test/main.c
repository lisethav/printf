#include <stddef.h>
#include <stdio.h>
#include "holberton.h"

int main()
{
    int len, len2;

    len =  _printf("%c", '\0'); /* OK*/
    len2 =  printf("%c", '\0');
    _printf("p:%d\n", len); /* OK*/
    printf("%d\n", len2);

    len = _printf("%\n");  /*esta imprimiendo % y no debe imprimir nada*/
    len2 = printf("%\n");
    _printf("p:%d\n", len); /*falta el caracter nulo, no lo está contando*/
    printf("%d\n", len2);

    len = _printf("%"); /* OK*/
    len2 = printf("%");
    _printf("p:%d\n", len);  /*pendiente*/
    printf("%d\n", len2);

    len = _printf("p:%%\n"); /* OK*/
    len2 = printf("%%\n");
    _printf("p:%d\n", len);
    printf("%d\n", len2);

    len = _printf("p:aa%%%%\n"); /*OK*/
    len2 = printf("aa%%%%\n");
    _printf("p:%d\n", len);
    printf("%d\n", len2);

    len = _printf("p:aa%%%%%%\n"); /*OK*/
    len2 = printf("aa%%%%%%\n");
    _printf("p:%d\n", len);
    printf("%d\n", len2);

    len = _printf("p:%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n'); /*OK*/
    len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    _printf("p:%d\n", len);
    printf("%d\n", len2);

    len = _printf("");
    len2 = printf("");
    _printf("%d\n", len);
    printf("%d\n", len2);

    len = _printf(NULL);
    len2 = printf(NULL);
    _printf("%d\n", len);
    printf("%d\n", len2);

    len = _printf("%t");
    len2 = printf("%t");
    _printf("%d\n", len);
    printf("%d\n", len2);

    return (0);
}