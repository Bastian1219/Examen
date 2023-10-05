#include <stdio.h>

int main() {
    int V1, V2, V3, temp;
    printf("V1:");
    scanf("%d", &V1);
    printf("V2:");
    scanf("%d", &V2);
    printf("V3:");
    scanf("%d", &V3);

    temp = V3;
    V3 = V2;
    V2 = V1;
    V1 = temp;

    printf("Después de cambiarlos:\n");
    printf("V1:%d\n", V1);
    printf("V2:%d\n", V2);
    printf("V3:%d\n", V3);

    return 0;
}

