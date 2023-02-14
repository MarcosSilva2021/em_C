    #include <stdio.h>
    #include <math.h>
     
    #define QTD_ELEMENTOS 5
     
    int main() {
        int vetor[QTD_ELEMENTOS];
     
        for (int i = 0; i < QTD_ELEMENTOS; i++) {
            printf("Digite um número: ");
            scanf("%d", &vetor[i]);
        }
     
        int somatorio = 0;
        for (int i = 0; i < QTD_ELEMENTOS; i++) {
            somatorio += vetor[i];
        }
     
        float media = somatorio / (float) QTD_ELEMENTOS;
     
        float variacoes = 0;
        for (int i = 0; i < QTD_ELEMENTOS; i++) {
            float v = vetor[i] - media;
            variacoes += v * v;
        }
     
        float sigma = sqrt(variacoes / QTD_ELEMENTOS);
        printf("Resultado d = %.2f\n", sigma);
    }
