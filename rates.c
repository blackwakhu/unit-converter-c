#include "stdio.h"
#include "rates.h"
#include "stdbool.h"
#include "stdlib.h"

float myexchange(float money, bool to, float rates){
    if (to) // convert true means you are selling
        return money * rates;
    return money / rates;
}

float currency(float money, char type, bool convert){
    float change;
    switch(type){
            // convert in dollars
        case 'd':
            change = myexchange(money, convert, 117.7912);
            break;
            // convert in euros
        case 'e':
            change = myexchange(money, convert, 124.6076);
            break;
            // convert in pounds
        case 'p':
            change = myexchange(money, convert, 144.3647);
            break;
            // conver in rand
        case 'r':
            change = myexchange(money, convert, 7.3748);
            break;
            //convert in canadian dollar
        case 'c':
            change = myexchange(money, convert, 91.7627);
            break;
            //convert to rupee
        case 'i':
            change = myexchange(money, convert, 1.4921);
            break;
            //convert in yuan
        case 'y':
            change = myexchange(money, convert, 17.5909);
            break;
            //convert in saudi riyal
        case 's':
            change = myexchange(money, convert, 31.3850);
            break;
            //convert in australian dollar
        case 'a':
            change = myexchange(money, convert, 81.7824);
            break;
        default:
            change = 0;
    }
    return change;
}

