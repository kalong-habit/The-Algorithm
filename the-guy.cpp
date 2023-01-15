#include <stdio.h>

// System matrices
float A[2][2] = {{1, 1}, {0, 1}};
float B[2] = {1, 0};
float C[1] = {1};
float D = 0;

// Observer matrices
float L[2] = {0.5, 0.5};

float x_hat[2] = {0, 0}; // Estimated state
float x[2] = {0, 0}; // True state
float y = 0; // Measurement

void eso(float u) {
    // True state dynamics
    x[0] = A[0][0]*x[0] + A[0][1]*x[1] + B[0]*u;
    x[1] = A[1][0]*x[0] + A[1][1]*x[1] + B[1]*u;

    // Measurement
    y = C[0]*x[0] + D;

    // Observer dynamics
    x_hat[0] = A[0][0]*x_hat[0] + A[0][1]*x_hat[1] + B[0]*u + L[0]*(y - C[0]*x_hat[0] - D);
    x_hat[1] = A[1][0]*x_hat[0] + A[1][1]*x_hat[1] + B[1]*u + L[1]*(y - C[0]*x_hat[0] - D);
}

int main() {
    float u = 1.0;
    for (int i = 0; i < 10; i++) {
        eso(u);
        printf("True state: [%f, %f], Estimated state: [%f, %f], Measurement: %f\n", x[0], x[1], x_hat[0], x_hat[1], y);
        u += 0.5;
    }
    return 0;
}
