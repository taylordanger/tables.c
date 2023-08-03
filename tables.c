#include <stdio.h>


void print_progress(size_t count, size_t max) {
    const int bar_width = 50;

    float progress = (float) count / max;
    int bar_length = progress * bar_width;

    printf("\r(╯°□°)╯︵:");
    for (int i = 0; i < bar_length; ++i) {
        printf("┻━┻");
    }
    for (int i = bar_length; i < bar_width; ++i) {
        printf(" ");
    }
    printf("┬─┬ノ(º _ ºノ) %.2f%%", progress * 100);

    fflush(stdout);
}
