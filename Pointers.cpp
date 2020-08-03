#include <stdio.h>
#include <cmath>


void update(int *a,int *b) {
    int sum = *a + *b;
    int abs = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = abs;
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}