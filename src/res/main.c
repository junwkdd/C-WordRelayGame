#include "../header/vsGame.h"
#include <stdlib.h>

int main()
{
    system("clear");

    int vs;

    printf("끝말잇기\n");
    printf("1. vsCom\n");
    printf("2. vsPerson\n");
    scanf("%d", &vs);

    if(vs == 1) {
        vsCom();
    } else if(vs == 2) {
        vsPerson();
    } else {
        printf("잘못된 입력\n");
        return 0;
    }
}