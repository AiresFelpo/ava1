#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float distancia;
    
    printf("Digite as coordenadas do ponto P1 (x1, y1):\n");
    printf("x1: ");
    scanf("%f", &x1);
    printf("y1: ");
    scanf("%f", &y1);
    
    printf("Digite as coordenadas do ponto P2 (x2, y2):\n");
    printf("x2: ");
    scanf("%f", &x2);
    printf("y2: ");
    scanf("%f", &y2);
    
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("A distância entre os pontos P1(%.4f, %.4f) e P2(%.4f, %.4f) é %.4f\n", x1, y1, x2, y2, distancia);
    
    return 0;
}
