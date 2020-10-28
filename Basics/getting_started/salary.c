/*Your basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate 
his gross salary. 
*/

#include<stdio.h>
#include<conio.h>

int main(){
    float basic_salary,gross_salary;//created input and output value
    
    printf("#####################");
    printf("\nEnter Your Salary\n=>");//got user input

    scanf("%f",&basic_salary);//scan & initilize value to basic_salary

    gross_salary=((.4*basic_salary)+(.2*basic_salary)+basic_salary);//formula to satisfy all the condition

    printf("Your Gross Salary Is %.2f\n",gross_salary);//Output to the user
    printf("\n#####################");
    return 0;
}