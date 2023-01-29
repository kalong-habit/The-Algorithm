#include <stdio.h>

#define FILTER_COEFF 0.9 // The filter coefficient, between 0 and 1

float prev_val = 0; // Previous value of the signal
float prev_diff = 0; // Previous estimated derivative of the signal

float track_diff(float val) {
    float diff = (val - prev_val) * FILTER_COEFF + prev_diff * (1 - FILTER_COEFF);
    prev_val = val;
    prev_diff = diff;
    return diff;
}

int main() {
    float val = 1.0;
    for (int i = 0; i < 10; i++) {
        printf("Value: %f, Derivative: %f\n", val, track_diff(val));
        val += 0.5;
    }
    return 0;
}
