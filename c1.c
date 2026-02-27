// Напишете програма, която отпечатва рамка с размер
// 10x5 изградена от знак, въведен от потребителя:

#include <stdio.h>

int main(){

    char ch;
    scanf("%c", &ch);
    printf("%c%c%c%c%c%c%c%c%c%c\n", ch, ch, ch, ch, ch, ch, ch, ch, ch, ch);
    printf("%c \t %c\n", ch, ch);
    printf("%c \t %c\n", ch, ch);
    printf("%c \t %c\n", ch, ch);
    printf("%c%c%c%c%c%c%c%c%c%c\n", ch, ch, ch, ch, ch, ch, ch, ch, ch, ch);

    return 0;
}
