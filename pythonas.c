#include <math.h>
#include <stdio.h>
main() {
    int a, b;
    printf("come on lets make it quick\ngimme a side\n");
    scanf("%d", &a);
    printf("...\n another one\n");
    scanf("%d", &b);
    int g = a * a + b * b;
    int c = sqrt(g);
    printf("bzzzzzzzzzzzzzzzzz\n bzzzzzzzzzzzzzzzzz\n bzzzzzzzzzzzzzzzzz\n the answer is %d \n", c);
}