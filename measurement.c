#include "stdio.h"
#include "rates.h"
#include "stdbool.h"

#define to(a, b) (a * b)
#define from(a, b) (a / b)
#define celtofah(a) ((a + 32 ) * 9 / 5)
#define fahtocel(a) ((a - 32) * 5/9)
#define fahtokel(a) ((a + 459.67) * 5/9)
#define keltofah(a) ((a - 459.67) * 9/5)
#define keltocel(a) (a - 273.15)
#define celtokel(a) (a + 273.15)

void kelvinmenu(){
    bool exit = false;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tKELVIN\t\t\t*\n");
        printf("*\t\t1. kelvin - fahreiheit\t*\n");
        printf("*\t\t2. kelvin - celcius\t*\n");
        printf("*\t\t3. fahreinheit - kelvin\t*\n");
        printf("*\t\t4. celcius - kelvin\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d",&sel);
        float temp;
        if(sel == 0){
            exit = true;
            printf("\n");
            break;
        }printf(">>enter the temperature value\n>>");
        scanf("%f", &temp);
        switch (sel){
        case 1:
            printf("%.4fF", keltofah(temp));
            break;
        case 2:
            printf("%.4fC", keltocel(temp));
            break;
        case 3:
            printf("%.4fK", fahtokel(temp));
            break;
        case 4:
            printf("%.4fK", celtokel(temp));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void celciusmenu(){
    bool exit = false;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tCELCIUS\t\t\t*\n");
        printf("*\t\t1. celcius - fahreiheit\t*\n");
        printf("*\t\t2. celcius - kelvin\t*\n");
        printf("*\t\t3. fahreinheit - celcius*\n");
        printf("*\t\t4. kelvin - celcius\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d",&sel);
        float temp;
        if(sel == 0){
            exit = true;
            printf("\n");
            break;
        }printf(">>enter the temperature value\n>>");
        scanf("%f", &temp);
        switch (sel){
        case 1:
            printf("%.4fF", celtofah(temp));
            break;
        case 2:
            printf("%.4fK", celtokel(temp));
            break;
        case 3:
            printf("%.4fC", fahtocel(temp));
            break;
        case 4:
            printf("%.4fC", keltocel(temp));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void fahreinheitmenu(){
    bool exit = false;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tFAHREINHEIT\t\t*\n");
        printf("*\t\t1. celcius - fahreiheit\t*\n");
        printf("*\t\t2. kelvin - fahreiheit\t*\n");
        printf("*\t\t3. fahreinheit - celcius*\n");
        printf("*\t\t4. fahreinheit - kelvin\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d",&sel);
        float temp;
        if(sel == 0){
            exit = true;
            printf("\n");
            break;
        }printf(">>enter the temperature value\n>>");
        scanf("%f", &temp);
        switch (sel){
        case 1:
            printf("%.4fF", celtofah(temp));
            break;
        case 2:
            printf("%.4fF", keltofah(temp));
            break;
        case 3:
            printf("%.4fC", fahtocel(temp));
            break;
        case 4:
            printf("%.4fK", fahtokel(temp));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void metermenu(){
    bool exit = false;
    float length;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tMETER\t\t\t*\n");
        printf("*\t\t1. centimeter- meter\t*\n");
        printf("*\t\t2. kilometer - meter\t*\n");
        printf("*\t\t3. inches - meter\t*\n");
        printf("*\t\t4. miles - meter\t*\n");
        printf("*\t\t5. meter - centimeter\t*\n");
        printf("*\t\t6. meter - kilometer\t*\n");
        printf("*\t\t7. meter - inches\t*\n");
        printf("*\t\t8. meter - miles\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d",&sel);
        if(sel == 0){
            exit = true;
            printf("\n");
            break;
        }printf(">>enter the length\n>>");
        scanf("%f", &length);
        switch (sel){
        case 1:
            printf("%.4fm", from(length, 100));
            break;
        case 2:
            printf("%.4fm", to(length, 1000));
            break;
        case 3:
            printf("%.4fm", to(length, 0.0254));
            break;
        case 4:
            printf("%.4fm", to(length, 1609.344));
            break;
        case 5:
            printf("%.4fcm", to(length, 100));
            break;
        case 6:
            printf("%.4fkm", from(length, 1000));
            break;
        case 7:
            printf("%.4finches", from(length, 0.0254));
            break;
        case 8:
            printf("%.4fmiles", from(length, 1609.344));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void centimetermenu(){
    bool exit = false;
    float length;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tCENTI METER\t\t*\n");
        printf("*\t1. meter- centimeter\t\t*\n");
        printf("*\t2. kilometer - centimeter\t*\n");
        printf("*\t3. inches - centimeter\t\t*\n");
        printf("*\t4. miles - centimeter\t\t*\n");
        printf("*\t5. centimeter - meter\t\t*\n");
        printf("*\t6. centimeter - kilometer\t*\n");
        printf("*\t7. centimeter - inches\t\t*\n");
        printf("*\t8. centimeter - miles\t\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        int sel;
        printf(">>");
        scanf("%d",&sel);
        if(sel == 0){
            exit = true;
            printf("\n");
            break;
        }printf(">>enter the length\n>>");
        scanf("%f", &length);
        switch (sel){
        case 1:
            printf("%.4fcm", to(length, 100));
            break;
        case 2:
            printf("%.4fcm", to(length, 100000));
            break;
        case 3:
            printf("%.4fcm", to(length, 2.54));
            break;
        case 4:
            printf("%.4fcm", to(length, 160934.4));
            break;
        case 5:
            printf("%.4fm", from(length, 100));
            break;
        case 6:
            printf("%.4fkm", from(length, 100000));
            break;
        case 7:
            printf("%.4finches", from(length, 2.54));
            break;
        case 8:
            printf("%.4fmiles", from(length, 160934.4));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void kilometermenu(){
    bool exit = false;
    float length;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\tKILO METER\t\t\t*\n");
        printf("*\t1. centimeter- kilometer\t*\n");
        printf("*\t2. meter - kilometer\t\t*\n");
        printf("*\t\t3. inches - kilometer\t\t*\n");
        printf("*\t\t4. miles - kilometer\t\t*\n");
        printf("*\t5. kilometer - centimeter\t*\n");
        printf("*\t6. kilometer - meter\t\t*\n");
        printf("*\t7. kilometer - inches\t\t*\n");
        printf("*\t8. kilometer - miles\t\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n>>");
        int sel;
        scanf("%d",&sel);
        if(sel == 0){
            exit = true;
            printf("\n");
            break;
        }printf(">>enter the length\n>>");
        scanf("%f", &length);
        switch (sel){
        case 1:
            printf("%.4fkm", from(length, 100000));
            break;
        case 2:
            printf("%.4fkm", from(length, 1000));
            break;
        case 3:
            printf("%.4fkm", to(length, 0.0000254));
            break;
        case 4:
            printf("%.4fkm", to(length, 1.609344));
            break;
        case 5:
            printf("%.4fcm", to(length, 100000));
            break;
        case 6:
            printf("%.4fm", to(length, 1000));
            break;
        case 7:
            printf("%.4finches", from(length, 0.0000254));
            break;
        case 8:
            printf("%.4fmiles", from(length, 1.609344));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void milesmenu(){
    bool exit = false;
    float length;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tMILES\t\t\t*\n");
        printf("*\t\t1. centimeter - miles\t*\n");
        printf("*\t\t2. kilometer - miles\t*\n");
        printf("*\t\t3. inches - miles\t*\n");
        printf("*\t\t4. meter - miles\t*\n");
        printf("*\t\t5. miles - centimeter\t*\n");
        printf("*\t\t6. miles - kilometer\t*\n");
        printf("*\t\t7. miles - inches\t*\n");
        printf("*\t\t8. miles - meter\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n>>");
        int sel;
        scanf("%d",&sel);
        if(sel == 0){
            exit = true;
            printf("\n");
            break;
        }printf(">>enter the length\n>>");
        scanf("%f", &length);
        switch (sel){
        case 1:
            printf("%.4fmiles", from(length, 160934.4));
            break;
        case 2:
            printf("%.4fmiles", from(length, 1.609344));
            break;
        case 3:
            printf("%.4fmiles", from(length, 63690));
            break;
        case 4:
            printf("%.4fmiles", from(length, 1609.344));
            break;
        case 5:
            printf("%.4fcm", to(length, 160934.4));
            break;
        case 6:
            printf("%.4fkm", to(length, 1.609344));
            break;
        case 7:
            printf("%.4finches", to(length, 63690));
            break;
        case 8:
            printf("%.4fm", to(length, 1609.344));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void inchesmenu(){
    bool exit = false;
    float length;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tINCHES\t\t\t*\n");
        printf("*\t\t1. centimeter - inches\t*\n");
        printf("*\t\t2. kilometer - inches\t*\n");
        printf("*\t\t3. meter - inches\t*\n");
        printf("*\t\t4. miles - inches\t*\n");
        printf("*\t\t5. inches - centimeter\t*\n");
        printf("*\t\t6. inches - kilometer\t*\n");
        printf("*\t\t7. inches - meter\t*\n");
        printf("*\t\t8. inches - miles\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n>>");
        int sel;
        scanf("%d",&sel);
        if(sel == 0){
            exit = true;
            printf("\n");
            break;
        }printf(">>enter the length\n>>");
        scanf("%f", &length);
        switch (sel){
        case 1:
            printf("%.4finches", from(length, 2.54));
            break;
        case 2:
            printf("%.4finches", from(length, 0.0000254));
            break;
        case 3:
            printf("%.4finches", from(length, 0.0254));
            break;
        case 4:
            printf("%.4finches", to(length, 63690));
            break;
        case 5:
            printf("%.4fcm", to(length, 2.54));
            break;
        case 6:
            printf("%.4fkm", to(length, 0.0000254));
            break;
        case 7:
            printf("%.4fm", to(length, 0.0254));
            break;
        case 8:
            printf("%.4fmiles", from(length, 63690));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}
