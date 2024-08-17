#include <stdio.h>
#include <math.h>

struct ponto {
    float x;
    float y;
};

float calcDistancia(struct ponto p1, struct ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    struct ponto pnt1, pnt2;
    float distancia;

    printf("insira as coordenadas do primeiro ponto (X e Y): ");
    scanf("%f %f", &pnt1.x, &pnt1.y);
    printf("insira as coordenadas do segundo ponto (X e Y): ");
    scanf("%f %f", &pnt2.x, &pnt2.y);

    distancia = calcDistancia(pnt1, pnt2);

    printf("coordenadas do primeiro ponto: (.%2f, .%2f)\n", pnt1.x, pnt1.y);
    printf("coordenadas do segundo ponto: (.%2f, .%2f)\n", pnt2.x, pnt2.y);
    printf("distância entre os pontos: .%2f\n", distancia);
}