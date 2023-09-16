#include <stdio.h>

int main() {
    int i = 0;
    int p = 0; 
    float n, s = 0;

    while (i < 6) {
        scanf("%f", &n);

        if (n > 0) {
            p++;
            s += n;
        }

      
        i++;
    }

    float m = s / p;

    printf("%d valores positivos\n", p); 
    printf("%.1f\n", m);

    return 0; 
}
