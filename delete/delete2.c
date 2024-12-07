#include <stdio.h>
#include <math.h>

int main() {
    int a, b, i1 = 0, i2, count1 = 0, count2 = 0;

    for (int i = 3; i <= 500; i += 2) {
        for (int j = 2; j <= (int)sqrt(i); j++) {
            if (i % j == 0) {
                count1++;
                break; // If not prime, break the inner loop
            }
        }

        if (count1 == 0) {
            i1 = i;
            printf("%d ", i1);

            for (int k = i1 + 2; k <= 500; k += 2) {
                for (int w = 2; w <= (int)sqrt(k); w++) {
                    if (k % w == 0) {
                        count2++;
                        break; // If not prime, break the inner loop
                    }
                }

                if (count2 == 0) {
                    i2 = k;
                    printf("%d\n", i2);
                    break; // Found a twin prime pair, break the outer loop
                }

                count2 = 0;
            }
        }

        count1 = 0;
    }

    return 0;
}