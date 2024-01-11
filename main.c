#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    char Tj[5][8];
    char Tc[5][8];
    int C[5];
    int i, j, p=0, d=0, cmp = 5;
    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        C[i] = (rand() % 8 + 1);
    }
    for (i = 0; i < 5; i++) {
        switch (C[i]) {
        case 1:
            strcpy(Tc[i], "red");
            break;
        case 2:
            strcpy(Tc[i], "blue");
            break;
        case 3:
            strcpy(Tc[i], "green");
            break;
        case 4:
            strcpy(Tc[i], "black");
            break;
        case 5:
            strcpy(Tc[i], "white");
            break;
        case 6:
            strcpy(Tc[i], "pink");
            break;
        case 7:
            strcpy(Tc[i], "yellow");
            break;
        case 8:
            strcpy(Tc[i], "brown");
            break;
        }
    }
    for (i = 0; i < 5; i++) {
        printf("Tc[%d] = %s \n ", i+1, Tc[i]);
    }

   for (i = 0; i < 5; i++) {
        printf("\n the color number %d\t", i+1);
        fflush(stdout);
        fgets(Tj[i], sizeof(Tj[i]), stdin);
        Tj[i][strcspn(Tj[i], "\n")] = '\0';
    }
    for (i = 0; i < 5; i++) {
        if (strcmp(Tj[i], Tc[i]) == 0) {
            p = p + 1;
            printf("%d", p);
        }
        else {
            for (j = 0; j < 5; j++) {
                if (i != j && strcmp(Tj[i], Tc[j]) == 0) {
                    d = d + 1;
                }
            }
        }
    }

    if (p == 5) {
        printf("you won!\n");
    }
    else {
        printf("you get %d color in the right place,\n", p);
        printf("you get %d color right but in the wrong place.\n", d);
        printf("try again.\n");
    }
    return 0;
}
