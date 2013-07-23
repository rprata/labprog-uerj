#include <stdio.h>
#define MAX 100

void leMatriz(float M[MAX][MAX], int m, int n);
void imprimeMatriz(float M[MAX][MAX], int m, int n);
float produtoEscalar (float V1[MAX], float V2[MAX], int N);

int main () {

   float A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], vet[MAX];
   int r,s,t;
   int lin, col, k;

   void leMatriz(float M[MAX][MAX], int m, int n) {

   int lin, col;

   for (lin=0; lin<m; lin++)
      for (col=0; col<n; col++
        scanf("%f", &M[lin][col]);

}

void imprimeMatriz(float M[MAX][MAX], int m, int n) {

   int lin, col;
   for (lin=0; lin<m; lin++) {
      for (col=0; col<n; col++)
        printf("%.2f \t", M[lin][col]);
      printf("\n"); 
   }
}

float produtoEscalar (float V1[MAX], float V2[MAX], int N) {

   int i;
   float res = 0;

  for (i=0; i<N; i++) 
      res = res + V1[i] * V2[i];

   return res;
}

   printf("Qual a dimensão da matriz desejada?: ");
   scanf("%d %d %d", &r, &s, &t);
   printf("Valores da matriz A\n")
   leMatriz(A, r, s);
   printf("Valores da matriz B\n");
   leMatriz(B, s, t);

   for (lin = 0; lin < r; lin++) {
     for (col = 0; col < t; col++) {
        for (k = 0; k<s; k++) vet[k] = B[k][col];

        C[lin][col] = produtoEscalar(A[lin], vet, s);
     }
   }

   imprimeMatriz(C, r, t);
   return 0;
}