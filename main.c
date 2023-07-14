#include "stdio.h"
#include "rates.h"
#include "stdbool.h"
#include "stdlib.h"

void currencyExchange();
void lengthExchange();
void temperatureExchange();
void volumeExchange();
void weightExchange();

int main(){
    bool exit = false;
    printf("*****************************************\n");
    printf("*         UNIT CONVERTER APP            *\n");
    printf("*****************************************\n\n");
    while(!exit){
        printf("*****************************************\n");
        printf("*\t\tMAIN MENU\t\t*\n");
        printf("*\t\t1. Currency\t\t*\n");
        printf("*\t\t2. Length\t\t*\n");
        printf("*\t\t3. Volume\t\t*\n");
        printf("*\t\t4. Weight\t\t*\n");
        printf("*\t\t5. Temperature\t\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        int ans;
        printf(">>");
        scanf("%d", &ans);
        if(ans == 0)
            exit = true;
        else if(ans == 1)
            currencyExchange();
        else if(ans == 2)
            lengthExchange();
        else if(ans == 3)
            volumeExchange();
        else if(ans == 4)
            weightExchange();
        else if(ans == 5)
            temperatureExchange();
        else
            printf("\n>>!!! The input you entered is invalid!!!.\n  !!!! Try again !!!\n\n");
    }
    printf("\n*****************************************\n");
    printf("*         THANKS FOR USING THE APP      *\n");
    printf("*****************************************\n");
    return 0;
}

/*
 * the currency menu
 * this allows the user to enter the currency you choose
 * */
void currencyExchange(){
    bool end = false;
    while(!end){
        printf("\n*****************************************\n");
        printf("*\t\tCURRENCY\t\t*\n");
        printf("*\t\t1. U.S. Dollar\t\t*\n"); // menu for dollar related rates
        printf("*\t\t2. KEN Shilling\t\t*\n"); // menu for kenya shilling rates
        printf("*\t\t3. CAN Dollar\t\t*\n"); // menu for canadian dollar rates
        printf("*\t\t4. CHIN Yuan\t\t*\n"); // menu for chinese yuan rates
        printf("*\t\t5. EURO\t\t\t*\n"); // menu for euro rates
        printf("*\t\t6. STG Pound\t\t*\n"); // menu for sterling pound rates
        printf("*\t\t7. SA Rand\t\t*\n"); // menu for south african rand
        printf("*\t\t8. IND Rupee\t\t*\n"); // menu for indian rupee
        printf("*\t\t9. AUS Dollar\t\t*\n"); // menu for australian dollar
        printf("*\t\t10. Saud Riyadh\t\t*\n"); // menu for saudi riyadh
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d", &sel);
        switch(sel){
            case 0:
                end = true;
                printf("\n");
                break;
            case 1:
                dollarmenu();
                break;
            case 2:
                kenmenu();
                break;
            case 3:
                canmenu();
                break;
            case 4:
                chinmenu();
                break;
            case 5:
                euromenu();
                break;
            case 6:
                poundmenu();
                break;
            case 7:
                randmenu();
                break;
            case 8:
                rupeemenu();
                break;
            case 9:
                ausmenu();
                break;
            case 10:
                riyadhmenu();
                break;
            default:
                printf(">>!!! The value entered is invalid !!!\n  !!! please try again !!!");
        }
    }
}

/*
* the length menu
* this allows the user to enter the type of length
* */
void lengthExchange(){
    bool end = false;
    while (!end){
        printf("\n*****************************************\n");
        printf("*\t\tLENGTH\t\t\t*\n");
        printf("*\t\t1. METER\t\t*\n");
        printf("*\t\t2. CENTIMETER\t\t*\n");
        printf("*\t\t3. KILOMETER\t\t*\n");
        printf("*\t\t4. INCHES\t\t*\n");
        printf("*\t\t5. MILES\t\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d", &sel);
        if (sel == 0){
            end = true;
            printf("\n");
            break;
        }
        switch (sel){
        case 1:
            metermenu();
            break;
        case 2:
            centimetermenu();
            break;
        case 3:
            kilometermenu();
            break;
        case 4:
            inchesmenu();
            break;
        case 5:
            milesmenu();
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }  
}

/*
 * the temperature menu
 * this allows the user to enter the temperature you choose
 * */
void temperatureExchange(){
    bool end = false;
    while (!end){
        printf("\n*****************************************\n");
        printf("*\t\tTEMPERATURE\t\t *\n");
        printf("*\t\t1. KELVIN\t\t*\n");
        printf("*\t\t2. CELCIUS\t\t*\n");
        printf("*\t\t3. FAHREINHEIT\t\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d", &sel);
        if (sel == 0){
            end = true;
            printf("\n");
            break;
        }
        switch (sel){
        case 1:
            kelvinmenu();
            break;
        case 2:
            celciusmenu();
            break;
        case 3:
            fahreinheitmenu();
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

/*
 * the volume menu
 * this allows the user to enter the volume you choose
 * */
void volumeExchange(){
    bool end = false;
    while (!end){
        printf("\n*****************************************\n");
        printf("*\t\tTEMPERATURE\t\t *\n");
        printf("*\t\t1. CUBIC METRE\t\t*\n");
        printf("*\t\t2. DECILITRE\t\t*\n");
        printf("*\t\t3. LITRE\t\t*\n");
        printf("*\t\t4. GALLON\t\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d", &sel);
        if (sel == 0){
            end = true;
            printf("\n");
            break;
        }
        switch (sel){
        case 1:
            cubicmenu();
            break;
        case 2:
            decimenu();
            break;
        case 3:
            litremenu();
            break;
        case 4:
            gallonmenu();
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

/*
 * the weight menu
 * this allows the user to enter the weight you choose
 * */
void weightExchange(){
    bool end = false;
    while (!end){
        printf("\n*****************************************\n");
        printf("*\t\tWEIGHT\t\t *\n");
        printf("*\t\t1. TONNE\t\t*\n");
        printf("*\t\t2. KILOGRAM\t\t*\n");
        printf("*\t\t3. GRAM\t\t*\n");
        printf("*\t\t4. POUND\t\t\t*\n");
        printf("*\t\t0. EXIT\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d", &sel);
        if (sel == 0){
            end = true;
            printf("\n");
            break;
        }
        switch (sel){
        case 1:
            tonnemenu();
            break;
        case 2:
            kilogrammenu();
            break;
        case 3:
            grammenu();
            break;
        case 4:
            lbmenu();
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}