#include <stdio.h>
#include <math.h>

void voo(float x, float y, float vx, float vy, float t) {
    vx = vx - 0.5 * vx * 0.01;
    vy = vy - (9.8 + 0.5 * vy) * 0.01;
    x = x + vx * 0.01;
    y = y + vy * 0.01;
    t = t + 0.01;

    if (y <= 0) {
        printf("Alcance: %.2f m\n", x);
        printf("Tempo: %.2f s\n", t);
    } else {
        voo(x, y, vx, vy, t);
    }
}

int main() {
    float v0, graus, rad;

    printf("Velocidade inicial: ");
    scanf("%f", &v0);
    printf("Angulo: ");
    scanf("%f", &graus);

    rad = graus * (3.14159 / 180);
    voo(0, 0, v0 * cos(rad), v0 * sin(rad), 0);

    return 0;
}
