#include <stdio.h>
#include <math.h>

struct ponto {
    float x;
    float y;
};

int main() {
    struct ponto P;
    float distancia;

    printf("Digite a coordenada X do ponto: ");
    scanf("%f", &P.x);
    printf("Digite a coordenada Y do ponto: ");
    scanf("%f", &P.y);

    // Calculando a distância até a origem (0,0)
    distancia = sqrt(P.x * P.x + P.y * P.y);

    printf("Coordenadas do ponto: (%.2f, %.2f)\n", P.x, P.y);
    printf("Distância até a origem: %.2f\n", distancia);

    return 0;
}