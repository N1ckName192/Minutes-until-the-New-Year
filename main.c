#include <stdio.h>

int main() {
    int t;
    printf("Введите количество запросов:");
    scanf("%d", &t);

    while (t--) {
        int h, m;
        printf("Введите время в формате часы минут (hh mm): ");
        scanf("%d %d", &h, &m);

        int n_min = (24 - h)*60 - m;

        printf("Осталось %d минут до Нового года.\n", n_min);
    }

    return 0;
}