void dollarmenu(){
    bool exit = false;
    float money, change;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tU.S. DOLLAR\t\t*\n");
        printf("*\t1. U.S Dollar - KEN Shilling\t*\n");
        printf("*\t2. U.S Dollar - CAN Dollar\t*\n");
        printf("*\t3. U.S Dollar - CHIN Yuan\t*\n");
        printf("*\t4. U.S Dollar - EURO\t\t*\n");
        printf("*\t5. U.S Dollar - STG Pound\t*\n");
        printf("*\t6. U.S Dollar - SA Rand\t\t*\n");
        printf("*\t7. U.S Dollar - IND Rupee\t*\n");
        printf("*\t8. U.S Dollar - AUS Dollar\t*\n");
        printf("*\t9. U.S Dollar - Saud Riyal\t*\n");
        printf("*\t10. KEN Shilling - U.S Dollar\t*\n");
        printf("*\t11. CAN Dollar - U.S Dollar\t*\n");
        printf("*\t12. CHIN Yuan - U.S Dollar\t*\n");
        printf("*\t13. EURO - U.S Dollar\t\t*\n");
        printf("*\t14. STG Pound - U.S Dollar\t*\n");
        printf("*\t15. SA Rand - U.S Dollar\t*\n");
        printf("*\t16. IND Rupee - U.S Dollar\t*\n");
        printf("*\t17. AUS Dollar - U.S Dollar\t*\n");
        printf("*\t18. Saud Riyal - U.S Dollar\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");

        printf(">>");
        int sel;
        scanf("%d", &sel);
        if (sel == 0){
            exit = true;
            printf("\n");
            break;
        }
        printf(">>enter the amount\n>>");
        scanf("%f", &money);
        switch(sel){
            case 1:
                printf(">>%.2f kenyan shillings", currency(money, 'd', true));
                break;
            case 2:
                change = currency(money, 'd', true);
                printf(">>%.2f canadian dollar", currency(change, 'c', false));
                break;
            case 3:
                change = currency(money, 'd', true);
                printf(">>%.2f chinese yuan", currency(change, 'y', false));
                break;
            case 4:
                change = currency(money, 'd', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 5:
                change = currency(money, 'd', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 6:
                change = currency(money, 'd', true);
                printf(">>%.2f sa rand", currency(change, 'r', false));
                break;
            case 7:
                change = currency(money, 'd', true);
                printf(">>%.2f indian rupee", currency(change, 'i', false));
                break;
            case 8:
                change = currency(money, 'd', true);
                printf(">>%.2f australian dollars", currency(change, 'a', false));
                break;
            case 9:
                change = currency(money, 'd', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 10:
                printf(">>%.2f us dollars", currency(money, 'd', false));
                break;
            case 11:
                change = currency(money, 'c', true);
                printf(">>%.2f us dollars", currency(change, 'd', false));
                break;
            case 12:
                change = currency(money, 'y', true);
                printf(">>%.2f us dollars", currency(change, 'd', false));
                break;
            case 13:
                change = currency(money, 'e', true);
                printf(">>%.2f us dollars", currency(change, 'd', false));
                break;
            case 14:
                change = currency(money, 'p', true);
                printf(">>%.2f us dollars", currency(change, 'd', false));
                break;
            case 15:
                change = currency(money, 'r', true);
                printf(">>%.2f us dollars", currency(change, 'd', false));
                break;
            case 16:
                change = currency(money, 'i', true);
                printf(">>%.2f us dollars", currency(change, 'd', false));
                break;
            case 17:
                change = currency(money, 'a', true);
                printf(">>%.2f us dollars", currency(change, 'd', false));
                break;
            case 18:
                change = currency(money, 's', true);
                printf(">>%.2f us dollars", currency(change, 'd', false));
                break;
            default:
                printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void kenmenu(){
    bool exit;
    float money;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tKENYA SHILLING\t\t*\n");
        printf("*\t1. KEN Shilling - U.S Dollar\t*\n");
        printf("*\t2. KEN Shilling - CAN Dollar\t*\n");
        printf("*\t3. KEN Shilling - CHIN Yuan\t*\n");
        printf("*\t4. KEN Shilling - EURO\t\t*\n");
        printf("*\t5. KEN Shilling - STG Pound\t*\n");
        printf("*\t6. KEN Shilling - SA Rand\t*\n");
        printf("*\t7. KEN Shilling - IND Rupee\t*\n");
        printf("*\t8. KEN Shilling - AUS Dollar\t*\n");
        printf("*\t9. KEN Shilling - Saud Riyal\t*\n");
        printf("*\t10. U.S Dollar - KEN Shilling\t*\n");
        printf("*\t11. CAN Dollar - KEN Shilling\t*\n");
        printf("*\t12. CHIN Yuan - KEN Shilling\t*\n");
        printf("*\t13. EURO - KEN Shilling\t\t*\n");
        printf("*\t14. STG Pound - KEN Shilling\t*\n");
        printf("*\t15. SA Rand - KEN Shilling\t*\n");
        printf("*\t16. IND Rupee - KEN Shilling\t*\n");
        printf("*\t17. AUS Dollar - KEN Shilling\t*\n");
        printf("*\t18. Saud Riyal - KEN Shilling\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d",&sel);
        if(sel == 0){
            exit = true;
            printf("\n");
            break;
        }
        printf(">>enter the amount\n>>");
        scanf("%f",&money);
        printf(">>");
        switch (sel){
            case 1:
                printf("%.2f us dollars\n", currency(money, 'd', false));   
                break;
            case 2:
                printf("%.2f canadian dollars\n", currency(money, 'c', false));
                break;
            case 3:
                printf("%.2f chinese yuan\n", currency(money, 'y', false));
                break;
            case 4:
                printf("%.2f euro\n", currency(money, 'e', false));
                break;
            case 5:
                printf("%.2f pounds\n", currency(money, 'p', false));
                break;
            case 6:
                printf("%.2f rand\n", currency(money, 'r', false));
                break;
            case 7:
                printf("%.2f rupee\n", currency(money, 'i', false));
                break;
            case 8:
                printf("%.2f australian dollar\n", currency(money, 'a', false));
                break;
            case 9:
                printf("%.2f riyadh\n", currency(money, 's', false));
                break;
            case 10:
                printf("%.2f kenya shillings\n", currency(money, 'd', true));   
                break;
            case 11:
                printf("%.2f kenya shillings\n", currency(money, 'c', true));
                break;
            case 12:
                printf("%.2f kenya shillings\n", currency(money, 'y', true));
                break;
            case 13:
                printf("%.2f kenya shillings\n", currency(money, 'e', true));
                break;
            case 14:
                printf("%.2f kenya shillings\n", currency(money, 'p', true));
                break;
            case 15:
                printf("%.2f kenya shillings\n", currency(money, 'r', true));
                break;
            case 16:
                printf("%.2f kenya shillings\n", currency(money, 'i', true));
                break;
            case 17:
                printf("%.2f kenya shillings\n", currency(money, 'a', true));
                break;
            case 18:
                printf("%.2f kenya shillings\n", currency(money, 's', true));
                break;
            default:
                printf("!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void canmenu(){
    bool exit;
    float money, change;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tCANADIAN DOLLAR\t\t*\n");
        printf("*\t1. CAN Dollar - KEN Shilling\t*\n");
        printf("*\t2. CAN Dollar - U.S Dollar\t*\n");
        printf("*\t3. CAN Dollar - CHIN Yuan\t*\n");
        printf("*\t4. CAN Dollar - EURO\t\t*\n");
        printf("*\t5. CAN Dollar - STG Pound\t*\n");
        printf("*\t6. CAN Dollar - SA Rand\t\t*\n");
        printf("*\t7. CAN Dollar - IND Rupee\t*\n");
        printf("*\t8. CAN Dollar - AUS Dollar\t*\n");
        printf("*\t9. CAN Dollar - Saud Riyal\t*\n");
        printf("*\t10. KEN Shilling - CAN Dollar\t*\n");
        printf("*\t11. U.S Dollar - CAN Dollar\t*\n");
        printf("*\t12. CHIN Yuan - CAN Dollar\t*\n");
        printf("*\t13. EURO - CAN Dollar\t\t*\n");
        printf("*\t14. STG Pound - CAN Dollar\t*\n");
        printf("*\t15. SA Rand - CAN Dollar\t*\n");
        printf("*\t16. IND Rupee - CAN Dollar\t*\n");
        printf("*\t17. AUS Dollar - CAN Dollar\t*\n");
        printf("*\t18. Saud Riyal - CAN Dollar\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d", &sel);
        if (sel == 0){
            exit = true;
            printf("\n");
            break;
        }
        printf(">>enter the amount\n>>");
        scanf("%f", &money);
        switch(sel){
            case 1:
                printf(">>%.2f kenyan shillings", currency(money, 'c', true));
                break;
            case 2:
                change = currency(money, 'c', true);
                printf(">>%.2f us dollar", currency(change, 'd', false));
                break;
            case 3:
                change = currency(money, 'c', true);
                printf(">>%.2f chinese yuan", currency(change, 'y', false));
                break;
            case 4:
                change = currency(money, 'c', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 5:
                change = currency(money, 'c', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 6:
                change = currency(money, 'c', true);
                printf(">>%.2f sa rand", currency(change, 'r', false));
                break;
            case 7:
                change = currency(money, 'c', true);
                printf(">>%.2f indian rupee", currency(change, 'i', false));
                break;
            case 8:
                change = currency(money, 'c', true);
                printf(">>%.2f australian dollars", currency(change, 'a', false));
                break;
            case 9:
                change = currency(money, 'c', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 10:
                printf(">>%.2f canadian dollars", currency(money, 'c', false));
                break;
            case 11:
                change = currency(money, 'd', true);
                printf(">>%.2f canadian dollars", currency(change, 'c', false));
                break;
            case 12:
                change = currency(money, 'y', true);
                printf(">>%.2f canadian dollars", currency(change, 'c', false));
                break;
            case 13:
                change = currency(money, 'e', true);
                printf(">>%.2f canadian dollars", currency(change, 'c', false));
                break;
            case 14:
                change = currency(money, 'p', true);
                printf(">>%.2f canadian dollars", currency(change, 'c', false));
                break;
            case 15:
                change = currency(money, 'r', true);
                printf(">>%.2f canadian dollars", currency(change, 'c', false));
                break;
            case 16:
                change = currency(money, 'i', true);
                printf(">>%.2f canadian dollars", currency(change, 'c', false));
                break;
            case 17:
                change = currency(money, 'a', true);
                printf(">>%.2f canadian dollars", currency(change, 'c', false));
                break;
            case 18:
                change = currency(money, 's', true);
                printf(">>%.2f canadian dollars", currency(change, 'c', false));
                break;
            default:
                printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void chinmenu(){
    bool exit;
    float money, change;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tCHINESE YUAN\t\t*\n");
        printf("*\t1. CHIN Yuan - KEN Shilling\t*\n");
        printf("*\t2. CHIN Yuan - U.S Dollar\t*\n");
        printf("*\t3. CHIN Yuan - CAN Dollar\t*\n");
        printf("*\t4. CHIN Yuan - EURO\t\t*\n");
        printf("*\t5. CHIN Yuan - STG Pound\t*\n");
        printf("*\t6. CHIN Yuan - SA Rand\t\t*\n");
        printf("*\t7. CHIN Yuan - IND Rupee\t*\n");
        printf("*\t8. CHIN Yuan - AUS Dollar\t*\n");
        printf("*\t9. CHIN Yuan - Saud Riyal\t*\n");
        printf("*\t10. KEN Shilling - CHIN Yuan\t*\n");
        printf("*\t11. U.S Dollar - CHIN Yuan\t*\n");
        printf("*\t12. CAN Dollar - CHIN Yuan\t*\n");
        printf("*\t13. EURO - CHIN Yuan\t\t*\n");
        printf("*\t14. STG Pound - CHIN Yuan\t*\n");
        printf("*\t15. SA Rand - CHIN Yuan\t\t*\n");
        printf("*\t16. IND Rupee - CHIN Yuan\t*\n");
        printf("*\t17. AUS Dollar - CHIN Yuan\t*\n");
        printf("*\t18. Saud Riyal - CHIN Yuan\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d",&sel);
        if(sel == 0){
            exit = true;
            printf("\n");
            break;
        }
        printf(">>enter the amount\n>>");
        scanf("%f", &money);
        switch(sel){
            case 1:
                printf(">>%.2f kenyan shillings", currency(money, 'y', true));
                break;
            case 2:
                change = currency(money, 'y', true);
                printf(">>%.2f us dollar", currency(change, 'd', false));
                break;
            case 3:
                change = currency(money, 'y', true);
                printf(">>%.2f canadian dollar", currency(change, 'c', false));
                break;
            case 4:
                change = currency(money, 'y', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 5:
                change = currency(money, 'y', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 6:
                change = currency(money, 'y', true);
                printf(">>%.2f sa rand", currency(change, 'r', false));
                break;
            case 7:
                change = currency(money, 'y', true);
                printf(">>%.2f indian rupee", currency(change, 'i', false));
                break;
            case 8:
                change = currency(money, 'y', true);
                printf(">>%.2f australian dollars", currency(change, 'a', false));
                break;
            case 9:
                change = currency(money, 'y', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 10:
                printf(">>%.2f chinese yuan", currency(money, 'y', false));
                break;
            case 11:
                change = currency(money, 'd', true);
                printf(">>%.2f chinese yuan", currency(change, 'y', false));
                break;
            case 12:
                change = currency(money, 'c', true);
                printf(">>%.2f chinese yuan", currency(change, 'y', false));
                break;
            case 13:
                change = currency(money, 'e', true);
                printf(">>%.2f chinese yuan", currency(change, 'y', false));
                break;
            case 14:
                change = currency(money, 'p', true);
                printf(">>%.2f chinese yuan", currency(change, 'y', false));
                break;
            case 15:
                change = currency(money, 'r', true);
                printf(">>%.2f chinese yuan", currency(change, 'y', false));
                break;
            case 16:
                change = currency(money, 'i', true);
                printf(">>%.2f chinese yuan", currency(change, 'y', false));
                break;
            case 17:
                change = currency(money, 'a', true);
                printf(">>%.2f chinese yuan", currency(change, 'y', false));
                break;
            case 18:
                change = currency(money, 's', true);
                printf(">>%.2f chinese yuan", currency(change, 'y', false));
                break;
            default:
                printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void euromenu(){
    bool exit;
    float money, change;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tEURO\t\t\t*\n");
        printf("*\t1. EURO - KEN Shilling\t\t*\n");
        printf("*\t2. EURO - U.S Dollar\t\t*\n");
        printf("*\t3. EURO - CAN Dollar\t\t*\n");
        printf("*\t4. EURO - CHIN Yuan\t\t*\n");
        printf("*\t5. EURO - STG Pound\t\t*\n");
        printf("*\t6. EURO - SA Rand\t\t*\n");
        printf("*\t7. EURO - IND Rupee\t\t*\n");
        printf("*\t8. EURO - AUS Dollar\t\t*\n");
        printf("*\t9. EURO - Saud Riyal\t\t*\n");
        printf("*\t10. KEN Shilling - EURO\t\t*\n");
        printf("*\t11. U.S Dollar - EURO\t\t*\n");
        printf("*\t12. CAN Dollar - EURO\t\t*\n");
        printf("*\t13. CHIN YUAN - EURO\t\t*\n");
        printf("*\t14. STG Pound - EURO\t\t*\n");
        printf("*\t15. SA Rand - EURO\t\t*\n");
        printf("*\t16. IND Rupee - EURO\t\t*\n");
        printf("*\t17. AUS Dollar - EURO\t\t*\n");
        printf("*\t18. Saud Riyal - EURO\t\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d", &sel);
        if (sel == 0){
            exit = true;
            printf("\n");
            break;
        }
        printf(">>enter the amount\n>>");
        scanf("%f", &money);
        switch(sel){
            case 1:
                printf(">>%.2f kenyan shillings", currency(money, 'e', true));
                break;
            case 2:
                change = currency(money, 'e', true);
                printf(">>%.2f us dollar", currency(change, 'd', false));
                break;
            case 3:
                change = currency(money, 'e', true);
                printf(">>%.2f canadian dollar", currency(change, 'c', false));
                break;
            case 4:
                change = currency(money, 'e', true);
                printf(">>%.2f chinese yuan", currency(change, 'y', false));
                break;
            case 5:
                change = currency(money, 'e', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 6:
                change = currency(money, 'e', true);
                printf(">>%.2f sa rand", currency(change, 'r', false));
                break;
            case 7:
                change = currency(money, 'e', true);
                printf(">>%.2f indian rupee", currency(change, 'i', false));
                break;
            case 8:
                change = currency(money, 'e', true);
                printf(">>%.2f australian dollars", currency(change, 'a', false));
                break;
            case 9:
                change = currency(money, 'e', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 10:
                printf(">>%.2f euro", currency(money, 'e', false));
                break;
            case 11:
                change = currency(money, 'd', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 12:
                change = currency(money, 'c', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 13:
                change = currency(money, 'y', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 14:
                change = currency(money, 'p', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 15:
                change = currency(money, 'r', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 16:
                change = currency(money, 'i', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 17:
                change = currency(money, 'a', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 18:
                change = currency(money, 's', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            default:
                printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void poundmenu(){
    bool exit;
    float money, change;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tSTERLING POUND\t\t*\n");
        printf("*\t1. STG POUND - KEN Shilling\t*\n");
        printf("*\t2. STG POUND - U.S Dollar\t*\n");
        printf("*\t3. STG POUND - CAN Dollar\t*\n");
        printf("*\t4. STG POUND - EURO\t\t*\n");
        printf("*\t5. STG POUND - CHIN Yuan\t*\n");
        printf("*\t6. STG POUND - SA Rand\t\t*\n");
        printf("*\t7. STG POUND - IND Rupee\t*\n");
        printf("*\t8. STG POUND - AUS Dollar\t*\n");
        printf("*\t9. STG POUND - Saud Riyal\t*\n");
        printf("*\t10. KEN Shilling - STG POUND\t*\n");
        printf("*\t11. U.S Dollar - STG POUND\t*\n");
        printf("*\t12. CAN Dollar - STG POUND\t*\n");
        printf("*\t13. EURO - STG POUND\t\t*\n");
        printf("*\t14. CHIN Yuan - STG POUND\t*\n");
        printf("*\t15. SA Rand - STG POUND\t\t*\n");
        printf("*\t16. IND Rupee - STG POUND\t*\n");
        printf("*\t17. AUS Dollar - STG POUND\t*\n");
        printf("*\t18. Saud Riyal - STG POUND\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d",&sel);
        if(sel == 0){
            exit = true;
            printf("\n");
            break;
        }printf(">>enter the amount\n>>");
        scanf("%f", &money);
        switch(sel){
            case 1:
                printf(">>%.2f kenyan shillings", currency(money, 'p', true));
                break;
            case 2:
                change = currency(money, 'p', true);
                printf(">>%.2f us dollar", currency(change, 'd', false));
                break;
            case 3:
                change = currency(money, 'p', true);
                printf(">>%.2f canadian dollar", currency(change, 'c', false));
                break;
            case 4:
                change = currency(money, 'p', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 5:
                change = currency(money, 'y', true);
                printf(">>%.2f chinese yuan", currency(change, 'p', false));
                break;
            case 6:
                change = currency(money, 'p', true);
                printf(">>%.2f sa rand", currency(change, 'r', false));
                break;
            case 7:
                change = currency(money, 'p', true);
                printf(">>%.2f indian rupee", currency(change, 'i', false));
                break;
            case 8:
                change = currency(money, 'p', true);
                printf(">>%.2f australian dollars", currency(change, 'a', false));
                break;
            case 9:
                change = currency(money, 'p', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 10:
                printf(">>%.2f sterling pound", currency(money, 'p', false));
                break;
            case 11:
                change = currency(money, 'd', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 12:
                change = currency(money, 'c', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 13:
                change = currency(money, 'e', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 14:
                change = currency(money, 'y', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 15:
                change = currency(money, 'r', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 16:
                change = currency(money, 'i', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 17:
                change = currency(money, 'a', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 18:
                change = currency(money, 's', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            default:
                printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void randmenu(){
    bool exit;
    float money, change;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tSA RAND\t\t\t*\n");
        printf("*\t1. SA Rand - KEN Shilling\t*\n");
        printf("*\t2. SA Rand - U.S Dollar\t\t*\n");
        printf("*\t3. SA Rand - CAN Dollar\t\t*\n");
        printf("*\t4. SA Rand - EURO\t\t*\n");
        printf("*\t5. SA Rand - CHIN Yuan\t\t*\n");
        printf("*\t6. SA Rand - SA Rand\t\t*\n");
        printf("*\t7. SA Rand - IND Rupee\t\t*\n");
        printf("*\t8. SA Rand - AUS Dollar\t\t*\n");
        printf("*\t9. SA Rand - Saud Riyal\t\t*\n");
        printf("*\t10. KEN Shilling - SA Rand\t*\n");
        printf("*\t11. U.S Dollar - SA Rand\t*\n");
        printf("*\t12. CAN Dollar - SA Rand\t*\n");
        printf("*\t13. EURO - SA Rand\t\t*\n");
        printf("*\t14. CHIN Yuan - SA Rand\t\t*\n");
        printf("*\t15. SA Rand - SA Rand\t\t*\n");
        printf("*\t16. IND Rupee - SA Rand\t\t*\n");
        printf("*\t17. AUS Dollar - SA Rand\t*\n");
        printf("*\t18. Saud Riyal - SA Rand\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d", &sel);
        if (sel == 0){
            exit = true;
            printf("\n");
            break;
        }
        printf(">>enter the amount\n>>");
        scanf("%f", &money);
        switch(sel){
            case 1:
                printf(">>%.2f kenyan shillings", currency(money, 'r', true));
                break;
            case 2:
                change = currency(money, 'r', true);
                printf(">>%.2f us dollar", currency(change, 'd', false));
                break;
            case 3:
                change = currency(money, 'r', true);
                printf(">>%.2f canadian dollar", currency(change, 'c', false));
                break;
            case 4:
                change = currency(money, 'r', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 5:
                change = currency(money, 'y', true);
                printf(">>%.2f chinese yuan", currency(change, 'r', false));
                break;
            case 6:
                change = currency(money, 'p', true);
                printf(">>%.2f sterling pound", currency(change, 'r', false));
                break;
            case 7:
                change = currency(money, 'r', true);
                printf(">>%.2f indian rupee", currency(change, 'i', false));
                break;
            case 8:
                change = currency(money, 'r', true);
                printf(">>%.2f australian dollars", currency(change, 'a', false));
                break;
            case 9:
                change = currency(money, 'r', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 10:
                printf(">>%.2f south african rand", currency(money, 'r', false));
                break;
            case 11:
                change = currency(money, 'd', true);
                printf(">>%.2f south african rand", currency(change, 'r', false));
                break;
            case 12:
                change = currency(money, 'c', true);
                printf(">>%.2f south african rand", currency(change, 'r', false));
                break;
            case 13:
                change = currency(money, 'e', true);
                printf(">>%.2f south african rand", currency(change, 'r', false));
                break;
            case 14:
                change = currency(money, 'y', true);
                printf(">>%.2f south african rand", currency(change, 'r', false));
                break;
            case 15:
                change = currency(money, 'p', true);
                printf(">>%.2f south african rand", currency(change, 'r', false));
                break;
            case 16:
                change = currency(money, 'i', true);
                printf(">>%.2f south african rand", currency(change, 'r', false));
                break;
            case 17:
                change = currency(money, 'a', true);
                printf(">>%.2f south african rand", currency(change, 'r', false));
                break;
            case 18:
                change = currency(money, 's', true);
                printf(">>%.2f south african rand", currency(change, 'r', false));
                break;
            default:
                printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void rupeemenu(){
    bool exit;
    float money, change;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tINDIAN RUPEE\t\t*\n");
        printf("*\t1. IND Rupee - KEN Shilling\t*\n");
        printf("*\t2. IND Rupee - U.S Dollar\t*\n");
        printf("*\t3. IND Rupee - CAN Dollar\t*\n");
        printf("*\t4. IND Rupee - EURO\t\t*\n");
        printf("*\t5. IND Rupee - CHIN Yuan\t*\n");
        printf("*\t6. IND Rupee - SA Rand\t\t*\n");
        printf("*\t7. IND Rupee - STG Pound\t*\n");
        printf("*\t8. IND Rupee - AUS Dollar\t*\n");
        printf("*\t9. IND Rupee - Saud Riyal\t*\n");
        printf("*\t10. KEN Shilling - IND Rupee\t*\n");
        printf("*\t11. U.S Dollar - IND Rupee\t*\n");
        printf("*\t12. CAN Dollar - IND Rupee\t*\n");
        printf("*\t13. EURO - IND Rupee\t\t*\n");
        printf("*\t14. CHIN Yuan - IND Rupee\t*\n");
        printf("*\t15. SA Rand - IND Rupee\t\t*\n");
        printf("*\t16. STG Pound - IND Rupee\t*\n");
        printf("*\t17. AUS Dollar - IND Rupee\t*\n");
        printf("*\t18. Saud Riyal - IND Rupee\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d",&sel);
        if(sel == 0){
            exit = true;
            printf("\n");
            break;
        }printf(">>enter the amount\n>>");
        scanf("%f", &money);
        switch(sel){
            case 1:
                printf(">>%.2f kenyan shillings", currency(money, 'i', true));
                break;
            case 2:
                change = currency(money, 'i', true);
                printf(">>%.2f us dollar", currency(change, 'd', false));
                break;
            case 3:
                change = currency(money, 'i', true);
                printf(">>%.2f canadian dollar", currency(change, 'c', false));
                break;
            case 4:
                change = currency(money, 'i', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 5:
                change = currency(money, 'y', true);
                printf(">>%.2f chinese yuan", currency(change, 'i', false));
                break;
            case 6:
                change = currency(money, 'i', true);
                printf(">>%.2f sa rand", currency(change, 'r', false));
                break;
            case 7:
                change = currency(money, 'i', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 8:
                change = currency(money, 'i', true);
                printf(">>%.2f australian dollars", currency(change, 'a', false));
                break;
            case 9:
                change = currency(money, 'i', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 10:
                printf(">>%.2f rupee", currency(money, 'i', false));
                break;
            case 11:
                change = currency(money, 'd', true);
                printf(">>%.2f rupee", currency(change, 'i', false));
                break;
            case 12:
                change = currency(money, 'c', true);
                printf(">>%.2f rupee", currency(change, 'i', false));
                break;
            case 13:
                change = currency(money, 'e', true);
                printf(">>%.2f rupee", currency(change, 'i', false));
                break;
            case 14:
                change = currency(money, 'y', true);
                printf(">>%.2f rupee", currency(change, 'i', false));
                break;
            case 15:
                change = currency(money, 'r', true);
                printf(">>%.2f rupee", currency(change, 'i', false));
                break;
            case 16:
                change = currency(money, 'p', true);
                printf(">>%.2f rupee", currency(change, 'i', false));
                break;
            case 17:
                change = currency(money, 'a', true);
                printf(">>%.2f rupee", currency(change, 'i', false));
                break;
            case 18:
                change = currency(money, 's', true);
                printf(">>%.2f rupee", currency(change, 'i', false));
                break;
            default:
                printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void ausmenu(){
    bool exit;
    float money, change;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tAUSTRALIAN DOLLAR\t*\n");
        printf("*\t1. AUS Dollar - KEN Shilling\t*\n");
        printf("*\t2. AUS Dollar - U.S Dollar\t*\n");
        printf("*\t3. AUS Dollar - CAN Dollar\t*\n");
        printf("*\t4. AUS Dollar - EURO\t\t*\n");
        printf("*\t5. AUS Dollar - CHIN Yuan\t*\n");
        printf("*\t6. AUS Dollar - SA Rand\t\t*\n");
        printf("*\t7. AUS Dollar - IND Rupee\t*\n");
        printf("*\t8. AUS Dollar - STG Pound\t*\n");
        printf("*\t9. AUS Dollar - Saud Riyal\t*\n");
        printf("*\t10. KEN Shilling - AUS Dollar\t*\n");
        printf("*\t11. U.S Dollar - AUS Dollar\t*\n");
        printf("*\t12. CAN Dollar - AUS Dollar\t*\n");
        printf("*\t13. EURO - AUS Dollar\t\t*\n");
        printf("*\t14. CHIN Yuan - AUS Dollar\t*\n");
        printf("*\t15. SA Rand - AUS Dollar\t*\n");
        printf("*\t16. IND Rupee - AUS Dollar\t*\n");
        printf("*\t17. STG Pound - AUS Dollar\t*\n");
        printf("*\t18. Saud Riyal - AUS Dollar\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d", &sel);
        if (sel == 0){
            exit = true;
            printf("\n");
            break;
        }printf(">>enter the amount\n>>");
        scanf("%f", &money);
        switch(sel){
            case 1:
                printf(">>%.2f kenyan shillings", currency(money, 'a', true));
                break;
            case 2:
                change = currency(money, 'a', true);
                printf(">>%.2f us dollar", currency(change, 'd', false));
                break;
            case 3:
                change = currency(money, 'a', true);
                printf(">>%.2f canadian dollar", currency(change, 'c', false));
                break;
            case 4:
                change = currency(money, 'a', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 5:
                change = currency(money, 'y', true);
                printf(">>%.2f chinese yuan", currency(change, 'a', false));
                break;
            case 6:
                change = currency(money, 'a', true);
                printf(">>%.2f sa rand", currency(change, 'r', false));
                break;
            case 7:
                change = currency(money, 'a', true);
                printf(">>%.2f indian rupee", currency(change, 'i', false));
                break;
            case 8:
                change = currency(money, 'a', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 9:
                change = currency(money, 'a', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 10:
                printf(">>%.2f australian dollar", currency(money, 'a', false));
                break;
            case 11:
                change = currency(money, 'd', true);
                printf(">>%.2f australian dollar", currency(change, 'a', false));
                break;
            case 12:
                change = currency(money, 'c', true);
                printf(">>%.2f australian dollar", currency(change, 'a', false));
                break;
            case 13:
                change = currency(money, 'e', true);
                printf(">>%.2f australian dollar", currency(change, 'a', false));
                break;
            case 14:
                change = currency(money, 'y', true);
                printf(">>%.2f australian dollar", currency(change, 'a', false));
                break;
            case 15:
                change = currency(money, 'r', true);
                printf(">>%.2f australian dollar", currency(change, 'a', false));
                break;
            case 16:
                change = currency(money, 'i', true);
                printf(">>%.2f australian dollar", currency(change, 'a', false));
                break;
            case 17:
                change = currency(money, 'p', true);
                printf(">>%.2f australian dollar", currency(change, 'a', false));
                break;
            case 18:
                change = currency(money, 's', true);
                printf(">>%.2f australian dollar", currency(change, 'a', false));
                break;
            default:
                printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void riyadhmenu(){
    bool exit;
    float money, change;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tSAUDI RIYAL\t\t*\n");
        printf("*\t1. Saud Riyal - KEN Shilling\t*\n");
        printf("*\t2. Saud Riyal - U.S Dollar\t*\n");
        printf("*\t3. Saud Riyal - CAN Dollar\t*\n");
        printf("*\t4. Saud Riyal - EURO\t\t*\n");
        printf("*\t5. Saud Riyal - CHIN Yuan\t*\n");
        printf("*\t6. Saud Riyal - SA Rand\t\t*\n");
        printf("*\t7. Saud Riyal - STG Pound\t*\n");
        printf("*\t8. Saud Riyal - AUS Dollar\t*\n");
        printf("*\t9. Saud Riyal - IND Rupee\t*\n");
        printf("*\t10. KEN Shilling - Saud Riyal\t*\n");
        printf("*\t11. U.S Dollar - Saud Riyal\t*\n");
        printf("*\t12. CAN Dollar - Saud Riyal\t*\n");
        printf("*\t13. EURO - Saud Riyal\t\t*\n");
        printf("*\t14. CHIN Yuan - Saud Riyal\t*\n");
        printf("*\t15. SA Rand - Saud Riyal\t*\n");
        printf("*\t16. STG Pound - Saud Riyal\t*\n");
        printf("*\t17. AUS Dollar - Saud Riyal\t*\n");
        printf("*\t18. IND Rupee - Saud Riyal\t*\n");
        printf("*\t\t0. Exit\t\t\t*\n");
        printf("*****************************************\n");
        printf(">>");
        int sel;
        scanf("%d", &sel);
        if (sel == 0){
            exit = true;
            printf("\n");
            break;
        }printf(">>enter the amount\n>>");
        scanf("%f", &money);
        switch(sel){
            case 1:
                printf(">>%.2f kenyan shillings", currency(money, 's', true));
                break;
            case 2:
                change = currency(money, 's', true);
                printf(">>%.2f us dollar", currency(change, 'd', false));
                break;
            case 3:
                change = currency(money, 's', true);
                printf(">>%.2f canadian dollar", currency(change, 'c', false));
                break;
            case 4:
                change = currency(money, 's', true);
                printf(">>%.2f euro", currency(change, 'e', false));
                break;
            case 5:
                change = currency(money, 'y', true);
                printf(">>%.2f chinese yuan", currency(change, 's', false));
                break;
            case 6:
                change = currency(money, 's', true);
                printf(">>%.2f sa rand", currency(change, 'r', false));
                break;
            case 7:
                change = currency(money, 's', true);
                printf(">>%.2f sterling pound", currency(change, 'p', false));
                break;
            case 8:
                change = currency(money, 's', true);
                printf(">>%.2f australian dollars", currency(change, 'a', false));
                break;
            case 9:
                change = currency(money, 's', true);
                printf(">>%.2f rupee", currency(change, 'i', false));
                break;
            case 10:
                printf(">>%.2f saudi riyal", currency(money, 's', false));
                break;
            case 11:
                change = currency(money, 'd', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 12:
                change = currency(money, 'c', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 13:
                change = currency(money, 'e', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 14:
                change = currency(money, 'y', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 15:
                change = currency(money, 'r', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 16:
                change = currency(money, 'p', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 17:
                change = currency(money, 'a', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            case 18:
                change = currency(money, 'i', true);
                printf(">>%.2f saudi riyal", currency(change, 's', false));
                break;
            default:
                printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}
