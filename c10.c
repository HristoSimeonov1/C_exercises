// 16.	Иван е програмист в американска компания и работи от вкъщи средно N дни в месеца като изкарва средно по M долара на ден.
// В края на годината Иван получава бонус, който е равен на 2.5 месечни заплати. От спечеленото през годината му се удържат 25% данъци.
// Напишете програма, която да пресмята, колко е чистата средна печалба на Иван на ден в лева, тъй като той харчи изкараното в България. 
// Приема се, че в годината има точно 365 дни. Курсът на долара спрямо лева ще се чете от конзолата.

#include <stdio.h>

int main(){

    float N, M, rate;

    printf("Enter N and M: \n");
    scanf("%f %f", &N, &M);

    printf("Enter dollar rate: \n");
    scanf("%f", &rate);

    float monthlySalary = N * M;
    float yearlySalary = monthlySalary * 12;

    float bonus = 2.5 * monthlySalary;

    float total = yearlySalary + bonus;

    float tax = total * 0.25;

    float net = total - tax;

    float averagePerDay = net / 365.0;

    float leva = averagePerDay * rate;

    printf("Average daily profit in leva: %.2f\n", leva);

    return 0;
}
