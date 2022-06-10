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
//printf("Provide fahrenheit temp:");
// double temp;
// char var;
// scanf("%lf", &temp);
int main() {
    double temp;
    char var;
    char var1;
    char var2;
    printf("Fahrenheit, Celsius, or Kelvin? (f, c, or k)");
    scanf("%s", &var);
    printf("Convert to Celsius or Kelvin or Fahrenheit? (c, f or k)");
    scanf("%s", &var1);
    if (var == 'f') {
        if (var1 == 'c') {
            temp = convert_to_celsius(temp);
            printf("Celsius temp:%lf", temp);
            if (var == 'k') {
                temp = convert_to_celsius(temp);
                temp = convert_to_kelvin(temp);
                printf("Kelvin temp:%lf", temp);
            }
        }
    }    
    return 0;
}
