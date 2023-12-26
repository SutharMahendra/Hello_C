#include <stdio.h>
// pass structure variable as argument
struct part2
{
    /* data */
    int x;
    int y;
    int z;
};

void display(struct part2 value)
{
    printf("%d %d %d", value.x, value.y, value.z);
}

int main()
{
    struct part2 p1 = {12, 13, 14};
    struct part2 p2 = {12, 34, 55};

    display(p1);
    display(p2);
    return 0;
}
