/*
The distance between two cities (in Km) is input through the keyboard. 
Write a program to convert and print this distance in meterss, feet, inches and 
Centimeters.
*/
#include<stdio.h>
#include<conio.h>
void main(){
    float distance_km, distance_meter, distance_feet, distance_inch, distance_centimeters;
    
    printf("Enter The Distance Between Two Cities In Kilo Meter\n");//Getting User Input
    scanf("%f",&distance_km);//Assign the value to distance_km

    distance_meter = distance_km * 1000;//Converting KM to Meter
    distance_feet = distance_km * 3280.84;//Converting KM to Feet
    distance_inch = distance_km * 39370.1;//Converting KM to Inch
    distance_centimeters = distance_km * 100000;//Converting KM to Centimeters

    printf("Converting Value From Km To Meter Is \n=%.2f",distance_meter);
	printf("Meter\n");
	
	printf("\nConverting Value From Km To Feet Is \n=%.2f",distance_feet);
	printf("Feet\n\n");
	
	printf("Converting Value From Km To Inch Is \n=%.2f",distance_inch);
	printf("Inch\n\n");
	
	printf("Converting Value From Km To Centimeter Is \n=%.2f",distance_centimeters);
	printf("Centimeter\n\n");
	
    getch();
}
