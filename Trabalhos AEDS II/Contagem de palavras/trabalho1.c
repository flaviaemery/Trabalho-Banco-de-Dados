#include <stdio.h>
  #include <string.h>

  int main(int argc, char **argv) {
        char string[256], text[256], palavra[100][256], temp[256];
        int i, j, k, n, count;

        i = j = k = n = 0;

        FILE *fp = argc > 1 ? fopen (argv[1], "r") : stdin;
        if (!fp) {
        fprintf (stderr, "error: file open failed '%s'.\n", argv[1]);
        return 1;
        }

        fp = fopen("saida.txt","w");

        /* coloca a string de entrada para o usuário */
        fgets(string, 256, stdin);
        string[strlen(string) - 1] = '\0';

        /* copia cada uma das palavras para a string */
        while (string[i] != '\0') {
                if (string[i] == ' ') {
                        palavra[j][k] = '\0';
                        k = 0;
                        j++;
                } else {
                        palavra[j][k++] = string[i];
                }
                i++;
        }

        palavra[j][k] = '\0';
        n = j;

        /* classifica as palavras na string */
        for (i = 0; i < n; i++) {
                strcpy(temp, palavra[i]);
                for (j = i + 1; j <= n; j++) {
                        if (strcmp(palavra[i], palavra[j]) > 0) {
                                strcpy(temp, palavra[j]);
                                strcpy(palavra[j], palavra[i]);
                                strcpy(palavra[i], temp);
                        }
                }
        }

        fprintf(fp,"Frequencia das palavras em ordem alfabética:\n");
        i = 0;

        /* Encontra a frequencia de cada palavra e imprime o resultado */
        while (i <= n) {
                count = 1;
                if (i != n) {
                        for (j = i + 1; j <= n; j++) {
                                if (strcmp(palavra[i], palavra[j]) == 0) {
                                        count++;
                                }
                        }
                }

                /* count - indicates the frequecy of word[i] */
                fprintf(fp,"  %s  : %td\n", palavra[i], count);

                /* skipping to the next word to proces s */
                i = i + count;
        }

        printf("\n");
        return 0;
  }