#include "stdio.h"
#include "rates.h"

#define cmtodl(a) (a * 1000000)
#define dltocm(a) (a / 1000000)
#define ltocm(a) (a / 1000)
#define cmtol(a) (a * 1000)
#define galtocm(a) (a * 219.9692)
#define cmtogal(a) (a * 0.0045)
#define dltol(a) (a / 1000)
#define ltodl(a) (a * 1000)
#define dltogal(a) (a * 4546.092)
#define galtodl(a) (a * 0.0002)
#define ltogal(a) (a * 0.22)
#define galtol(a) (a * 4.5461)
#define tontokg(a) (a * 1000)
#define kgtoton(a) (a / 1000)
#define tontogram(a) (a * 1000000)
#define gramtoton(a) (a / 1000000)
#define tontolb(a) (a * 2240)
#define lbtoton(a) (a * 0.0004)
#define kgtogram(a) (a * 1000)
#define gramtokg(a) (a / 1000)
#define lbtokg(a) (a * 0.4536)
#define kgtolb(a) (a * 2.2046)
#define gramtolb(a) (a * 0.0022)
#define lbtogram(a) (a * 453.5924)

void cubicmenu(){
    bool exit = false;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tCUBIC METER\t\t\t*\n");
        printf("*\t\t1. cubic meter - decilitre\t*\n");
        printf("*\t\t2. cubic meter - litre\t*\n");
        printf("*\t\t3. cubic meter - gallon\t*\n");
        printf("*\t\t4. decilitre - cubic meter\t*\n");
        printf("*\t\t5. litre - cubic meter\t*\n");
        printf("*\t\t6. gallon - cubic meter\t*\n");
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
        }printf(">>enter the volume value\n>>");
        scanf("%f", &temp);
        switch (sel){
        case 1:
            printf("%.4fdl", cmtodl(temp));
            break;
        case 2:
            printf("%.4fl", cmtol(temp));
            break;
        case 3:
            printf("%.4f gal", cmtogal(temp));
            break;
        case 4:
            printf("%.4f m3", dltocm(temp));
            break;
        case 5:
            printf("%.4f m3", ltocm(temp));
            break;
        case 6:
            printf("%.4f m3", galtocm(temp));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void decimenu(){
    bool exit = false;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tDECILITER\t\t\t*\n");
        printf("*\t\t1. cubic meter - decilitre\t*\n");
        printf("*\t\t2. decilitre - litre\t*\n");
        printf("*\t\t3. decilitre - gallon\t*\n");
        printf("*\t\t4. decilitre - cubic meter\t*\n");
        printf("*\t\t5. litre - decilitre\t*\n");
        printf("*\t\t6. gallon - decilitre\t*\n");
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
        }printf(">>enter the volume value\n>>");
        scanf("%f", &temp);
        switch (sel){
        case 1:
            printf("%.4fdl", cmtodl(temp));
            break;
        case 2:
            printf("%.4fl", dltol(temp));
            break;
        case 3:
            printf("%.4f gal", dltogal(temp));
            break;
        case 4:
            printf("%.4f m3", dltocm(temp));
            break;
        case 5:
            printf("%.4f m3", ltodl(temp));
            break;
        case 6:
            printf("%.4f m3", galtodl(temp));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void litremenu(){
    bool exit = false;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tLITRE\t\t\t*\n");
        printf("*\t\t1. cubic meter - litre\t*\n");
        printf("*\t\t2. decilitre - litre\t*\n");
        printf("*\t\t3. litre - gallon\t*\n");
        printf("*\t\t4. litre - cubic meter\t*\n");
        printf("*\t\t5. litre - decilitre\t*\n");
        printf("*\t\t6. gallon - litre\t*\n");
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
        }printf(">>enter the volume value\n>>");
        scanf("%f", &temp);
        switch (sel){
        case 1:
            printf("%.4fl", cmtol(temp));
            break;
        case 2:
            printf("%.4fl", dltol(temp));
            break;
        case 3:
            printf("%.4f gal", ltogal(temp));
            break;
        case 4:
            printf("%.4f m3", ltocm(temp));
            break;
        case 5:
            printf("%.4fdl", ltodl(temp));
            break;
        case 6:
            printf("%.4fl", galtol(temp));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void gallonmenu(){
    bool exit = false;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tGALLON\t\t\t*\n");
        printf("*\t\t1. cubic meter - gallon\t*\n");
        printf("*\t\t2. decilitre - gallon\t*\n");
        printf("*\t\t3. litre - gallon\t*\n");
        printf("*\t\t4. gallon - cubic meter\t*\n");
        printf("*\t\t5. gallon - decilitre\t*\n");
        printf("*\t\t6. gallon - litre\t*\n");
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
        }printf(">>enter the volume value\n>>");
        scanf("%f", &temp);
        switch (sel){
        case 1:
            printf("%.4fgal", cmtogal(temp));
            break;
        case 2:
            printf("%.4fgal", dltogal(temp));
            break;
        case 3:
            printf("%.4f gal", ltogal(temp));
            break;
        case 4:
            printf("%.4f m3", galtocm(temp));
            break;
        case 5:
            printf("%.4fdl", galtodl(temp));
            break;
        case 6:
            printf("%.4fl", galtol(temp));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void tonnemenu(){
    bool exit = false;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tTONNE\t\t\t*\n");
        printf("*\t\t1. tonne - kg\t*\n");
        printf("*\t\t2. tonne - pound\t*\n");
        printf("*\t\t3. tonne - grams\t*\n");
        printf("*\t\t4. kg - tonne\t*\n");
        printf("*\t\t5. pound - tonne\t*\n");
        printf("*\t\t6. grams - tonne\t*\n");
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
        }printf(">>enter the volume value\n>>");
        scanf("%f", &temp);
        switch (sel){
        case 1:
            printf("%.4fkg", tontokg(temp));
            break;
        case 2:
            printf("%.4flb", tontolb(temp));
            break;
        case 3:
            printf("%.4fg", tontogram(temp));
            break;
        case 4:
            printf("%.4ftonne", kgtoton(temp));
            break;
        case 5:
            printf("%.4ftonne", lbtoton(temp));
            break;
        case 6:
            printf("%.4ftonne", gramtoton(temp));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void kilogrammenu(){
    bool exit = false;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tKILOGRAMME\t\t\t*\n");
        printf("*\t\t1. tonne - kg\t*\n");
        printf("*\t\t2. kg - pound\t*\n");
        printf("*\t\t3. kg - grams\t*\n");
        printf("*\t\t4. kg - tonne\t*\n");
        printf("*\t\t5. pound - kg\t*\n");
        printf("*\t\t6. grams - kg\t*\n");
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
        }printf(">>enter the volume value\n>>");
        scanf("%f", &temp);
        switch (sel){
        case 1:
            printf("%.4fkg", tontokg(temp));
            break;
        case 2:
            printf("%.4flb", kgtolb(temp));
            break;
        case 3:
            printf("%.4fg", kgtogram(temp));
            break;
        case 4:
            printf("%.4ftonne", kgtoton(temp));
            break;
        case 5:
            printf("%.4flb", kgtolb(temp));
            break;
        case 6:
            printf("%.4fkg", gramtokg(temp));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void grammenu(){
    bool exit = false;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tKILOGRAMME\t\t\t*\n");
        printf("*\t\t1. tonne - grams\t*\n");
        printf("*\t\t2. grams - pound\t*\n");
        printf("*\t\t3. kg - grams\t*\n");
        printf("*\t\t4. grams - tonne\t*\n");
        printf("*\t\t5. pound - grams\t*\n");
        printf("*\t\t6. grams - kg\t*\n");
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
        }printf(">>enter the volume value\n>>");
        scanf("%f", &temp);
        switch (sel){
        case 1:
            printf("%.4fg", tontogram(temp));
            break;
        case 2:
            printf("%.4flb", gramtolb(temp));
            break;
        case 3:
            printf("%.4fg", kgtogram(temp));
            break;
        case 4:
            printf("%.4ftonne", gramtoton(temp));
            break;
        case 5:
            printf("%.4fg", lbtogram(temp));
            break;
        case 6:
            printf("%.4fkg", gramtokg(temp));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}

void lbmenu(){
    bool exit = false;
    while(!exit){
        printf("\n*****************************************\n");
        printf("*\t\tKILOGRAMME\t\t\t*\n");
        printf("*\t\t1. tonne - pound\t*\n");
        printf("*\t\t2. grams - pound\t*\n");
        printf("*\t\t3. kg - pound\t*\n");
        printf("*\t\t4. pound - tonne\t*\n");
        printf("*\t\t5. pound - grams\t*\n");
        printf("*\t\t6. pound - kg\t*\n");
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
        }printf(">>enter the volume value\n>>");
        scanf("%f", &temp);
        switch (sel){
        case 1:
            printf("%.4fglb", tontolb(temp));
            break;
        case 2:
            printf("%.4flb", gramtolb(temp));
            break;
        case 3:
            printf("%.4flb", kgtolb(temp));
            break;
        case 4:
            printf("%.4ftonne", lbtoton(temp));
            break;
        case 5:
            printf("%.4fg", lbtogram(temp));
            break;
        case 6:
            printf("%.4fkg", lbtokg(temp));
            break;
        default:
            printf(">>!!! The value entered is invalid !!!\n  !!! Try again !!!");
        }
    }
}
