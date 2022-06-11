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
    double temp;
    char var;
    char var1;
    printf("Fahrenheit, Celsius, or Kelvin?(f, c, or k) ");
    scanf(" %c", &var);
    printf("Convert to Celsius or Kelvin or Fahrenheit?(c, f or k) ");
    scanf(" %c", &var1);
    printf("What temp do you want to convert? "); 
    scanf(" %lf", &temp);
    if (var == 'f') {
        if (var1 == 'f') {
            printf("You dumb or something? It's %lf", temp);
        }    
        if (var1 == 'c') {
            temp = convert_to_celsius(temp);
            printf("Celsius temp: %lf", temp);
        }    
        if (var1 == 'k') {
            temp = convert_to_celsius(temp);
            temp = convert_to_kelvin(temp);
            printf("Kelvin temp: %lf", temp);
        }    
    }    
    if (var == 'c') {
        if (var == 'f') {

        }    
        if (var == 'c') {

        }    
        if (var == 'k') {

        }    
    }    
    if (var == 'k') {
        if (var == 'f') {

        }    
        if (var == 'c') {

        }    
        if (var == 'k') {

        }    
    }    
    return 0;
}
