/* guess.c -- an inefficient and faulty number-guesser */
#include <stdio.h>

int main(void) {
    int guess = 1;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    char response;
    while ((response = getchar()) != 'y') {
        if (response == 'n')
            printf("Well, then, is it %d?\n", ++guess);
        else
            printf("Sorry, I understand only y and n.\n");
        while (getchar()!='\n')  /*跳过剩余的输入行*/
            continue;
    }
    printf("I knew I could do it!\n");

    return 0;
}
