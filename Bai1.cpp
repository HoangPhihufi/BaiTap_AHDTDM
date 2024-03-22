#include <stdio.h>
int main() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");

    // Duyệt qua tất cả các số từ 10 đến 99
    for (int i = 10; i < 100; i++) {
        if(i%7==0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    for (int i = -10; i > -100; i--) {
        if(i%7==0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
