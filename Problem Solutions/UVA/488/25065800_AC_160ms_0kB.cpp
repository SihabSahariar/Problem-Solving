#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int T, amplitude, frequency;

    while (scanf("%d", &T) != EOF) {

        for (int t = 0; t < T; ++t) {
            scanf("%d", &amplitude);
            scanf("%d", &frequency);

            for (int f = 0; f < frequency; ++f) {
                for (int a = 1; a <= amplitude; ++a) {
                    for (int i = 0; i < a; ++i)
                        printf("%d", a);
                    printf("\n");
                }

                for (int a = amplitude - 1; a > 0; --a) {
                    for (int i = 0; i < a; ++i)
                        printf("%d", a);
                    printf("\n");
                }

                if (f < frequency - 1)
                    printf("\n");
            }

            if (t < T - 1)
                printf("\n");
        }
    }

    return 0;
}