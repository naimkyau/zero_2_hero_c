/*
Exercise of Units and Conversions

kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters

*/
#include <stdio.h>

float km_mi(float km){      // Kilometers to Miles
    float mi = (km * 0.621371);     return mi;
}
float in_ft(float in){      // Inches to Foot
    float ft = (in / 12);           return ft;
}
float cm_in(float cm){      // Centimeters to Inches
    float in = (cm / 2.54);         return in;
}
float lb_kg(float lb){      // Pounds to Kilograms
    float kg = (lb * 0.453592);     return kg;
}
float in_m(float in){       // Inches to Meters
    float m = (in * 0.0254);        return m;
}

int main() {

    int c;
    float i, o;
    printf("\n");
    printf("1 for Kilometers to Miles\n2 for Inches to Foot\n3 for Centimeters to Inches\n4 for Pounds to Kilograms\n5 for Inches to Meters\n");
    printf("\n");
    printf("Choice your conversions : ");
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        printf("Kilometers to Miles\nKilometers : ");
        scanf("%f", &i);    o = km_mi(i);
        printf("Miles : %.2f\n", o);
        break;
    
    case 2:
        printf("Inches to Foot\nInches : ");
        scanf("%f", &i);    o = in_ft(i);
        printf("Foot : %.2f\n", o);
        break;
        
    case 3:
        printf("Centimeters to Inches\nCentimeters : ");
        scanf("%f", &i);    o = cm_in(i);
        printf("Inches : %.2f\n", o);
        break;
        
    case 4:
        printf("Pounds to Kilograms\nPounds : ");
        scanf("%f", &i);    o = lb_kg(i);
        printf("Kilograms : %.2f\n", o);
        break;
        
    case 5:
        printf("Inches to Meters\nInches : ");
        scanf("%f", &i);    o = in_m(i);
        printf("Meters : %.2f\n", o);
        break;

    default:
        printf("Invalid Choice\n");
        break;
    }
    printf("\n");
    return 0;
}