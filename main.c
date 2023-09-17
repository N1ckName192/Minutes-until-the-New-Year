#include <stdio.h>
int main() {
    int n_sets;
    scanf("%d", &n_sets);

    for (int set_number = 1; set_number <= n_sets; set_number++) {
        int h, m;
        scanf("%d %d", &h, &m);

        int n_min = (24 - h)*60 - m;

        printf("%d\n", n_min);
    }

    return 0;

}
