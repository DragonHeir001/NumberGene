#include <stdio.h>
double convert_to_celsius1(double k) {
    k = k - 273.15; 
    return k;
}
double convert_to_fahrenheit1(double c) {
    c = c * 9/5; 
    c = c + 32; 
    return c;
}
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
        if (var1 == 'f') {
            temp = convert_to_fahrenheit1(temp);

        }    
        if (var1 == 'c') {
            printf("You dumb or something? It's %lf", temp);
        }    
        if (var1 == 'k') {
            temp = convert_to_kelvin(temp);
            printf("Kelvin temp: %lf", temp);

        }    
    }    
    if (var == 'k') {
        if (var1 == 'f') {
            temp = convert_to_celsius1(temp);
            temp = convert_to_fahrenheit1(temp);
            printf ("Fahrenheit temp: %lf", temp);
        }    
        if (var1 == 'c') {
            temp = convert_to_celsius1(temp);
            printf("Celsius temp: %lf", temp);
        }    
        if (var1 == 'k') {
            printf("You dumb or something? It's %lf", temp);
        }    
    }    
    return 0;
}
