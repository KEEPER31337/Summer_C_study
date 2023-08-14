#include <stdio.h>

int main() {
    int h;
    int m;
    int time;
    printf("");
    scanf("%d %d", &h, &m);
    printf("");
    scanf("%d", &time);
    m += time;
        h += m / 60;
        m %= 60;
        if (h >= 24) {
            h -= 24; 

        }
    printf("%d %d", h , m);
    return 0;
}