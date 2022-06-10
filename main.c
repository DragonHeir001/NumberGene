#include <stdio.h>
double convert_to_celsius(double f) {
    f = f - 32; 
    f = f * 5/9; 
    return f;
}
double convert_to_kelvin(double c) {
    c = c + 273.15;
    return c;
}
int main() {
    printf("Provide fahrenheit temp:");
    double temp;
    scanf("%lf", &temp);
    temp = convert_to_celsius(temp);
    temp = convert_to_kelvin(temp);
    printf("Kelvin temp:%lf", temp);
    return 0;
}
