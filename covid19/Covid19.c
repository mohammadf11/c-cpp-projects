// in the name of god //ya mahdi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <conio.h>
#include <time.h>
#define sorkh "\x1b[31m"
#define abi "\x1b[34m"
#define sabz "\x1b[32m"
#define zard "\x1b[33m"
#define firooze "\x1b[36m"
#define banafsh "\x1b[35m"
#define sefid "\x1b[0m"
#include <windows.h>
#include <windows.h>
////////////////////////////////
struct admininformation
{
    char username[100];
    char password[100];
    char email[100];
    char NationalCode[100];
};
/////////////////////////////////
//////////////////////////
struct listfoti
{
    char firstname[100];
    char lastname[100];
    char NationalCode[100];
};
////////////////////////////////
////////////////////////////////
struct infomation_marakezdarmani
{
    char City_Medical_Centers[100];
    char Medical_Center_Area[100];
    char nam_markazdarmani[100];
};
/////////////////////////////////
struct userkarbaradi
{
    char firstname[100];
    char lastname[100];
    char usrename[100];
    char NationalCode[100];
    char password[100];
    char email[100];
    char bloodtype[100];
    char Age[100];
    char Height[100];
    char weight[100];
    char makanrafte[100][50];
    char timemakanrafte[100][50];
    char vaziat_makanerafte[100][50];
    int sanie_makanrafte[100];
    int tedadmakanrafte;
    char timekod[100][50];
    char kodsalamati[100];
    int sanie_cod[100];
    char timemolaghat[100][50];
    char molaghatshavande[100][50];
    int tedadmolaghat;
    int sanie_molaghat[100];
    int coronakod;

    int id;
};
//////////////////////////
//////////////////////////
struct usersahebin
{
    char firstname[100];
    char lastname[100];
    char usrename[100];
    char NationalCode[100];
    char password[100];
    char email[100];
    char City_location[100];
    char Shop_location_name[100];
    char Urban_area_of_the_place[100];
    char location_status[100];
    char name_of_shop[100];
    char kasike_rafte[100][50];
    char zamanraft[100][50];
    int sanie_rafte[100];
    int tedadafradrafte;
    int sanie_sorkh_shodan;
    int id;
};
////////////////////////////////
///////////////////////////////

///////////////////////////////01
//////////////////////////////
struct admininformation admin;
struct userkarbaradi karbaradi[100];
struct usersahebin sahebin[100];
struct infomation_marakezdarmani marakezdarmani[100];
struct listfoti foti[100];
int i;
char email[100];
char NationalCode[100];
char username[100];
char password[100];
int tedadkarbaradi = 0;
int tedadsahebin = 0;
int tedadmarakez = 0;
int tedadfoti = 0;

//////////////////////////////////////////////
/////////////////////////////////////////////
/////////////////////////////////////////////
void end()
{
    int counter1 = 0, counter2 = 0;
    system("color F1");
    while (counter1 != 1)
    {
        if (counter2 == 1)
        {
            counter1++;
            system("color F5");
            Sleep(500);
            system("color F6");
            Sleep(500);
            system("color F4");
            Sleep(500);
            system("color F1");
            Sleep(500);
            system("color F2");
            Sleep(500);
            system("color F3");
            Sleep(500);
        }
        system("cls");
        printf("\12\12  \n\n\n\n\n\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");

        puts("\t\t\t\t  _______ _    _ ______     ______ _   _ _____");
        puts("\t\t\t\t |__   __| |  | |  ____|   |  ____| \\ | |  __ \\ ");
        puts("\t\t\t\t    | |  | |__| | |__      | |__  |  \\| | |  | |");
        puts("\t\t\t\t    | |  |  __  |  __|     |  __| | . ` | |  | |");
        puts("\t\t\t\t    | |  | |  | | |____    | |____| |\\  | |__| |");
        puts("\t\t\t\t    |_|  |_|  |_|______|   |______|_| \\_|_____/ ");

        printf("\12\12  \t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        counter2 = 1;
    }
}
//////////////////welcome////////////////////////
/////////////////welcome/////////////////////////
void welcome()
{
    int counter1 = 0, counter2 = 0;
    system("color F1");
    while (counter1 != 1)
    {
        if (counter2 == 1)
        {
            counter1++;
            system("color F5");
            Sleep(500);
            system("color F6");
            Sleep(500);
            system("color F4");
            Sleep(500);
            system("color F1");
            Sleep(500);
            system("color F2");
            Sleep(500);
            system("color F3");
            Sleep(500);
        }
        system("cls");
        printf("\12\12  \n\n\n\n\n\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        puts("\t\t\t__          __ ______  _       _____  ____   __  __  ______");
        puts(" \t\t\t\\ \\        / /|  ____|| |     / ____|/ __ \\ |  \\/  ||  ____|");
        puts("\t\t\t \\ \\  /\\  / / | |__   | |    | |    | |  | || \\  / || |__  ");
        puts(" \t\t\t  \\ \\/  \\/ /  |  __|  | |    | |    | |  | || |\\/| ||  __|  ");
        puts(" \t\t\t   \\  /\\  /   | |____ | |____| |____| |__| || |  | || |____ ");
        puts(" \t\t\t    \\/  \\/    |______||______|\\_____|\\____/ |_|  |_||______|");

        printf("\12\12  \t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        counter2 = 1;
    }
}
//////////////////////////////////////////////////
void fileadmin()
{
    FILE *fptr;
    fptr = fopen("admin.txt", "r+");
    if (fptr == 0)
    {
        fseek(fptr, 0, SEEK_SET);
        fptr = fopen("admin.txt", "w+");
        strcpy(admin.username, "mohammad fattahi");
        strcpy(admin.password, "mdfa");
        strcpy(admin.NationalCode, "4440142672");
        strcpy(admin.email, "mdfa1381@Gmail.com");

        fwrite(&admin, sizeof(struct admininformation), 1, fptr);
    }

    fseek(fptr, 0, SEEK_SET);
    fread(&admin, sizeof(struct admininformation), 1, fptr);
}
////////////////////////////////////////////////////
/////////////////////////////////////////////////////
void filefoti()
{
    FILE *fptr;
    fptr = fopen("foti.txt", "r+");
    if (fptr == 0)
    {
        fseek(fptr, 0, SEEK_SET);
        fptr = fopen("foti.txt", "w+");
        strcpy(foti[0].firstname, "hasan");
        strcpy(foti[0].lastname, "hatefi");
        strcpy(foti[0].NationalCode, "123456789");

        fwrite(&foti[0], sizeof(struct listfoti), 1, fptr);
    }

    fseek(fptr, 0, SEEK_SET);
    for (i = 0; i < 100; i++)
    {
        fread(&foti[i], sizeof(struct listfoti), 1, fptr);
        if (strlen(foti[i].firstname) == 0)
        {
            tedadfoti = i;
            break;
        }
    }
}
/////////////////////////////////////////////////////
////////////////////////////////////////////////////
void filemarakez()
{
    FILE *fptr;
    fptr = fopen("marakez.txt", "r+");
    if (fptr == 0)
    {
        fseek(fptr, 0, SEEK_SET);
        fptr = fopen("marakez.txt", "w+");
        strcpy(marakezdarmani[0].City_Medical_Centers, "yazd");
        strcpy(marakezdarmani[0].Medical_Center_Area, "ardakan");
        strcpy(marakezdarmani[0].nam_markazdarmani, "ziaee hospital");

        fwrite(&marakezdarmani[0], sizeof(struct infomation_marakezdarmani), 1, fptr);
    }

    fseek(fptr, 0, SEEK_SET);
    for (i = 0; i < 100; i++)
    {
        fread(&marakezdarmani[i], sizeof(struct infomation_marakezdarmani), 1, fptr);
        if (strlen(marakezdarmani[i].City_Medical_Centers) == 0)
        {
            tedadmarakez = i;
            break;
        }
    }
}
////////////////filesahebin///////////////////////////////
///////////////filesahebin////////////////////////////////
void filesahebin()
{
    FILE *fptr;
    fptr = fopen("sahebin.txt", "r+");
    if (fptr == 0)
    {
        fseek(fptr, 0, SEEK_SET);
        fptr = fopen("sahebin.txt", "w+");
        strcpy(sahebin[0].usrename, "ali");
        strcpy(sahebin[0].password, "12345");
        strcpy(sahebin[0].firstname, "alireza");
        strcpy(sahebin[0].email, "ali@gmail.com");
        strcpy(sahebin[0].City_location, "yazd");
        strcpy(sahebin[0].lastname, "rahimi");
        strcpy(sahebin[0].Urban_area_of_the_place, "ardakan");
        strcpy(sahebin[0].NationalCode, "444");
        strcpy(sahebin[0].Shop_location_name, "bahonar");
        strcpy(sahebin[0].location_status, "red");
        strcpy(sahebin[0].name_of_shop, "nonvaiee");
        karbaradi[0].id = 0;
        for (i = 0; i < 100; i++)
        {
            fwrite(&sahebin[i], sizeof(struct usersahebin), 1, fptr);
        }
    }

    fseek(fptr, 0, SEEK_SET);
    for (i = 0; i < 100; i++)
    {
        fread(&sahebin[i], sizeof(struct usersahebin), 1, fptr);
        if (strlen(sahebin[i].usrename) == 0)
        {
            tedadsahebin = i - 1;
            break;
        }
    }
}
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////filekarbaradi///////////////////////////////////////
void filekarbaradi()
{
    FILE *ptr;
    ptr = fopen("karbaradi.txt", "r+");
    if (ptr == 0)
    {
        fseek(ptr, 0, SEEK_SET);
        ptr = fopen("karbaradi.txt", "w+");
        strcpy(karbaradi[0].usrename, "hosein1");
        strcpy(karbaradi[0].password, "6789");
        strcpy(karbaradi[0].Age, "20");
        strcpy(karbaradi[0].bloodtype, "a+");
        strcpy(karbaradi[0].email, "hosein@gmai.com");
        strcpy(karbaradi[0].firstname, "hosein");
        strcpy(karbaradi[0].Height, "180");
        karbaradi[0].kodsalamati[0] = '3';
        strcpy(karbaradi[0].lastname, "shaker");
        strcpy(karbaradi[0].NationalCode, "44400");
        strcpy(karbaradi[0].timekod, "Sat Jan 30 13:34:18 2021");
        strcpy(karbaradi[0].weight, "60");
        for (i = 0; i < 2; i++)
        {
            fwrite(&karbaradi[i], sizeof(struct userkarbaradi), 1, ptr);
        }
    }

    fseek(ptr, 0, SEEK_SET);
    for (i = 0; i < 100; i++)
    {
        fread(&karbaradi[i], sizeof(struct userkarbaradi), 1, ptr);

        if (strlen(karbaradi[i].usrename) == 0)
        {
            tedadkarbaradi = i - 1;
            break;
        }
    }
}
//////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
/////////////////////////////vorood/////////////////////////////////////
/////////////////////////////vorood/////////////////////////////
void voroodkarbar()
{
    char vorood[100];
    system("cls");
    system("color F1");
    printf("\12\12  \t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");

    puts("\t\t\t                             _      _   __   ___                        ");
    puts("\t\t\t                            (_)    | | /_ | / _ \\                       ");
    puts("\t\t\t            ___  ___ __   __ _   __| |  | || (_) |  ");
    puts("\t\t\t           / __|/ _ \\\\ \\ / /| | / _` |  | | \\__, |");
    puts("\t\t\t          | (__  (_) |\\ V / | || (_| |  | |   / /   \ ");
    puts("\t\t\t           \\___|\\___/  \\_/  |_| \\__,_|  |_|  /_/ ");
    printf("\12\12\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4 Welcome to the SIBE SALAMATI app \4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n\n\n  ");
    printf("\12\12\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  1-Login to the program \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  2-Create a new account \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4    3-forget password    \4\4\4\4\4\4\4\4\4\4\n\n\n\n\n\n\n");

    printf("               \t\t\t \4\4\4\4\4\4\4\4 Please enter your choice:");
    gets(vorood);
    if (((strcmp(vorood, "Login to the program") != 0 && strcmp(vorood, "Create a new account") != 0 && strcmp(vorood, "forget password") != 0 && strcmp(vorood, "1") != 0 && strcmp(vorood, "2") != 0 && strcmp(vorood, "3") != 0)) || strlen(vorood) == 0)
    {
        printf(sorkh "  \7\n\n \t\t\t\t \4\4\4\4\4\4\4\4\4\4\4  Please try again \4\4\4\4\4\4\4\4\4\4\4 \n ");
        printf(abi);
        Sleep(1000);
        voroodkarbar();
    }
    /////////////////////////////////////////
    if (strcmp(vorood, "1") == 0 || strcmp(vorood, "Login to the program") == 0)
    {
        vorood1();
    }

    if (strcmp(vorood, "Create a new account") == 0 || strcmp(vorood, "2") == 0)
    {
        vorood2();
    }

    if (strcmp(vorood, "3") == 0 || strcmp(vorood, "forget password") == 0)
    {
        forget_password();
    }
}
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
void forget_password(int n)
{
    system("cls");
    printf("\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your username:");
    fflush(stdin);
    gets(username);
    if (strlen(username) == 0)
    {
        printf(sorkh "\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your username is incorrect \4\4\4\4\4\4\4\4\4\4\4\n\n");
        Sleep(500);
        printf(abi);
        forget_password(n);
    }
    for (i = 0; i < 100; i++)
    {
        if (strcmp(karbaradi[i].usrename, username) == 0 || strcmp(sahebin[i].usrename, username) == 0 || strcmp(admin.username, username) == 0)
        {
            if (strcmp(sahebin[i].usrename, username) == 0)
            {
                forget_password_sahebin(i);
            }
            if (strcmp(karbaradi[i].usrename, username) == 0)
            {
                forget_password_karbaradi(i);
            }

            if (strcmp(admin.username, username) == 0)
            {
                forget_password_admin();
            }
            break;
        }
    }
    if (i == 100)
    {
        printf(sorkh "\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your username is incorrect \4\4\4\4\4\4\4\4\4\4\4\n\n");
        Sleep(1000);
        printf(abi);
        forget_password(n);
    }
}

////////////////////////////////////
void forget_password_admin()
{
    char repeat_the_password[100];
    do
    {
        do
        {
            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4              ");
            printf("\b\b\b\b\b\b\b\b\b\b\b\b\b your email:");
            fflush(stdin);
            gets(email);
            if (strlen(email) == 0)
            {
                printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(email) == 0);
        if (strcmp(email, admin.email) != 0)
        {
            printf(sorkh "\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your email is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(email, admin.email) != 0);
    do
    {
        do
        {
            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4              ");
            printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\ your National Code:");
            fflush(stdin);
            gets(NationalCode);
            if (strlen(NationalCode) == 0)
            {
                printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(NationalCode) == 0);
        if (strcmp(NationalCode, admin.NationalCode) != 0)
        {
            printf(sorkh "\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your NationalCodef is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(NationalCode, admin.NationalCode) != 0);
    system("cls");
    printf(sorkh "  \n \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You can choose a new password for yourself \4\4\4\4\4\4\4\4\4\4\4\n");
    printf(abi);
    do
    {
        do
        {
            printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");

            printf("  your new password (Mandatory):");

            fflush(stdin);
            int i = 0;
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    admin.password[i] = ch1;
                    admin.password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    admin.password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(admin.password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
                printf(abi);
            }
        } while (strlen(admin.password) == 0);
        do
        {

            printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  repeat the new password (Mandatory):");

            fflush(stdin);
            int i = 0;
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    repeat_the_password[i] = ch1;
                    repeat_the_password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    repeat_the_password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(repeat_the_password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
                printf(abi);
            }
        } while (strlen(repeat_the_password) == 0);
        if (strcmp(admin.password, repeat_the_password) != 0 || strlen(repeat_the_password) != strlen(admin.password))
        {

            printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your password is not the same as repeating it \4\4\4\4\4\4\4\4\4\4\4");
            printf(abi);
        }
    } while (strcmp(admin.password, repeat_the_password) != 0 || strlen(repeat_the_password) != strlen(admin.password));

    voroodkarbar();
}

////////////////////////////////////////
///////////////////////////////////////////
void forget_password_karbaradi(int n)
{
    char repeat_the_password[100];
    do
    {
        do
        {
            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4              ");
            printf("\b\b\b\b\b\b\b\b\b\b\b\b\b your email:");
            fflush(stdin);
            gets(email);
            if (strlen(email) == 0)
            {
                printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(email) == 0);
        if (strcmp(email, karbaradi[n].email) != 0)
        {
            printf(sorkh "\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your email is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(email, karbaradi[n].email) != 0);
    do
    {
        do
        {
            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4              ");
            printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\ your National Code:");
            fflush(stdin);
            gets(NationalCode);
            if (strlen(NationalCode) == 0)
            {
                printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(NationalCode) == 0);
        if (strcmp(NationalCode, karbaradi[n].NationalCode) != 0)
        {
            printf(sorkh "\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your NationalCodef is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(NationalCode, karbaradi[n].NationalCode) != 0);
    system("cls");
    printf(sorkh "  \n \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You can choose a new password for yourself \4\4\4\4\4\4\4\4\4\4\4\n");
    printf(abi);
    do
    {
        do
        {
            printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");

            printf("  your new password (Mandatory):");

            fflush(stdin);
            int i = 0;
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    karbaradi[n].password[i] = ch1;
                    karbaradi[n].password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    karbaradi[n].password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(karbaradi[n].password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
                printf(abi);
            }
        } while (strlen(karbaradi[n].password) == 0);
        do
        {

            printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  repeat the new password (Mandatory):");

            fflush(stdin);
            int i = 0;
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    repeat_the_password[i] = ch1;
                    repeat_the_password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    repeat_the_password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(repeat_the_password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
                printf(abi);
            }
        } while (strlen(repeat_the_password) == 0);
        if (strcmp(karbaradi[n].password, repeat_the_password) != 0 || strlen(repeat_the_password) != strlen(karbaradi[n].password))
        {

            printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your password is not the same as repeating it \4\4\4\4\4\4\4\4\4\4\4");
            printf(abi);
        }
    } while (strcmp(karbaradi[n].password, repeat_the_password) != 0 || strlen(repeat_the_password) != strlen(karbaradi[n].password));

    voroodkarbar();
}

////////////////////////////////////////
/////////////////////////////////////////
void forget_password_sahebin(int n)
{
    do
    {
        do
        {
            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4              ");
            printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\ your email:");
            fflush(stdin);
            gets(email);
            if (strlen(email) == 0)
            {
                printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(email) == 0);
        if (strcmp(email, sahebin[n].email) != 0)
        {
            printf(sorkh "\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your email is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(email, sahebin[n].email) != 0);
    do
    {
        do
        {
            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4              ");
            printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\ your National Code:");
            fflush(stdin);
            gets(NationalCode);
            if (strlen(NationalCode) == 0)
            {
                printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(NationalCode) == 0);
        if (strcmp(NationalCode, sahebin[n].NationalCode) != 0)
        {
            printf(sorkh "\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your National Code is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(NationalCode, sahebin[n].NationalCode) != 0);
    system("cls");

    printf(sorkh "  \n \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You can choose a new password for yourself \4\4\4\4\4\4\4\4\4\4\4\n");
    printf(abi);
    char repeat_the_password[100];
    do
    {
        do
        {
            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");

            printf("  your new password (Mandatory):");

            fflush(stdin);
            int i = 0;
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    sahebin[n].password[i] = ch1;
                    sahebin[n].password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    sahebin[n].password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(sahebin[n].password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(sahebin[n].password) == 0);

        do
        {

            printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  repeat the new password (Mandatory):");

            fflush(stdin);
            int i = 0;
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    repeat_the_password[i] = ch1;
                    repeat_the_password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    repeat_the_password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(repeat_the_password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
                printf(abi);
            }
        } while (strlen(repeat_the_password) == 0);
        if (strcmp(sahebin[n].password, repeat_the_password) != 0 || strlen(repeat_the_password) != strlen(sahebin[n].password))
        {

            printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your password is not the same as repeating it \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(sahebin[n].password, repeat_the_password) != 0 || strlen(repeat_the_password) != strlen(sahebin[n].password));

    voroodkarbar();
}

///////////////////////////////////////
/////////////////////////////////////

////////////////////////////////////////
///////////////////////////////////////
//////////////////////////////////////////////////////////////////////
void vorood2()
{
    char voroodi[100];
    system("cls");
    printf("  \n\n\n\n\n\n\n\n\12\12      \t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 1-Business owners \4\4\4\4\4\4\4\4\4\4\n\n\n \t\t\t\t\4\4\4\4\4\4\4\4\4\4\4   2-normal user   \4\4\4\4\4\4\4\4\4\4\n\n\n      ");
    printf("\12\12         \t\t\t\4\4\4\4\4\4\4\4\4\4\4  Select your account type:");
    gets(voroodi);
    if (strcmp(voroodi, "Business owners") != 0 && strcmp(voroodi, "normal user") != 0 && strcmp(voroodi, "1") != 0 && strcmp(voroodi, "2") != 0)
    {
        printf(sorkh "\n\n\7\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  Please try again  \4\4\4\4\4\4\4\4\4\4\4");
        Sleep(500);
        printf(abi);
        vorood2();
    }
    if (strcmp(voroodi, "normal user") == 0 || strcmp(voroodi, "2") == 0)
    {
        acount_normal_user();
    }
    if (strcmp(voroodi, "Business owners") == 0 || strcmp(voroodi, "1") == 0)
    {
        acount_sahebin();
    }
}
///////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
void acount_sahebin()
{
    system("cls");
    do
    {
        printf("\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your First name (Mandatory):");

        fflush(stdin);

        gets(sahebin[tedadsahebin + 1].firstname);
        if (strlen(sahebin[tedadsahebin + 1].firstname) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n\n");
            printf(abi);
        }
    } while (strlen(sahebin[tedadsahebin + 1].firstname) == 0);
    do
    {
        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your Last name (Mandatory):");

        fflush(stdin);
        gets(sahebin[tedadsahebin + 1].lastname);
        if (strlen(sahebin[tedadsahebin + 1].lastname) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(sahebin[tedadsahebin + 1].lastname) == 0);
loop:
    do
    {

        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your National Code (Mandatory):");

        fflush(stdin);
        gets(sahebin[tedadsahebin + 1].NationalCode);
        if (strlen(sahebin[tedadsahebin + 1].NationalCode) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(sahebin[tedadsahebin + 1].NationalCode) == 0);
    for (i = 0; i < 100; i++)
    {
        if (strcmp(karbaradi[i].NationalCode, sahebin[tedadsahebin + 1].NationalCode) == 0 || (i != tedadsahebin + 1 && strcmp(sahebin[tedadsahebin + 1].NationalCode, sahebin[i].NationalCode) == 0))
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4 This NationalCode  has already been selected  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf("  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  Please try again \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
            goto loop;
        }
    }

LOOP:
    do
    {

        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your user name (Mandatory):");

        fflush(stdin);
        gets(sahebin[tedadsahebin + 1].usrename);
        if (strlen(sahebin[tedadsahebin + 1].usrename) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(sahebin[tedadsahebin + 1].usrename) == 0);

    for (i = 0; i < 100; i++)
    {
        if (strcmp(karbaradi[i].usrename, sahebin[tedadsahebin + 1].usrename) == 0 || (i != tedadsahebin + 1 && strcmp(sahebin[tedadsahebin + 1].usrename, sahebin[i].usrename) == 0))
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4 This username has already been selected  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf("  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  Please try again \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
            goto LOOP;
        }
    }
    char repeat_the_password[100];
    do
    {

        do
        {
            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");

            printf("  your password (Mandatory):");

            fflush(stdin);
            int i = 0;
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    sahebin[tedadsahebin + 1].password[i] = ch1;
                    sahebin[tedadsahebin + 1].password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    sahebin[tedadsahebin + 1].password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }

            if (strlen(sahebin[tedadsahebin + 1].password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(sahebin[tedadsahebin + 1].password) == 0);
        do
        {

            printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  repeat the password (Mandatory):");

            fflush(stdin);
            int i = 0;
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    repeat_the_password[i] = ch1;
                    repeat_the_password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    repeat_the_password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }

            if (strlen(repeat_the_password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
                printf(abi);
            }
        } while (strlen(repeat_the_password) == 0);
        if (strcmp(sahebin[tedadsahebin + 1].password, repeat_the_password) != 0 || strlen(repeat_the_password) != strlen(sahebin[tedadsahebin + 1].password))
        {

            printf(sorkh "\7\n\n  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your password is not the same as repeating it \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(sahebin[tedadsahebin + 1].password, repeat_the_password) != 0 || strlen(repeat_the_password) != strlen(sahebin[tedadsahebin + 1].password));
    do
    {
        printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your email (Mandatory):");
        fflush(stdin);
        gets(sahebin[tedadsahebin + 1].email);
        if (strlen(sahebin[tedadsahebin + 1].email) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
            printf(abi);
        }
    } while (strlen(sahebin[tedadsahebin + 1].email) == 0);
    do
    {
        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your Shop Name (Mandatory):");

        fflush(stdin);

        gets(sahebin[tedadsahebin + 1].name_of_shop);
        if (strlen(sahebin[tedadsahebin + 1].name_of_shop) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n\n");
            printf(abi);
        }
    } while (strlen(sahebin[tedadsahebin + 1].name_of_shop) == 0);

    do
    {
        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your City location (mandatory):");
        fflush(stdin);
        gets(sahebin[tedadsahebin + 1].City_location);
        if (strlen(sahebin[tedadsahebin + 1].City_location) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(sahebin[tedadsahebin + 1].City_location) == 0);
    do
    {
        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your Shop location name(Mandatory):");
        fflush(stdin);
        gets(sahebin[tedadsahebin + 1].Shop_location_name);
        if (strlen(sahebin[tedadsahebin + 1].Shop_location_name) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(sahebin[tedadsahebin + 1].Shop_location_name) == 0);
    do
    {
        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your Urban area of the place(Mandatory):");
        fflush(stdin);
        gets(sahebin[tedadsahebin + 1].Urban_area_of_the_place);
        if (strlen(sahebin[tedadsahebin + 1].Urban_area_of_the_place) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(sahebin[tedadsahebin + 1].Urban_area_of_the_place) == 0);
    tedadsahebin++;
    filesahebin2();
    filekarbaradi2();
    voroodkarbar();
}
///////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
void acount_normal_user()
{
    system("cls");
    do
    {
        printf("\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your First name (Mandatory):");

        fflush(stdin);

        gets(karbaradi[tedadkarbaradi + 1].firstname);
        if (strlen(karbaradi[tedadkarbaradi + 1].firstname) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n\n");
            printf(abi);
        }
    } while (strlen(karbaradi[tedadkarbaradi + 1].firstname) == 0);

    do
    {
        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your Last name (Mandatory):");

        fflush(stdin);
        gets(karbaradi[tedadkarbaradi + 1].lastname);
        if (strlen(karbaradi[tedadkarbaradi + 1].lastname) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(karbaradi[tedadkarbaradi + 1].lastname) == 0);
lop:
    do
    {

        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your National Code (Mandatory):");

        fflush(stdin);
        gets(karbaradi[tedadkarbaradi + 1].NationalCode);
        if (strlen(karbaradi[tedadkarbaradi + 1].NationalCode) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(karbaradi[tedadkarbaradi + 1].NationalCode) == 0);
    for (i = 0; i < 100; i++)
    {
        if ((strcmp(karbaradi[tedadkarbaradi + 1].NationalCode, karbaradi[i].NationalCode) == 0 && i != tedadkarbaradi + 1) || strcmp(karbaradi[tedadkarbaradi + 1].NationalCode, sahebin[i].NationalCode) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4 This NationalCode has already been selected  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf("  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  Please try again \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
            goto lop;
        }
    }
lp:
    do
    {

        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your user name (Mandatory):");

        fflush(stdin);
        gets(karbaradi[tedadkarbaradi + 1].usrename);
        if (strlen(karbaradi[tedadkarbaradi + 1].usrename) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(karbaradi[tedadkarbaradi + 1].usrename) == 0);
    for (i = 0; i < 100; i++)
    {
        if ((strcmp(karbaradi[tedadkarbaradi + 1].usrename, karbaradi[i].usrename) == 0 && i != tedadkarbaradi + 1) || strcmp(karbaradi[tedadkarbaradi + 1].usrename, sahebin[i].usrename) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4 This username has already been selected  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf("  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  Please try again \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
            goto lp;
        }
    }
    char repeat_the_password[100];
    do
    {

        do
        {
            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");

            printf("  your password (Mandatory):");

            fflush(stdin);
            int i = 0; // kar
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    karbaradi[tedadkarbaradi + 1].password[i] = ch1;
                    karbaradi[tedadkarbaradi + 1].password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    karbaradi[tedadkarbaradi + 1].password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(karbaradi[tedadkarbaradi + 1].password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(karbaradi[tedadkarbaradi + 1].password) == 0);
        do
        {

            printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  repeat the password (Mandatory):");

            fflush(stdin);

            int i = 0;
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    repeat_the_password[i] = ch1;
                    repeat_the_password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    repeat_the_password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(repeat_the_password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
                printf(abi);
            }
        } while (strlen(repeat_the_password) == 0);
        if (strcmp(repeat_the_password, karbaradi[tedadkarbaradi + 1].password) != 0 || strlen(repeat_the_password) != strlen(karbaradi[tedadkarbaradi + 1].password))
        {

            printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your password is not the same as repeating it \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(karbaradi[tedadkarbaradi + 1].password, repeat_the_password) != 0 || strlen(repeat_the_password) != strlen(karbaradi[tedadkarbaradi + 1].password));
    do
    {
        printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf("  your email (Mandatory):");
        fflush(stdin);
        gets(karbaradi[tedadkarbaradi + 1].email);
        if (strlen(karbaradi[tedadkarbaradi + 1].email) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
            printf(abi);
        }
    } while (strlen(karbaradi[tedadkarbaradi + 1].email) == 0);
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your blood type (Optional):");

    fflush(stdin);
    gets(karbaradi[tedadkarbaradi + 1].bloodtype);

    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your Age (Optional):");

    fflush(stdin);
    gets(karbaradi[tedadkarbaradi + 1].Age);

    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your Height (Optional):");

    fflush(stdin);
    gets(karbaradi[tedadkarbaradi + 1].Height);
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your Weight (Optional):");

    fflush(stdin);
    gets(karbaradi[tedadkarbaradi + 1].weight);
    tedadkarbaradi++;
    filesahebin2();
    filekarbaradi2();
    voroodkarbar();
}
/////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
/////////////////////////////////vorood1///////////////////////////

void vorood1()
{
    system("cls");

    printf("\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your username:");
    for (i = 0; i < 100; i++)
    {
        username[i] = '\0';
        password[i] = '\0';
    }
    fflush(stdin);
    gets(username);
    if (strlen(username) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n\n");
        printf(abi);
        Sleep(500);
        vorood1();
    }
    for (i = 0; i < 100; i++)
    {
        if (strcmp(karbaradi[i].usrename, username) == 0 || strcmp(sahebin[i].usrename, username) == 0 || strcmp(admin.username, username) == 0)
        {
            if (strcmp(sahebin[i].usrename, username) == 0)
            {
                passwordsahebin(i);
            }
            if (strcmp(karbaradi[i].usrename, username) == 0)
            {
                passwordkarbaradi(i);
            }
            if (strcmp(admin.username, username) == 0)
            {
                passwordadmin();
            }
            break;
        }
    }
    if (i == 100)
    {
        printf(sorkh "\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your username is incorrect \4\4\4\4\4\4\4\4\4\4\4\n\n");
        Sleep(1000);
        printf(abi);
        vorood1();
    }
}
////////////////////////////////////////////////////////passwordkarbaradi
/////////////////////////////////////////////////////passwordkarbaradi
//////////////////////////////////////////////////////passwordkarbaradi
////////////////////////////////////////////////////passwordkarbaradi
void passwordkarbaradi(int n)
{
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4              ");
    printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b  your password:");
    fflush(stdin);
    int i = 0;
    while (i != -1)
    {

        char ch1 = getch();
        if (ch1 != 13 && ch1 != 8)
        {
            password[i] = ch1;
            password[i + 1] = '\0';
            i++;

            printf("*");
        }
        if (ch1 == 13)
        {

            password[i] = '\0';
            i = -1;
        }
        if (ch1 == 8 && i != 0)
        {
            i--;
            printf("\b \b");
        }
    }

    if (strlen(password) == 0)
    {
        printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        passwordkarbaradi(n);
    }
    if (strcmp(password, karbaradi[n].password) != 0 || strlen(password) != strlen(karbaradi[n].password))
    {

        printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your password is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        passwordkarbaradi(n);
    }
    normal_user_section(n);
}
/////////////////////////////////////////////////////////////normal_user_section
/////////////////////////////////////////////////////////////normal_user_section
/////////////////////////////////////////////////////////////normal_user_section
/////////////////////////////////////////////////////////////normal_user_section
void normal_user_section(int n)
{
    filesahebin2();
    filekarbaradi2();
    char vorood_normal_user[100];
    system("cls");
    printf(sorkh "\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4          Normal user section                   \4\4\4\4\4\4\4\4\4\4\n\n\n\n\n");
    printf(abi);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  1-Health status registration                   \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  2-Editing information                          \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  3-View health history entry history            \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  4-Record appointments with other people        \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  5-Meeting history                              \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  6-Add places that are gone                     \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  7-View the history of places you have visited  \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  8-View Corona statistics                       \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  9-Visit nearby hospitals and medical centers   \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4          10-sign out                            \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4          11-exit                                \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("      \n\t\t\t\t \4\4\4\4\4\4\4\4\4\4\4  Enter your choice:");
    gets(vorood_normal_user);
    if (strcmp(vorood_normal_user, "Health status registration") != 0 && strcmp(vorood_normal_user, "sign out") != 0 && strcmp(vorood_normal_user, "exit") != 0 && strcmp(vorood_normal_user, "1") != 0 && strcmp(vorood_normal_user, "2") != 0 && strcmp(vorood_normal_user, "3") != 0 && strcmp(vorood_normal_user, "4") != 0 && strcmp(vorood_normal_user, "5") != 0 && strcmp(vorood_normal_user, "6") != 0 && strcmp(vorood_normal_user, "7") != 0 && strcmp(vorood_normal_user, "8") != 0 && strcmp(vorood_normal_user, "9") != 0 && strcmp(vorood_normal_user, "10") != 0 && strcmp(vorood_normal_user, "11") != 0 && strcmp(vorood_normal_user, "Editing information") != 0 && strcmp(vorood_normal_user, "View health history entry history") != 0 && strcmp(vorood_normal_user, "Record appointments with other people") != 0 && strcmp(vorood_normal_user, "Meeting history ") != 0 && strcmp(vorood_normal_user, "Add places that are gone ") != 0 && strcmp(vorood_normal_user, "View the history of places you have visited ") != 0 && strcmp(vorood_normal_user, "View Corona statistics ") != 0 && strcmp(vorood_normal_user, "Visit nearby hospitals and medical centers ") != 0)
    {
        printf(sorkh "\n\n \7\t\t\t\t \4\4\4\4\4\4\4\4\4\4\4  Please try again \4\4\4\4\4\4\4\4\4\4\4 \n\n ");
        Sleep(500);
        printf(abi);
        normal_user_section(n);
    }
    if (strcmp(vorood_normal_user, "Health status registration") == 0 || strcmp(vorood_normal_user, "1") == 0)
    {
        Health_status_registration(n);
    }
    if (strcmp(vorood_normal_user, "Editing information") == 0 || strcmp(vorood_normal_user, "2") == 0)
    {
        Editing_information(n);
    }
    if (strcmp(vorood_normal_user, "View health history entry history") == 0 || strcmp(vorood_normal_user, "3") == 0)
    {
        View_health_history_entry_history(n);
    }
    if (strcmp(vorood_normal_user, "Record appointments with other people") == 0 || strcmp(vorood_normal_user, "4") == 0)
    {
        Record_appointments_with_other_people(n);
    }
    if (strcmp(vorood_normal_user, "Meeting history") == 0 || strcmp(vorood_normal_user, "5") == 0)
    {
        Meeting_history(n);
    }
    if (strcmp(vorood_normal_user, "Add places that are gone") == 0 || strcmp(vorood_normal_user, "6") == 0)
    {
        Add_places_that_are_gone(n);
    }
    if (strcmp(vorood_normal_user, "View the history of places you have visited") == 0 || strcmp(vorood_normal_user, "7") == 0)
    {
        View_the_history_of_places_you_have_visited(n);
    }
    if (strcmp(vorood_normal_user, "View Corona statistics") == 0 || strcmp(vorood_normal_user, "8") == 0)
    {
        View_Corona_statistics(n);
    }
    if (strcmp(vorood_normal_user, "Visit nearby hospitals and medical centers") == 0 || strcmp(vorood_normal_user, "9") == 0)
    {
        Visit_nearby_hospitals_and_medical_centers(n);
    }
    if (strcmp(vorood_normal_user, "sign out") == 0 || strcmp(vorood_normal_user, "10") == 0)
    {
        voroodkarbar();
    }
    if (strcmp(vorood_normal_user, "exit ") == 0 || strcmp(vorood_normal_user, "11") == 0)
    {
        filesahebin2();
        filekarbaradi2();
        end();
        return 0;
    }
}
//////////////////////////////////////////////////////
///////////////////////////////////////////////////////
void View_Corona_statistics(int n)
{
    char voroodi_View_Corona[100];
    system("cls");
    printf("  \n\n\n\n\n\n\n\n\12\12      \t\t\t\t\4\4\4\4\4\4\4\4\4\4\4   1-Daily statistics   \4\4\4\4\4\4\4\4\4\4\n\n\n \t\t\t\t\4\4\4\4\4\4\4\4\4\4\4   2-Weekly statistics   \4\4\4\4\4\4\4\4\4\4\n\n\n      ");
    printf("\12\12         \t\t\t\4\4\4\4\4\4\4\4\4\4\4  Enter your choice=");
    gets(voroodi_View_Corona);
    if (strcmp(voroodi_View_Corona, "Daily statistics") != 0 && strcmp(voroodi_View_Corona, "Weekly statistics") != 0 && strcmp(voroodi_View_Corona, "1") != 0 && strcmp(voroodi_View_Corona, "2") != 0)
    {
        printf(sorkh "\n\n\7\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  Please try again  \4\4\4\4\4\4\4\4\4\4\4");
        Sleep(500);
        printf(abi);
        View_Corona_statistics(n);
    }
    if (strcmp(voroodi_View_Corona, "Daily statistics") == 0 || strcmp(voroodi_View_Corona, "1") == 0)
    {
        Daily_statistics(n);
    }
    if (strcmp(voroodi_View_Corona, "Weekly statistics") == 0 || strcmp(voroodi_View_Corona, "2") == 0)
    {
        Weekly_statistics(n);
    }
}
//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
void Weekly_statistics(int n)
{
    time_t nowweek = time(NULL);
    int counterweek = 0;
    for (i = 0; i < 100; i++)
    {
        int j;
        for (j = -1; karbaradi[i].sanie_cod[j + 1] != 0; j++)
            ;
        if (nowweek - karbaradi[i].sanie_cod[j] <= (604800) && j != -1 && karbaradi[i].kodsalamati[j] == '4')
        {
            counterweek++;
        }
    }

    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    printf(sorkh "\12\t\t\t\t Unfortunately, %d people have been  infected \n\12\t\t\t\t with the Corona virus in the past week", counterweek);
    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");

    Sleep(5000);
    normal_user_section(n);
}
//////////////////////////////////////////////////////////////
void Daily_statistics(int n)
{
    time_t now = time(NULL);
    int counter = 0;
    for (i = 0; i < 100; i++)
    {
        int j;
        for (j = -1; karbaradi[i].sanie_cod[j + 1] != 0; j++)
            ;
        if (now - karbaradi[i].sanie_cod[j] <= (86400) && j != -1 && karbaradi[i].kodsalamati[j] == '4')
        {
            counter++;
        }
    }

    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    printf(sorkh "\12\t\t\t\t Unfortunately, %d people have been  infected \n\12\t\t\t\t with the Corona virus in the last 24 hours", counter);
    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");

    Sleep(5000);
    normal_user_section(n);
}
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
void View_the_history_of_places_you_have_visited(int n)
{
    system("cls");
    if (strlen(karbaradi[n].makanrafte[0]) != 0)
    {
        if (strlen(karbaradi[n].vaziat_makanerafte[0]) == 0)
        {
            strcpy(karbaradi[n].vaziat_makanerafte[0], "Location status not recorded");
        }
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\t     On %s\12\t\t\t\t\t     palce name=%s\12\n\t\t\t\t\t     location status=%s", karbaradi[n].timemakanrafte[0], karbaradi[n].makanrafte[0], karbaradi[n].vaziat_makanerafte[0]);
    }
    if (strlen(karbaradi[n].makanrafte[1]) != 0)
    {
        if (strlen(karbaradi[n].vaziat_makanerafte[1]) == 0)
        {
            strcpy(karbaradi[n].vaziat_makanerafte[1], "Location status not recorded");
        }
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\t     On %s\12\t\t\t\t\t     palce name=%s\12\n\t\t\t\t\t    location status=%s", karbaradi[n].timemakanrafte[1], karbaradi[n].makanrafte[1], karbaradi[n].vaziat_makanerafte[1]);
    }
    if (strlen(karbaradi[n].makanrafte[2]) != 0)
    {
        if (strlen(karbaradi[n].vaziat_makanerafte[2]) == 0)
        {
            strcpy(karbaradi[n].vaziat_makanerafte[2], "Location status not recorded");
        }
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\t    On %s\12\t\t\t\t\t    palce name=%s\12\n\t\t\t\t\t    location status=%s", karbaradi[n].timemakanrafte[2], karbaradi[n].makanrafte[2], karbaradi[n].vaziat_makanerafte[2]);
    }

    if (strlen(karbaradi[n].makanrafte[3]) != 0)
    {
        if (strlen(karbaradi[n].vaziat_makanerafte[3]) == 0)
        {
            strcpy(karbaradi[n].vaziat_makanerafte[3], "Location status not recorded");
        }
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\t    On %s\12\t\t\t\t\t    palce name=%s\12\n\t\t\t\t\t    location status=%s", karbaradi[n].timemakanrafte[3], karbaradi[n].makanrafte[3], karbaradi[n].vaziat_makanerafte[3]);
    }
    if (strlen(karbaradi[n].makanrafte[4]) != 0)
    {
        if (strlen(karbaradi[n].vaziat_makanerafte[4]) == 0)
        {
            strcpy(karbaradi[n].vaziat_makanerafte[4], "Location status not recorded");
        }
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\t    On %s\12\t\t\t\t\t    palce name=%s\12\n\t\t\t\t\t     location status=%s", karbaradi[n].timemakanrafte[4], karbaradi[n].makanrafte[4], karbaradi[n].vaziat_makanerafte[4]);
    }
    if (strlen(karbaradi[n].makanrafte[5]) != 0)
    {
        if (strlen(karbaradi[n].vaziat_makanerafte[5]) == 0)
        {
            strcpy(karbaradi[n].vaziat_makanerafte[5], "Location status not recorded");
        }
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\t     On %s\12\t\t\t\t\t    palce name=%s\12\n\t\t\t\t\    location status=%s", karbaradi[n].timemakanrafte[5], karbaradi[n].makanrafte[5], karbaradi[n].vaziat_makanerafte[5]);
    }
    if (strlen(karbaradi[n].makanrafte[6]) != 0)
    {
        if (strlen(karbaradi[n].vaziat_makanerafte[6]) == 0)
        {
            strcpy(karbaradi[n].vaziat_makanerafte[6], "Location status not recorded");
        }
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\t     On %s\12\t\t\t\t\t     palce name=%s\12\n\t\t\t\t\t     location status=%s", karbaradi[n].timemakanrafte[6], karbaradi[n].makanrafte[6], karbaradi[n].vaziat_makanerafte[6]);
    }
    if (strlen(karbaradi[n].makanrafte[7]) != 0)
    {
        if (strlen(karbaradi[n].vaziat_makanerafte[7]) == 0)
        {
            strcpy(karbaradi[n].vaziat_makanerafte[7], "Location status not recorded");
        }
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\t     On %s\12\t\t\t\t\t     palce name=%s\12\n\t\t\t\t\t     location status=%s", karbaradi[n].timemakanrafte[7], karbaradi[n].makanrafte[7], karbaradi[n].vaziat_makanerafte[7]);
    }
    if (strlen(karbaradi[n].makanrafte[8]) != 0)
    {
        if (strlen(karbaradi[n].vaziat_makanerafte[8]) == 0)
        {
            strcpy(karbaradi[n].vaziat_makanerafte[8], "Location status not recorded");
        }
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\t     On %s\12\t\t\t\t\t    palce name=%s\12\n\t\t\t\t\t     location status=%s", karbaradi[n].timemakanrafte[8], karbaradi[n].makanrafte[8], karbaradi[n].vaziat_makanerafte[8]);
    }
    if (strlen(karbaradi[n].makanrafte[9]) != 0)
    {
        if (strlen(karbaradi[n].vaziat_makanerafte[9]) == 0)
        {
            strcpy(karbaradi[n].vaziat_makanerafte[9], "Location status not recorded");
        }
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\t      On %s\12\t\t\t\t\t     palce name=%s\12\n\t\t\t\t\t     location status=%s", karbaradi[n].timemakanrafte[9], karbaradi[n].makanrafte[9], karbaradi[n].vaziat_makanerafte[9]);
    }
    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");

    Sleep(5000);

    normal_user_section(n);
}
/////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
void Add_places_that_are_gone(int n)
{
    char place[100];
    system("cls");
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf(" Enter place:");

    fflush(stdin);
    gets(place);
    if (strlen(place) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        Add_places_that_are_gone(n);
    }
    for (i = 0; i < 100; i++)
    {
        if (strcmp(place, sahebin[i].name_of_shop) == 0)
        {
            time_t k = time(NULL);
            karbaradi[n].sanie_makanrafte[karbaradi[n].tedadmakanrafte] = k;
            sahebin[i].sanie_rafte[sahebin[i].tedadafradrafte] = k;
            struct tm *locall = localtime(&k);
            strcpy(karbaradi[n].timemakanrafte[karbaradi[n].tedadmakanrafte], asctime(locall));
            strcpy(karbaradi[n].makanrafte[karbaradi[n].tedadmakanrafte], place);
            strcpy(karbaradi[n].vaziat_makanerafte[karbaradi[n].tedadmakanrafte], sahebin[i].location_status);
            strcpy(sahebin[i].kasike_rafte[sahebin[i].tedadafradrafte], karbaradi[n].NationalCode);
            strcpy(sahebin[i].zamanraft[sahebin[i].tedadafradrafte], asctime(locall));
            sahebin[i].sanie_rafte[sahebin[i].tedadafradrafte] = k;
            sahebin[i].tedadafradrafte++;
            karbaradi[n].tedadmakanrafte++;
            break;
        }
    }
    if (i == 100)
    {
        printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again this shop name  is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        Add_places_that_are_gone(n);
    }
    normal_user_section(n);
}
///////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
void Meeting_history(int n)
{
    system("cls");
    if (strlen(karbaradi[n].molaghatshavande[0]) != 0)
    {
        for (i = 0; i < 100; i++)
        {
            if (strcmp(karbaradi[n].molaghatshavande[0], karbaradi[i].NationalCode) == 0)
            {
                printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
                printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\tfirst name=%s\12\n\t\t\t\t\thealth code=%c", karbaradi[n].timemolaghat[0], karbaradi[i].firstname, karbaradi[i].kodsalamati[karbaradi[i].id - 1]);
            }
        }
    }
    if (strlen(karbaradi[n].molaghatshavande[1]) != 0)
    {
        for (i = 0; i < 100; i++)
        {
            if (strcmp(karbaradi[n].molaghatshavande[1], karbaradi[i].NationalCode) == 0)
            {
                printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
                printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\tfirst name=%s\n\12\t\t\t\t\thealth code=%c", karbaradi[n].timemolaghat[1], karbaradi[i].firstname, karbaradi[i].kodsalamati[karbaradi[i].id - 1]);
            }
        }
    }
    if (strlen(karbaradi[n].molaghatshavande[2]) != 0)
    {
        for (i = 0; i < 100; i++)
        {
            if (strcmp(karbaradi[n].molaghatshavande[2], karbaradi[i].NationalCode) == 0)
            {
                printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
                printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\tfirst name=%s\n\12\t\t\t\t\thealth code=%c", karbaradi[n].timemolaghat[2], karbaradi[i].firstname, karbaradi[i].kodsalamati[karbaradi[i].id - 1]);
            }
        }
    }
    if (strlen(karbaradi[n].molaghatshavande[3]) != 0)
    {
        for (i = 0; i < 100; i++)
        {
            if (strcmp(karbaradi[n].molaghatshavande[3], karbaradi[i].NationalCode) == 0)
            {
                printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
                printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\tfirst name=%s\n\12\t\t\t\t\thealth code=%c", karbaradi[n].timemolaghat[3], karbaradi[i].firstname, karbaradi[i].kodsalamati[karbaradi[i].id - 1]);
            }
        }
    }
    if (strlen(karbaradi[n].molaghatshavande[4]) != 0)
    {
        for (i = 0; i < 100; i++)
        {
            if (strcmp(karbaradi[n].molaghatshavande[4], karbaradi[i].NationalCode) == 0)
            {
                printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
                printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\tfirst name=%s\n\12\t\t\t\t\thealth code=%c", karbaradi[n].timemolaghat[4], karbaradi[i].firstname, karbaradi[i].kodsalamati[karbaradi[i].id - 1]);
            }
        }
    }
    if (strlen(karbaradi[n].molaghatshavande[5]) != 0)
    {
        for (i = 0; i < 100; i++)
        {
            if (strcmp(karbaradi[n].molaghatshavande[5], karbaradi[i].NationalCode) == 0)
            {
                printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
                printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\tfirst name=%s\n\12\t\t\t\t\thealth code=%c", karbaradi[n].timemolaghat[5], karbaradi[i].firstname, karbaradi[i].kodsalamati[karbaradi[i].id - 1]);
            }
        }
    }
    if (strlen(karbaradi[n].molaghatshavande[6]) != 0)
    {
        for (i = 0; i < 100; i++)
        {
            if (strcmp(karbaradi[n].molaghatshavande[6], karbaradi[i].NationalCode) == 0)
            {
                printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
                printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\tfirst name=%s\12\t\t\t\t\thealth code=%c", karbaradi[n].timemolaghat[6], karbaradi[i].firstname, karbaradi[i].kodsalamati[karbaradi[i].id - 1]);
            }
        }
    }
    if (strlen(karbaradi[n].molaghatshavande[7]) != 0)
    {
        for (i = 0; i < 100; i++)
        {
            if (strcmp(karbaradi[n].molaghatshavande[7], karbaradi[i].NationalCode) == 0)
            {
                printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
                printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\tfirst name=%s\n\12\t\t\t\t\thealth code=%c", karbaradi[n].timemolaghat[7], karbaradi[i].firstname, karbaradi[i].kodsalamati[karbaradi[i].id - 1]);
            }
        }
    }
    if (strlen(karbaradi[n].molaghatshavande[8]) != 0)
    {
        for (i = 0; i < 100; i++)
        {
            if (strcmp(karbaradi[n].molaghatshavande[8], karbaradi[i].NationalCode) == 0)
            {
                printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
                printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\tfirst name=%s\n\12\t\t\t\t\thealth code=%c", karbaradi[n].timemolaghat[8], karbaradi[i].firstname, karbaradi[i].kodsalamati[karbaradi[i].id - 1]);
            }
        }
    }
    if (strlen(karbaradi[n].molaghatshavande[9]) != 0)
    {
        for (i = 0; i < 100; i++)
        {
            if (strcmp(karbaradi[n].molaghatshavande[9], karbaradi[i].NationalCode) == 0)
            {
                printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
                printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\tfirst name=%s\12\n\t\t\t\t\thealth code=%c", karbaradi[n].timemolaghat[9], karbaradi[i].firstname, karbaradi[i].kodsalamati[karbaradi[i].id - 1]);
            }
        }
    }

    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    Sleep(5000);
    normal_user_section(n);
}
///////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
void Record_appointments_with_other_people(int n)
{
    system("cls");
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf(" Enter National Code:");

    fflush(stdin);
    gets(NationalCode);
    if (strlen(NationalCode) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        Record_appointments_with_other_people(n);
    }
    for (i = 0; i < 100; i++)
    {
        if (strcmp(karbaradi[i].NationalCode, NationalCode) == 0)
        {
            time_t k = time(NULL);
            karbaradi[i].sanie_molaghat[karbaradi[i].tedadmolaghat] = k;
            struct tm *locall = localtime(&k);
            strcpy(karbaradi[i].timemolaghat[karbaradi[i].tedadmolaghat], asctime(locall));
            strcpy(karbaradi[i].molaghatshavande[karbaradi[i].tedadmolaghat], karbaradi[n].NationalCode);
            karbaradi[i].tedadmolaghat++;
            break;
        }
    }
    if (i == 100)
    {
        printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again this NationalCode  is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        Record_appointments_with_other_people(n);
    }
    time_t k = time(NULL);
    karbaradi[n].sanie_molaghat[karbaradi[n].tedadmolaghat] = k;
    struct tm *locall = localtime(&k);
    strcpy(karbaradi[n].timemolaghat[karbaradi[n].tedadmolaghat], asctime(locall));
    strcpy(karbaradi[n].molaghatshavande[karbaradi[n].tedadmolaghat], NationalCode);
    karbaradi[n].tedadmolaghat++;

    normal_user_section(n);
}
//////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
void Visit_nearby_hospitals_and_medical_centers(int n)
{
    char shahre[100];
    char mantaghe[100];
    system("cls");

    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf(" Enter City Name:");

    fflush(stdin);
    gets(shahre);
    if (strlen(shahre) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        Visit_nearby_hospitals_and_medical_centers(n);
    }

    for (i = 0; i < 100; i++)
    {
        if (strcmp(shahre, marakezdarmani[i].City_Medical_Centers) == 0)
        {
            namayesh_bimarestan(i, n);
        }
    }
    if (i == 100)
    {
        printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again this City name is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        Visit_nearby_hospitals_and_medical_centers(n);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
void namayesh_bimarestan(int m, int n)
{
    system("cls");
    for (i = 0; i < 100; i++)
    {
        if (strcmp(marakezdarmani[m].City_Medical_Centers, marakezdarmani[i].City_Medical_Centers) == 0)
        {
            printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
            printf(sorkh "\12\t\t\t\t\t   Medical Center Area=%s\n\12\t\t\t\t\t   Medical Center name=%s", marakezdarmani[i].Medical_Center_Area, marakezdarmani[i].nam_markazdarmani);
        }
    }
    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    Sleep(5000);
    normal_user_section(n);
}
//////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
void View_health_history_entry_history(int n)
{
    system("cls");
    if (karbaradi[n].timekod[0][0] != NULL)
    {
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\t your health code was %c", karbaradi[n].timekod[0], karbaradi[n].kodsalamati[0]);
    }
    if (karbaradi[n].timekod[1][0] != NULL)
    {
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\t your health code was %c", karbaradi[n].timekod[1], karbaradi[n].kodsalamati[1]);
    }
    if (karbaradi[n].timekod[2][0] != NULL)
    {
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\t your health code was %c", karbaradi[n].timekod[2], karbaradi[n].kodsalamati[2]);
    }
    if (karbaradi[n].timekod[3][0] != NULL)
    {
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\t your health code was %c", karbaradi[n].timekod[3], karbaradi[n].kodsalamati[3]);
    }
    if (karbaradi[n].timekod[4][0] != NULL)
    {
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\t your health code was %c", karbaradi[n].timekod[4], karbaradi[n].kodsalamati[4]);
    }
    if (karbaradi[n].timekod[5][0] != NULL)
    {
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\t your health code was %c", karbaradi[n].timekod[5], karbaradi[n].kodsalamati[5]);
    }
    if (karbaradi[n].timekod[6][0] != NULL)
    {
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\t your health code was %c", karbaradi[n].timekod[6], karbaradi[n].kodsalamati[6]);
    }
    if (karbaradi[n].timekod[7][0] != NULL)
    {
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\t your health code was %c", karbaradi[n].timekod[7], karbaradi[n].kodsalamati[7]);
    }
    if (karbaradi[n].timekod[8][0] != NULL)
    {
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\t your health code was %c", karbaradi[n].timekod[8], karbaradi[n].kodsalamati[8]);
    }
    if (karbaradi[n].timekod[9][0] != NULL)
    {
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t\tOn %s\12\t\t\t\t\t your health code was %c", karbaradi[n].timekod[9], karbaradi[n].kodsalamati[9]);
    }
    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    Sleep(5000);
    normal_user_section(n);
}

////////////////////////////////////////////////////////////////Editing information
////////////////////////////////////////////////////////////////Editing infEditing information]
/////////////////////////////////////////////////////////////////Editing information
void Editing_information(n)
{
    system("cls");
    printf(sorkh);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4   your information  \4\4\4\4\4\4\4\4\4\4\n\n\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your Firstname is:%s\n\n", karbaradi[n].firstname);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your lastname is:%s\n\n", karbaradi[n].lastname);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your NationalCode is:%s\n\n", karbaradi[n].NationalCode);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your username is:%s\n\n", karbaradi[n].usrename);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your email is:%s\n\n", karbaradi[n].email);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your Weight is:%s\n\n", karbaradi[n].weight);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your Height is:%s\n\n", karbaradi[n].Height);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your Age is:%s\n\n", karbaradi[n].Age);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your bloodtype is:%s\n\n", karbaradi[n].bloodtype);
    Sleep(5000);
    edit_karbar_adi(n);
}
////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
void edit_karbar_adi(int n)
{
    char vorood_edit_karbar_adi[100];
    system("cls");
    printf(abi);
    printf(sorkh "\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 You can edit your information \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf(abi);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 1-edit  Firstname \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 2-edit  lastname \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 3-edit  NationalCode \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 4-edit  username \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 5-edit  email \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 6-edit  Weight \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 7-edit  Height \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 8-edit  Age \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 9-edit  bloodtype \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 10-edit your password \4\4\4\4\4\4\4\4\4\4\4\n\n\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 Enter your choise:");
    gets(vorood_edit_karbar_adi);
    if (strcmp(vorood_edit_karbar_adi, "1") != 0 && strcmp(vorood_edit_karbar_adi, "2") != 0 && strcmp(vorood_edit_karbar_adi, "3") != 0 && strcmp(vorood_edit_karbar_adi, "4") != 0 && strcmp(vorood_edit_karbar_adi, "5") != 0 && strcmp(vorood_edit_karbar_adi, "6") != 0 && strcmp(vorood_edit_karbar_adi, "7") != 0 && strcmp(vorood_edit_karbar_adi, "8") != 0 && strcmp(vorood_edit_karbar_adi, "9") != 0 && strcmp(vorood_edit_karbar_adi, "10") != 0 && strcmp(vorood_edit_karbar_adi, "edit  Firstname") != 0 && strcmp(vorood_edit_karbar_adi, "edit  lastname") != 0 && strcmp(vorood_edit_karbar_adi, "1") != 0 && strcmp(vorood_edit_karbar_adi, "edit  NationalCode") != 0 && strcmp(vorood_edit_karbar_adi, "edit  username") != 0 && strcmp(vorood_edit_karbar_adi, "edit  email") != 0 && strcmp(vorood_edit_karbar_adi, "edit  Weight") != 0 && strcmp(vorood_edit_karbar_adi, "edit  Height") != 0 && strcmp(vorood_edit_karbar_adi, "edit  Age") != 0 && strcmp(vorood_edit_karbar_adi, "edit  bloodtype") != 0 && strcmp(vorood_edit_karbar_adi, "edit your password") != 0)
    {
        puts(sorkh "\n\n\t\t\t\t\4\7\4\4\4\4\4\4\4\4\4\4 please try again \4\4\4\4\4\4\4\4\4\4\4\n\n");
        Sleep(500);
        printf(abi);
        edit_karbar_adi(n);
    }
    if (strcmp(vorood_edit_karbar_adi, "edit  Firstname") == 0 || strcmp(vorood_edit_karbar_adi, "1") == 0)
    {
        edit_firstname_karbaradi(n);
    }
    if (strcmp(vorood_edit_karbar_adi, "edit  lastname") == 0 || strcmp(vorood_edit_karbar_adi, "2") == 0)
    {
        edit_lastname_karbaradi(n);
    }
    if (strcmp(vorood_edit_karbar_adi, "edit  NationalCode") == 0 || strcmp(vorood_edit_karbar_adi, "3") == 0)
    {
        edit_NationalCode_karbaradi(n);
    }
    if (strcmp(vorood_edit_karbar_adi, "edit  username") == 0 || strcmp(vorood_edit_karbar_adi, "4") == 0)
    {
        edit_username_karbaradi(n);
    }
    if (strcmp(vorood_edit_karbar_adi, "edit  email") == 0 || strcmp(vorood_edit_karbar_adi, "5") == 0)
    {
        edit_email_karbaradi(n);
    };
    if (strcmp(vorood_edit_karbar_adi, "edit  Weight") == 0 || strcmp(vorood_edit_karbar_adi, "6") == 0)
    {
        edit_Weight_karbaradi(n);
    }
    if (strcmp(vorood_edit_karbar_adi, "edit  Height") == 0 || strcmp(vorood_edit_karbar_adi, "7") == 0)
    {
        edit_Height_karbaradi(n);
    }
    if (strcmp(vorood_edit_karbar_adi, "edit  Age ") == 0 || strcmp(vorood_edit_karbar_adi, "8") == 0)
    {
        edit_Age_karbaradi(n);
    }
    if (strcmp(vorood_edit_karbar_adi, "your bloodtype") == 0 || strcmp(vorood_edit_karbar_adi, "9") == 0)
    {
        edit_bloodtype_karbaradi(n);
    }
    if (strcmp(vorood_edit_karbar_adi, "edit your password") == 0 || strcmp(vorood_edit_karbar_adi, "10") == 0)
    {
        edit_password_karbaradi(n);
    }
}
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////
void edit_password_karbaradi(int n)
{
    char repeat_the_password[100];
    system("cls");
    do
    {
        do
        {
            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");

            printf("  your new password (Mandatory):");

            fflush(stdin);
            int i = 0; // kar
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    karbaradi[n].password[i] = ch1;
                    karbaradi[n].password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(karbaradi[n].password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(karbaradi[n].password) == 0);
        do
        {

            printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  repeat the new password (Mandatory):");

            fflush(stdin);

            int i = 0;
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    repeat_the_password[i] = ch1;
                    repeat_the_password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    repeat_the_password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(repeat_the_password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
                printf(abi);
            }
        } while (strlen(repeat_the_password) == 0);
        if (strcmp(repeat_the_password, karbaradi[n].password) != 0 || strlen(repeat_the_password) != strlen(karbaradi[n].password))
        {

            printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your password is not the same as repeating it \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(karbaradi[n].password, repeat_the_password) != 0 || strlen(repeat_the_password) != strlen(karbaradi[n].password));
    normal_user_section(n);
}
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
void edit_bloodtype_karbaradi(int n)
{
    system("cls");
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your new blood type (Optional):");

    fflush(stdin);
    gets(karbaradi[n].bloodtype);
    normal_user_section(n);
}
/////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
void edit_Age_karbaradi(int n)
{
    system("cls");

    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your new Age (Optional):");

    fflush(stdin);
    gets(karbaradi[n].Age);
    normal_user_section(n);
}
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
/////////////////////////////////////////////////////
void edit_Height_karbaradi(int n)
{
    system("cls");
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your new Height (Optional):");

    fflush(stdin);
    gets(karbaradi[n].Height);
    normal_user_section(n);
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
void edit_Weight_karbaradi(int n)
{
    system("cls");
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your new Weight (Optional):");

    fflush(stdin);
    gets(karbaradi[n].weight);
    normal_user_section(n);
}
///////////////////////////////////////////////////
///////////////////////////////////////////////////////////
void edit_firstname_karbaradi(int n)
{
    system("cls");
    printf("\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your new First name (Mandatory):");

    fflush(stdin);

    gets(karbaradi[n].firstname);
    if (strlen(karbaradi[n].firstname) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n\n");
        Sleep(500);
        printf(abi);
        edit_firstname_karbaradi(n);
    }
    normal_user_section(n);
}
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
void edit_NationalCode_karbaradi(int n)
{
    system("cls");

    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your new National Code (Mandatory):");

    fflush(stdin);
    gets(karbaradi[n].NationalCode);
    if (strlen(karbaradi[n].NationalCode) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        edit_NationalCode_karbaradi(n);
    }
    normal_user_section(n);
}
/////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
void edit_username_karbaradi(int n)
{

    system("cls");

    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your user name (Mandatory):");

    fflush(stdin);
    gets(karbaradi[n].usrename);
    if (strlen(karbaradi[n].usrename) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        edit_username_karbaradi(n);
    }
    normal_user_section(n);
}
/////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
void edit_email_karbaradi(int n)
{
    system("cls");

    printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your new email (Mandatory):");
    fflush(stdin);
    gets(karbaradi[n].email);
    if (strlen(karbaradi[n].email) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
        Sleep(500);
        printf(abi);
        edit_email_karbaradi(n);
    }
    normal_user_section(n);
}
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
void edit_lastname_karbaradi(int n)
{
    system("cls");

    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your new Last name (Mandatory):");

    fflush(stdin);
    gets(karbaradi[n].lastname);
    if (strlen(karbaradi[n].lastname) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        edit_lastname_karbaradi(n);
    }
    normal_user_section(n);
}
//////////////////////////////////////////////////////////Health status registration(n)
//////////////////////////////////////////////////////////Health status registration(n)
////////////////////////////////////////////////////////////Health status registration(n)
void Health_status_registration(int n)
{
    if (karbaradi[n].kodsalamati[karbaradi[n].id - 1] == '4')
    {
        system("cls");
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        printf(sorkh "\12\t\t\t\t     Unfortunately,Your health code is 4 \n\12\t\t\t\t\t       You can not test");
        printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(5000);
        normal_user_section(n);
    }
    char javab1[100];
    int counter;
    system("cls");

    printf(sorkh "\12\12\12\t\t\4\4\4\4\4\ Please indicate any of the signs you have with the answer Yes or No     \4\4\4\4\4\n\n\n\n\n\n");
    printf(abi);
    do
    {
        do
        {

            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  Dry coughs in large numbers:");

            fflush(stdin);
            gets(javab1);
            if (strcmp(javab1, "Yes") == 0)
            {
                counter += 30;
            }
            if (strlen(javab1) == 0)
            {
                printf(sorkh "  \n \7 \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(javab1) == 0);
        if (strcmp(javab1, "Yes") != 0 && strcmp(javab1, "No") != 0)
        {
            printf(sorkh "  \n  \7\t\t\t\4\4\4\4\4\4\4\4\4\4\4  You can only enter yes or no  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(javab1, "Yes") != 0 && strcmp(javab1, "No") != 0);
    javab1[0] = '\0';
    do
    {

        do
        {

            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  Fever above 37 degrees:");

            fflush(stdin);
            gets(javab1);
            if (strcmp(javab1, "Yes") == 0)
            {
                counter += 20;
            }
            if (strlen(javab1) == 0)
            {
                printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(javab1) == 0);
        if (strcmp(javab1, "Yes") != 0 && strcmp(javab1, "No") != 0)
        {
            printf(sorkh "  \n  \7\t\t\t\4\4\4\4\4\4\4\4\4\4\4  You can only enter yes or no  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(javab1, "Yes") != 0 && strcmp(javab1, "No") != 0);
    javab1[0] = '\0';
    do
    {

        do
        {

            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  Shortness of breath:");

            fflush(stdin);
            gets(javab1);
            if (strcmp(javab1, "Yes") == 0)
            {
                counter += 20;
            }
            if (strlen(javab1) == 0)
            {
                printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(javab1) == 0);
        if (strcmp(javab1, "Yes") != 0 && strcmp(javab1, "No") != 0)
        {
            printf(sorkh "  \n  \7\t\t\t\4\4\4\4\4\4\4\4\4\4\4  You can only enter yes or no  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(javab1, "Yes") != 0 && strcmp(javab1, "No") != 0);
    javab1[0] = '\0';
    do
    {

        do
        {

            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  Pain and bruising:");

            fflush(stdin);
            gets(javab1);
            if (strcmp(javab1, "Yes") == 0)
            {
                counter += 15;
            }
            if (strlen(javab1) == 0)
            {
                printf(sorkh "  \n \7\t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(javab1) == 0);
        if (strcmp(javab1, "Yes") != 0 && strcmp(javab1, "No") != 0)
        {
            printf(sorkh "  \n  \7\t\t\t\4\4\4\4\4\4\4\4\4\4\4  You can only enter yes or no  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(javab1, "Yes") != 0 && strcmp(javab1, "No") != 0);
    javab1[0] = '\0';
    do
    {

        do
        {

            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  Sore throat:");

            fflush(stdin);
            gets(javab1);
            if (strcmp(javab1, "Yes") == 0)
            {
                counter += 15;
            }
            if (strlen(javab1) == 0)
            {
                printf(sorkh "  \n \7\t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(javab1) == 0);
        if (strcmp(javab1, "Yes") != 0 && strcmp(javab1, "No") != 0)
        {
            printf(sorkh "  \n  \7\t\t\t\4\4\4\4\4\4\4\4\4\4\4  You can only enter yes or no  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(javab1, "Yes") != 0 && strcmp(javab1, "No") != 0);
    javab1[0] = '\0';
    /////////////////////////////
    /////////////////////////////
    system("cls");
    if (counter >= 0 && counter < 16)
    {
        printf(sorkh "  \n\n\n\n  \t\t            \4\4\4\4\4\4\4\4\4\4\4  You are in the group of healthy people   \4\4\4\4\4\4\4\4\4\4\4\n");
        printf("  \n  \t\t                 \4\4\4\4\4\4\4\4\4\4\4     Your health code is 1       \4\4\4\4\4\4\4\4\4\4\4\n");
        printf(abi);
        time_t k = time(NULL);
        karbaradi[n].sanie_cod[karbaradi[n].id] = k;
        struct tm *locall = localtime(&k);
        strcpy(karbaradi[n].timekod[karbaradi[n].id], asctime(locall));
        karbaradi[n].kodsalamati[karbaradi[n].id] = '1';
        karbaradi[n].id++;
    }

    if (counter > 15 && counter < 51)
    {
        printf(sorkh "  \n\n\n\n  \t\t            \4\4\4\4\4\4\4\4\4\4\4   You are in the group of people suspected of having the disease   \4\4\4\4\4\4\4\4\4\4\4\n");
        printf("  \n  \t\t                 \4\4\4\4\4\4\4\4\4\4\4     Your health code is 2       \4\4\4\4\4\4\4\4\4\4\4\n");
        printf(abi);
        time_t k = time(NULL);
        karbaradi[n].sanie_cod[karbaradi[n].id] = k;
        struct tm *locall = localtime(&k);
        strcpy(karbaradi[n].timekod[karbaradi[n].id], asctime(locall));
        karbaradi[n].kodsalamati[karbaradi[n].id] = '2';
        karbaradi[n].id++;
    }

    if (counter > 50 && counter < 76)
    {
        printf(sorkh "  \n\n\n\n  \t\t            \4\4\4\4\4\4\4\4\4\4\4   You are in a very suspicious group of people   \4\4\4\4\4\4\4\4\4\4\4\n");
        printf("  \n  \t\t                 \4\4\4\4\4\4\4\4\4\4\4     Your health code is 3       \4\4\4\4\4\4\4\4\4\4\4\n");
        printf(abi);
        time_t k = time(NULL);
        karbaradi[n].sanie_cod[karbaradi[n].id] = k;
        struct tm *locall = localtime(&k);
        strcpy(karbaradi[n].timekod[karbaradi[n].id], asctime(locall));
        karbaradi[n].kodsalamati[karbaradi[n].id] = '3';
        karbaradi[n].id++;
        avaz_be_3(n);
    }

    if (counter > 75 && counter <= 100)
    {
        printf(sorkh "  \n\n\n\n  \t\t            \4\4\4\4\4\4\4\4\4\4\4   You are in the group of sick people   \4\4\4\4\4\4\4\4\4\4\4\n");
        printf("  \n  \t\t                 \4\4\4\4\4\4\4\4\4\4\4     Your health code is 4       \4\4\4\4\4\4\4\4\4\4\4\n");
        printf(abi);
        time_t k = time(NULL);
        karbaradi[n].sanie_cod[karbaradi[n].id] = k;
        struct tm *locall = localtime(&k);
        strcpy(karbaradi[n].timekod[karbaradi[n].id], asctime(locall));
        karbaradi[n].kodsalamati[karbaradi[n].id] = '4';
        karbaradi[n].id++;
        makan(n);
        avaz_be_4(n);
    }
    Sleep(4000);
    Return_to_the_normal_user_section(n);
}
////////////////////////////////////
///////////////////////////////////////
void makan(int n)
{
    time_t k = time(NULL);
    for (i = 0; i < 100; i++)
    {
        int j;
        for (j = 0; j < 100; j++)
        {
            if (strcmp(karbaradi[n].makanrafte[i], sahebin[j].name_of_shop) == 0 && k - karbaradi[n].sanie_makanrafte[i] <= 604800)
            {
                strcpy(sahebin[j].location_status, "Red");
                sahebin[j].sanie_sorkh_shodan = k;
            }
        }
    }
}
//////////////////////////////////////////
void avaz_be_3(int n)
{
    int x;
    time_t k = time(NULL);
    for (x = 0; x <= tedadkarbaradi; x++)
    {
        int j;
        for (j = 0; j <= tedadkarbaradi; j++)
        {
            if (strcmp(karbaradi[n].molaghatshavande[x], karbaradi[j].NationalCode) == 0 && k - karbaradi[n].sanie_molaghat[x] <= 604800)
            {
                if (karbaradi[j].id == 0)
                {
                    time_t q1 = time(NULL);
                    karbaradi[j].sanie_cod[karbaradi[j].id] = q1;
                    struct tm *locall1 = localtime(&q1);
                    strcpy(karbaradi[j].timekod[karbaradi[j].id], asctime(locall1));
                    karbaradi[j].kodsalamati[karbaradi[j].id] = '2';
                    karbaradi[j].id++;
                }
                if (karbaradi[j].kodsalamati[karbaradi[j].id - 1] == '1')
                {
                    time_t q1 = time(NULL);
                    karbaradi[j].sanie_cod[karbaradi[j].id] = q1;
                    struct tm *locall1 = localtime(&q1);
                    strcpy(karbaradi[j].timekod[karbaradi[j].id], asctime(locall1));
                    karbaradi[j].kodsalamati[karbaradi[j].id] = '2';
                    karbaradi[j].id++;
                }
            }
        }
    }
}
////////////////////////////////
void avaz_be_4(int n)
{
    time_t k = time(NULL);
    for (i = 0; i <= tedadkarbaradi; i++)
    {
        int j;
        for (j = 0; j <= tedadkarbaradi; j++)
        {
            if (strcmp(karbaradi[n].molaghatshavande[i], karbaradi[j].NationalCode) == 0 && k - karbaradi[n].sanie_molaghat[i] <= 604800)
            {
                if (karbaradi[j].id == 0)
                {
                    time_t q1 = time(NULL);
                    karbaradi[j].sanie_cod[karbaradi[j].id] = q1;
                    struct tm *locall1 = localtime(&q1);
                    strcpy(karbaradi[j].timekod[karbaradi[j].id], asctime(locall1));
                    karbaradi[j].kodsalamati[karbaradi[j].id] = '3';
                    avaz_be_3(j);
                    karbaradi[j].id++;
                }
                if (karbaradi[j].kodsalamati[karbaradi[j].id - 1] == '2' || karbaradi[j].kodsalamati[karbaradi[j].id - 1] == '1')
                {
                    time_t q1 = time(NULL);
                    karbaradi[j].sanie_cod[karbaradi[j].id] = q1;
                    struct tm *locall1 = localtime(&q1);
                    strcpy(karbaradi[j].timekod[karbaradi[j].id], asctime(locall1));
                    karbaradi[j].kodsalamati[karbaradi[j].id] = '3';
                    karbaradi[j].id++;
                    avaz_be_3(j);
                }
            }
        }
    }
}
//////////////////////////////////////////////
//////////////////////////////////////////
void Return_to_the_normal_user_section(int n)
{
    char vorood_return[100];
    system("cls");
    printf("\n\n\n\n\n\n\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  1-Return to the normal user section \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4          2-sign out           \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4          3-exit               \4\4\4\4\4\4\4\4\4\4\n\n\n\n\n\n\n");

    printf("\n\n\n\n\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4   Enter your choice:");
    gets(vorood_return);
    if (strcmp(vorood_return, "1") != 0 && strcmp(vorood_return, "Return to the normal user section") != 0 && strcmp(vorood_return, "2") != 0 && strcmp(vorood_return, "sign out") != 0 && strcmp(vorood_return, "3") != 0 && strcmp(vorood_return, "exit") != 0)
    {
        printf(sorkh "\n\n \7\t\t\t\t \4\4\4\4\4\4\4\4\4\4\4  Please try again \4\4\4\4\4\4\4\4\4\4\4 \n\n ");
        Sleep(500);
        printf(abi);
        Return_to_the_normal_user_section(n);
    }
    if (strcmp(vorood_return, "1") == 0 || strcmp(vorood_return, "Return to the normal user section") == 0)
    {
        normal_user_section(n);
    }
    if (strcmp(vorood_return, "2") == 0 || strcmp(vorood_return, "sign out") == 0)
    {
        voroodkarbar();
    }
    if (strcmp(vorood_return, "3") == 0 || strcmp(vorood_return, "exit ") == 0)
    {
        filesahebin2();
        filekarbaradi2();
        end();
        return 0;
    }
}
/////////////////////////////////////////////////////// passwordadmin
///////////////////////////////////////////////////// passwordadmin
/////////////////////////////////////////////////// passwordadmin
////////////////////////////////////////////////////// passwordadmin
void passwordadmin()
{
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4              ");
    printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b  your password:");
    fflush(stdin);
    i = 0;
    while (i != -1)
    {
        char ch1 = getch();
        if (ch1 != 13 && ch1 != 8)
        {
            password[i] = ch1;
            password[i + 1] = '\0';
            i++;

            printf("*");
        }
        if (ch1 == 13)
        {

            password[i] = '\0';
            i = -1;
        }
        if (ch1 == 8 && i != 0)
        {
            i--;
            printf("\b \b");
        }
    }

    if (strlen(password) == 0)
    {
        printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        printf(abi);
        Sleep(500);
        passwordadmin();
    }
    if (strcmp(password, admin.password) != 0 || strlen(password) != strlen(admin.password))
    {

        printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your password is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
        printf(abi);
        Sleep(500);
        passwordadmin();
    }
    /////////////////////////////////
    admin_section();
}
/////////////////////////////////////////////////////admin_section
//////////////////////////////////////////////admin_section
///////////////////////////////////////////////admin_section
void admin_section()
{
    filesahebin2();
    filekarbaradi2();
    char vorood_admin_section[100];
    system("cls");
    printf(sorkh "\n\n\n\n\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4        Admin section           \4\4\4\4\4\4\4\4\4\4\n\n");
    printf(abi);
    printf("\n\n\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4     1-editing information                    \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4     2-Enter the hospital                     \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4      3-View statistics                       \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4     4-Possibility to import improved peoplen \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4     5-View all app users                     \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4     6-Seeing the dead                        \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4     7-View all registered businesses         \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4     8-View all registered hospitals          \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4     9-sign out                               \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4      10-exit                                 \4\4\4\4\4\4\4\4\4\4\n\n");

    printf("\n\n\n\n\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4   Enter your choice:");
    gets(vorood_admin_section);
    if (strcmp(vorood_admin_section, "sign out") != 0 && strcmp(vorood_admin_section, "exit") != 0 && strcmp(vorood_admin_section, "editing information") != 0 && strcmp(vorood_admin_section, "3") != 0 && strcmp(vorood_admin_section, "1") != 0 && strcmp(vorood_admin_section, "2") != 0 && strcmp(vorood_admin_section, "4") != 0 && strcmp(vorood_admin_section, "5") != 0 && strcmp(vorood_admin_section, "6") != 0 && strcmp(vorood_admin_section, "7") != 0 && strcmp(vorood_admin_section, "8") != 0 && strcmp(vorood_admin_section, "9") != 0 && strcmp(vorood_admin_section, "10") != 0 && strcmp(vorood_admin_section, "11") != 0 && strcmp(vorood_admin_section, "Enter the hospital") != 0 && strcmp(vorood_admin_section, "View statistics") != 0 && strcmp(vorood_admin_section, "Possibility to import improved people") != 0 && strcmp(vorood_admin_section, "View all app users") != 0 && strcmp(vorood_admin_section, "Seeing the dead") != 0 && strcmp(vorood_admin_section, "View all registered businesses") != 0 && strcmp(vorood_admin_section, "View all registered hospitals") != 0)
    {
        printf(sorkh "  \n \7\t\t\t\t \4\4\4\4\4\4\4\4\4\4\4  Please try again \4\4\4\4\4\4\4\4\4\4\4 \n");
        Sleep(500);
        printf(abi);
        admin_section();
    }
    if (strcmp(vorood_admin_section, "1") == 0 || strcmp(vorood_admin_section, "editing information") == 0)
    {
        system("cls");
        printf(sorkh);
        printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4   your information  \4\4\4\4\4\4\4\4\4\4\n\n\n\n");
        printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your NationalCode is:%s\n\n", admin.NationalCode);
        printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your username is:%s\n\n", admin.username);
        printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your email is:%s\n\n", admin.email);
        Sleep(5000);
        edit_admin();
    }
    if (strcmp(vorood_admin_section, "Enter the hospital") == 0 || strcmp(vorood_admin_section, "2") == 0)
    {
        Enter_the_hospital();
    }
    if (strcmp(vorood_admin_section, "View statistics") == 0 || strcmp(vorood_admin_section, "3") == 0)
    {
        View_statistics();
    }
    if (strcmp(vorood_admin_section, "Possibility to import improved people") == 0 || strcmp(vorood_admin_section, "4") == 0)
    {
        Possibility_to_import_improved_people();
    }
    if (strcmp(vorood_admin_section, "View all app users") == 0 || strcmp(vorood_admin_section, "5") == 0)
    {
        View_all_app_users();
    }
    if (strcmp(vorood_admin_section, "Seeing the dead ") == 0 || strcmp(vorood_admin_section, "6") == 0)
    {
        Seeing_the_dead();
    }
    if (strcmp(vorood_admin_section, "View all registered businesses ") == 0 || strcmp(vorood_admin_section, "7") == 0)
    {
        View_all_registered_businesses();
    }
    if (strcmp(vorood_admin_section, "View all registered hospitals") == 0 || strcmp(vorood_admin_section, "8") == 0)
    {
        View_all_registered_hospitals();
    }
    if (strcmp(vorood_admin_section, "sign out") == 0 || strcmp(vorood_admin_section, "9") == 0)
    {
        voroodkarbar();
    }
    if (strcmp(vorood_admin_section, "exit ") == 0 || strcmp(vorood_admin_section, "10") == 0)
    {
        filesahebin2();
        filekarbaradi2();
        end();
        return 0;
    }
}
/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
void View_all_registered_hospitals()
{

    system("cls");
    for (i = 0; i < 100; i++)
    {
        if (strlen(marakezdarmani[i].City_Medical_Centers) != 0)
        {
            printf(sorkh "\n\12\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4");
            printf(sorkh "\n\12\t\t\t\t\tName of medical center=%s\n\n\12\t\t\t\t\tCity Medical Center=%s\n\n\12\t\t\t\t\tMedical Center Area=%s", marakezdarmani[i].nam_markazdarmani, marakezdarmani[i].City_Medical_Centers, marakezdarmani[i].Medical_Center_Area);
        }
    }
    printf(sorkh "\n\12\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    Sleep(5000);
    admin_section();
}
////////////////////////////////////////////////////////
///////////////////////////////////////////////////////
///////////////////////////////////////////////////////
void Seeing_the_dead()
{
    system("cls");
    for (i = 0; i < 100; i++)
    {
        if (strlen(foti[i].firstname) != 0)
        {
            printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
            printf(sorkh "\12\t\t\t\t\t\tFirst name=%s\n\12\t\t\t\t\t\tLast name=%s\n\12\t\t\t\t\t\tNational code=%s", foti[i].firstname, foti[i].lastname, foti[i].NationalCode);
        }
    }
    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    Sleep(5000);
    admin_section();
}
////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
void Possibility_to_import_improved_people()
{
    char voroodiadmin[100];
    system("cls");
    printf("  \n\n\n\n\n\n\n\n\12\12      \t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 1-Registration of user death \4\4\4\4\4\4\4\4\4\4\n\n\n \t\t\t\t\4\4\4\4\4\4\4\4\4\4\4   2-registration of improved user \4\4\4\4\4\4\4\4\4\4\n\n\n      ");
    printf("\12\12         \t\t\t\4\4\4\4\4\4\4\4\4\4\4  Enter your choice:");
    gets(voroodiadmin);
    if (strcmp(voroodiadmin, "Business owners") != 0 && strcmp(voroodiadmin, "normal user") != 0 && strcmp(voroodiadmin, "1") != 0 && strcmp(voroodiadmin, "2") != 0)
    {
        printf(sorkh "\n\n\7\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4  Please try again  \4\4\4\4\4\4\4\4\4\4\4");
        Sleep(500);
        printf(abi);
        Possibility_to_import_improved_people();
    }
    if (strcmp(voroodiadmin, "Registration of user death") == 0 || strcmp(voroodiadmin, "1") == 0)
    {
        Registration_of_user_death();
    }
    if (strcmp(voroodiadmin, "registration of improved user") == 0 || strcmp(voroodiadmin, "2") == 0)
    {
        registration_of_improved_user();
    }

} ///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
void registration_of_improved_user()
{
    system("cls");
    do
    {

        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf(" Enter user National code :");

        fflush(stdin);
        gets(NationalCode);
        if (strlen(NationalCode) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(NationalCode) == 0);

    for (i = 0; i < 100; i++)
    {
        if (strcmp(NationalCode, karbaradi[i].NationalCode) == 0)
        {
            time_t k = time(NULL);
            karbaradi[i].sanie_cod[karbaradi[i].id] = k;
            struct tm *locall = localtime(&k);
            strcpy(karbaradi[i].timekod[karbaradi[i].id], asctime(locall));
            karbaradi[i].kodsalamati[karbaradi[i].id] = '2';
            karbaradi[i].id++;
            break;
        }
    }
    if (i == 100)
    {
        printf(sorkh "\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your NationalCodef is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        registration_of_improved_user();
    }
    admin_section();
}
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
void Registration_of_user_death()
{
    system("cls");
    do
    {

        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf(" Enter user National code :");

        fflush(stdin);
        gets(NationalCode);
        if (strlen(NationalCode) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(NationalCode) == 0);
    for (i = 0; i < 100; i++)
    {
        if (strcmp(NationalCode, foti[i].NationalCode) == 0)
        {
            printf(sorkh "\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your NationalCodef is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
            Sleep(500);
            printf(abi);
            Registration_of_user_death();
        }
        for (i = 0; i < 100; i++)
        {
            if (strcmp(NationalCode, karbaradi[i].NationalCode) == 0)
            {
                int x = i;
                listfoti(i);
                hazfkarbar(x);
                break;
            }
        }
        if (i == 100)
        {
            printf(sorkh "\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your NationalCodef is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
            Sleep(500);
            printf(abi);
            Registration_of_user_death();
        }
    }
    admin_section();
}
////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
void Enter_the_hospital()
{
    system("cls");
    do
    {

        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf(" Enter City Name:");

        fflush(stdin);
        gets(marakezdarmani[tedadmarakez].City_Medical_Centers);
        if (strlen(marakezdarmani[tedadmarakez].City_Medical_Centers) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(marakezdarmani[tedadmarakez].City_Medical_Centers) == 0);
    do
    {

        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf(" Enter Name of the area:");

        fflush(stdin);
        gets(marakezdarmani[tedadmarakez].Medical_Center_Area);
        if (strlen(marakezdarmani[tedadmarakez].Medical_Center_Area) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(marakezdarmani[tedadmarakez].Medical_Center_Area) == 0);
    do
    {

        printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
        printf(" Enter Name of medical center:");

        fflush(stdin);
        gets(marakezdarmani[tedadmarakez].nam_markazdarmani);
        if (strlen(marakezdarmani[tedadmarakez].nam_markazdarmani) == 0)
        {
            printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strlen(marakezdarmani[tedadmarakez].nam_markazdarmani) == 0);
    tedadmarakez++;
    filemarakez2();
    admin_section();
}
//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////
void View_all_registered_businesses()
{
    system("cls");
    for (i = 0; i < 100; i++)
    {
        if (strlen(sahebin[i].usrename) != 0)
        {
            printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
            printf(sorkh "\12\t\t\t\t\t\tPlace name=%s\n\12\t\t\t\t\t    location_status=%s\n\12\t\t\t\t\tNational code of the shop owner=%s", sahebin[i].Shop_location_name, sahebin[i].location_status, sahebin[i].NationalCode);
        }
    }
    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    Sleep(5000);
    admin_section();
}
/////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
void View_all_app_users()
{
    system("cls");
    for (i = 0; i < 100; i++)
    {
        int j;
        for (j = 0; j < 100; j++)
        {
            if (karbaradi[i].kodsalamati[j + 1] == NULL)
            {
                break;
            }
        }
        if (strlen(karbaradi[i].firstname) != 0)
        {
            printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
            printf(sorkh "\12\t\t\t\t\t\tFirst name=%s\n\12\t\t\t\t\t\tLast name=%s\n\12\t\t\t\t\t\tNational Code=%s\n\12\t\t\t\t\t\tHealth Code=%c ", karbaradi[i].firstname, karbaradi[i].lastname, karbaradi[i].NationalCode, karbaradi[i].kodsalamati[j]);
        }
    }

    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    Sleep(5000);
    admin_section();
}
///////////////////////////////////////////////////////
////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
void View_statistics()
{
    system("cls");
    for (i = 0; i < 100; i++)
    {
        int j;
        for (j = 0; j < 100; j++)
        {
            if (karbaradi[i].kodsalamati[j] == '4')
            {
                printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
                printf(sorkh "\12\t\t\t\t\t\tFirst name=%s\n\12\t\t\t\t\t\tLast name=%s\n\12\t\t\t\t\t\tNational Code=%s\n\12\t\t\t\t Date of infection=on %s ", karbaradi[i].firstname, karbaradi[i].lastname, karbaradi[i].NationalCode, karbaradi[i].timekod);
                break;
            }
        }
    }
    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    Sleep(5000);
    admin_section();
}
////////////////////////////////////////////////edit_admin
////////////////////////////////////////////////edit_admin
////////////////////////////////////////////////edit_admin
////////////////////////////////////////////////edit_admin
void edit_admin()
{
    char vorood_edit_admin[100];
    system("cls");
    printf(abi);
    printf(sorkh "\n\n\n\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 You can edit your information \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf(abi);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 1-edit  NationalCode \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 2-edit  username \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 3-edit  email \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 4-edit your password \4\4\4\4\4\4\4\4\4\4\4\n\n\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 Enter your choise:");
    gets(vorood_edit_admin);
    if (strcmp(vorood_edit_admin, "1") != 0 && strcmp(vorood_edit_admin, "2") != 0 && strcmp(vorood_edit_admin, "3") != 0 && strcmp(vorood_edit_admin, "4") != 0 && strcmp(vorood_edit_admin, "1") != 0 && strcmp(vorood_edit_admin, "edit  NationalCode") != 0 && strcmp(vorood_edit_admin, "edit  username") != 0 && strcmp(vorood_edit_admin, "edit  email") != 0 && strcmp(vorood_edit_admin, "edit your password") != 0)
    {
        puts(sorkh "\t\t\t\t\4\7\4\4\4\4\4\4\4\4\4\4 please try again \4\4\4\4\4\4\4\4\4\4\4\n\n\n\n\n\n");
        Sleep(500);
        printf(abi);
        edit_admin();
    }
    if (strcmp(vorood_edit_admin, "edit  NationalCode") == 0 || strcmp(vorood_edit_admin, "1") == 0)
    {
        edit_admin_NationalCode();
    }
    if (strcmp(vorood_edit_admin, "edit  username") == 0 || strcmp(vorood_edit_admin, "2") == 0)
    {
        edit_admin_username();
    }
    if (strcmp(vorood_edit_admin, "edit  email") == 0 || strcmp(vorood_edit_admin, "3") == 0)
    {
        edit_admin_email();
    }
    if (strcmp(vorood_edit_admin, "edit your password") == 0 || strcmp(vorood_edit_admin, "4") == 0)
    {
        edit_admin_password();
    }
}
/////////////////////////////////////////////edit_admin.NationalCode();
void edit_admin_NationalCode()
{
    system("cls");

    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your new National Code (Mandatory):");

    fflush(stdin);
    gets(admin.NationalCode);
    if (strlen(admin.NationalCode) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        edit_admin_NationalCode();
    }
    fileadmin2();
    admin_section();
}
/////////////////////////////////edit_admin.username();
void edit_admin_username()
{
    system("cls");

    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your user name (Mandatory):");

    fflush(stdin);
    gets(admin.username);
    if (strlen(admin.username) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        edit_admin_username();
    }
    fileadmin2();
    admin_section();
}
///////////////////////////////////	edit_admin.email();
void edit_admin_email()
{
    system("cls");

    printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your new email (Mandatory):");
    fflush(stdin);
    gets(admin.email);
    if (strlen(admin.email) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
        Sleep(500);
        printf(abi);
        edit_admin_email();
    }
    fileadmin2();
    admin_section();
}
//////////////////////////////	edit_admin.password();
void edit_admin_password()
{
    char repeat_the_password[100];
    system("cls");
    do
    {
        do
        {
            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");

            printf("  your new password (Mandatory):");

            fflush(stdin);
            int i = 0; // kar
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    admin.password[i] = ch1;
                    admin.password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    admin.password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(admin.password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(admin.password) == 0);
        do
        {

            printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  repeat the new password (Mandatory):");

            fflush(stdin);

            int i = 0;
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    repeat_the_password[i] = ch1;
                    repeat_the_password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    repeat_the_password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(repeat_the_password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
                printf(abi);
            }
        } while (strlen(repeat_the_password) == 0);
        if (strcmp(repeat_the_password, admin.password) != 0 || strlen(repeat_the_password) != strlen(admin.password))
        {

            printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your password is not the same as repeating it \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(admin.password, repeat_the_password) != 0 || strlen(repeat_the_password) != strlen(admin.password));

    fileadmin2();
    admin_section();
}

////////////////////////////////
void passwordsahebin(int n)
{
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4              ");
    printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b  your password:");
    fflush(stdin);
    int i = 0;
    while (i != -1)
    {

        char ch1 = getch();
        if (ch1 != 13 && ch1 != 8)
        {
            password[i] = ch1;
            password[i + 1] = '\0';
            i++;

            printf("*");
        }
        if (ch1 == 13)
        {

            password[i] = '\0';
            i = -1;
        }
        if (ch1 == 8 && i != 0)
        {
            i--;
            printf("\b \b");
        }
    }

    if (strlen(password) == 0)
    {
        printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        passwordsahebin(n);
    }
    if (strcmp(password, sahebin[n].password) != 0 || strlen(password) != strlen(sahebin[n].password))
    {

        printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your password is incorrect \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        passwordsahebin(n);
    }
    sahebin_section(n);
}
//////////////////////////////////////////////
/////////////////////////////////////////////
////////////////////////////////////////////

void sahebin_section(int n)
{
    filesahebin2();
    filekarbaradi2();
    char vorood_sahebin_section[100];
    system("cls");
    printf(sorkh "\12\12\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4          Business owners section        \4\4\4\4\4\4\4\4\4\4\n\n");
    printf(abi);
    printf("\12\12\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4          1-View location status         \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4     2-Informing for disinfection        \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4         3-editing information           \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 4-Display the number of infected people \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4                5-sign out               \4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4                6-exit                   \4\4\4\4\4\4\4\4\4\4\n\n\n\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4   Enter your choice:");
    gets(vorood_sahebin_section);
    if (strcmp(vorood_sahebin_section, "View location status") != 0 && strcmp(vorood_sahebin_section, "Informing for disinfection  ") != 0 && strcmp(vorood_sahebin_section, "Display the number of infected people") != 0 && strcmp(vorood_sahebin_section, "4") != 0 && strcmp(vorood_sahebin_section, "sign out") != 0 && strcmp(vorood_sahebin_section, "exit") != 0 && strcmp(vorood_sahebin_section, "5") != 0 && strcmp(vorood_sahebin_section, "1") != 0 && strcmp(vorood_sahebin_section, "2") != 0 && strcmp(vorood_sahebin_section, "3") != 0 && strcmp(vorood_sahebin_section, "6") != 0 && strcmp(vorood_sahebin_section, "editing information") != 0)
    {
        printf(sorkh "  \n\n \7\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4    Please try again \4\4\4\4\4\4\4\4\4\4\4 \n\n");
        Sleep(500);
        printf(abi);
        sahebin_section(n);
    }
    if (strcmp(vorood_sahebin_section, "View location status") == 0 || strcmp(vorood_sahebin_section, "1") == 0)
    {
        View_location_status(n);
    }
    if (strcmp(vorood_sahebin_section, "Informing for disinfection ") == 0 || strcmp(vorood_sahebin_section, "2") == 0)
    {
        Informing_for_disinfection(n);
    }
    if (strcmp(vorood_sahebin_section, "editing information") == 0 || strcmp(vorood_sahebin_section, "3") == 0)
    {
        editing_information_sahebin(n);
    }
    if (strcmp(vorood_sahebin_section, "Display the number of infected people") == 0 || strcmp(vorood_sahebin_section, "4") == 0)
    {
        Display_the_number_of_infected_people(n);
    }
    if (strcmp(vorood_sahebin_section, "sign out") == 0 || strcmp(vorood_sahebin_section, "5") == 0)
    {
        voroodkarbar();
    }
    if (strcmp(vorood_sahebin_section, "exit") == 0 || strcmp(vorood_sahebin_section, "6") == 0)
    {
        filesahebin2();
        filekarbaradi2();
        end();
        return 0;
    }
} ////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////
void Display_the_number_of_infected_people(int n)
{
    system("cls");
    int counter2 = 0, counter3 = 0, counter4 = 0;
    for (i = 0; i < 100; i++)
    {
        int j;
        for (j = 0; j < 100; j++)
        {
            if (strcmp(sahebin[n].kasike_rafte[i], karbaradi[j].NationalCode) == 0)
            {
                if (karbaradi[j].kodsalamati[karbaradi[j].id - 1] == '2')
                {
                    counter2++;
                }
                if (karbaradi[j].kodsalamati[karbaradi[j].id - 1] == '3')
                {
                    counter3++;
                }
                if (karbaradi[j].kodsalamati[karbaradi[j].id - 1] == '4')
                {
                    counter4++;
                }
            }
        }
    }

    printf(sorkh "\n\n\n\n\n\n\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    printf(sorkh "\n\12\t\t\tNumber of people with health code 2 who have come to this place:%d\n\12\t\t\tNumber of people with health code 3 who have come to this place=%d\n\12\t\t\tNumber of people with health code 4 who have come to this place=%d", counter2, counter3, counter4);
    printf(sorkh "\n\12\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n");
    Sleep(5000);

    sahebin_section(n);
}
/////////////////////////////////////////////////////editing_information();
//////////////////////////////////////////////////////editing_information();
/////////////////////////////////////////////////////editing_information();
void editing_information_sahebin(int n)
{

    system("cls");
    printf(sorkh);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4   your information  \4\4\4\4\4\4\4\4\4\4\n\n\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your NationalCode is:%s\n\n", sahebin[n].NationalCode);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your username is:%s\n\n", sahebin[n].usrename);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your email is:%s\n\n", sahebin[n].email);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your shop name is:%s\n\n", sahebin[n].name_of_shop);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your City location is:%s\n\n", sahebin[n].City_location);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your Shop location name is:%s\n\n", sahebin[n].Shop_location_name);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 your Urban_area_of_the_place is:%s\n\n", sahebin[n].Urban_area_of_the_place);
    Sleep(5000);
    editing_sahebin_section(n);
}
////////////////////////////////
////////////////////////////////
void editing_sahebin_section(int n)
{
    system("cls");
    char vorood_editing_information[100];
    printf(abi);
    printf(sorkh "\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 You can edit your information \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf(abi);
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 1-edit  NationalCode \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 2-edit  username \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 3-edit  email \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 4-edit   City location \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 5-edit  Shop location name \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 6-edit  Urban area_of the place \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 7-edit your password \4\4\4\4\4\4\4\4\4\4\4\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 8-edit your shop name \4\4\4\4\4\4\4\4\4\4\4\n\n\n\n");
    printf("\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4 Enter your choise:");
    gets(vorood_editing_information);
    if (strcmp(vorood_editing_information, "1") != 0 && strcmp(vorood_editing_information, "2") != 0 && strcmp(vorood_editing_information, "3") != 0 && strcmp(vorood_editing_information, "4") != 0 && strcmp(vorood_editing_information, "5") != 0 && strcmp(vorood_editing_information, "6") != 0 && strcmp(vorood_editing_information, "7") != 0 && strcmp(vorood_editing_information, "edit  Firstname") != 0 && strcmp(vorood_editing_information, "edit  lastname") != 0 && strcmp(vorood_editing_information, "1") != 0 && strcmp(vorood_editing_information, "edit  NationalCode") != 0 && strcmp(vorood_editing_information, "edit  username") != 0 && strcmp(vorood_editing_information, "edit  email") != 0 && strcmp(vorood_editing_information, "edit  Urban area_of the place") != 0 && strcmp(vorood_editing_information, "edit  Shop location name") != 0 && strcmp(vorood_editing_information, "edit   City location") != 0 && strcmp(vorood_editing_information, "edit your password") != 0 && strcmp(vorood_editing_information, "8") != 0 && strcmp(vorood_editing_information, "edit your shop name") != 0)
    {
        puts(sorkh "\n\n\t\t\t\t\4\7\4\4\4\4\4\4\4\4\4\4 please try again \4\4\4\4\4\4\4\4\4\4\4\n\n");
        Sleep(500);
        editing_sahebin_section(n);
    }
    if (strcmp(vorood_editing_information, "edit  NationalCode") == 0 || strcmp(vorood_editing_information, "1") == 0)
    {
        edit_NationalCode_sahebin(n);
    }
    if (strcmp(vorood_editing_information, "edit  username") == 0 || strcmp(vorood_editing_information, "2") == 0)
    {
        edit_username_sahebin(n);
    }
    if (strcmp(vorood_editing_information, "edit  email") == 0 || strcmp(vorood_editing_information, "3") == 0)
    {
        edit_email_sahebin(n);
    }
    if (strcmp(vorood_editing_information, "edit   City location ") == 0 || strcmp(vorood_editing_information, "4") == 0)
    {
        City_location_sahebin(n);
    }
    if (strcmp(vorood_editing_information, " edit  Shop location name") == 0 || strcmp(vorood_editing_information, "5") == 0)
    {
        Shop_location_name_sahebin(n);
    }
    if (strcmp(vorood_editing_information, "edit  Urban area_of the place ") == 0 || strcmp(vorood_editing_information, "6") == 0)
    {
        Urban_area_of_the_place_sahebin(n);
    }
    if (strcmp(vorood_editing_information, "edit your password") == 0 || strcmp(vorood_editing_information, "7") == 0)
    {
        edit_password_sahebin(n);
    }
    if (strcmp(vorood_editing_information, "edit your shop name") == 0 || strcmp(vorood_editing_information, "8") == 0)
    {
        edit_your_shop_name(n);
    }
}
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
void edit_your_shop_name(int n)
{
    system("cls");
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your shop name(Mandatory):");
    fflush(stdin);
    gets(sahebin[n].name_of_shop);
    if (strlen(sahebin[n].name_of_shop) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        edit_your_shop_name(n);
    }
    sahebin_section(n);
}
////////////////////////////////////////////////////////
//////////////////////////////////////////////////////
void edit_password_sahebin(int n)
{
    char repeat_the_password[100];
    system("cls");
    do
    {
        do
        {
            printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");

            printf("  your new password (Mandatory):");

            fflush(stdin);
            int i = 0; // kar
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    password[i] = ch1;
                    password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
                printf(abi);
            }
        } while (strlen(password) == 0);
        do
        {

            printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
            printf("  repeat the new password (Mandatory):");

            fflush(stdin);

            int i = 0;
            while (i != -1)
            {

                char ch1 = getch();
                if (ch1 != 13 && ch1 != 8)
                {
                    repeat_the_password[i] = ch1;
                    repeat_the_password[i + 1] = '\0';
                    i++;

                    printf("*");
                }
                if (ch1 == 13)
                {

                    repeat_the_password[i] = '\0';
                    i = -1;
                }
                if (ch1 == 8 && i != 0)
                {
                    i--;
                    printf("\b \b");
                }
            }
            if (strlen(repeat_the_password) == 0)
            {
                printf(sorkh "  \n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
                printf(abi);
            }
        } while (strlen(repeat_the_password) == 0);
        if (strcmp(repeat_the_password, password) != 0 || strlen(repeat_the_password) != strlen(password))
        {

            printf(sorkh "\n\n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  please try again Your password is not the same as repeating it \4\4\4\4\4\4\4\4\4\4\4\n");
            printf(abi);
        }
    } while (strcmp(password, repeat_the_password) != 0 || strlen(repeat_the_password) != strlen(password));
    sahebin_section(n);
}
/////////////////////////////////////////////////////
///////////////////////////////////////////////////////
//////////////////////////////////////////////////////
void Urban_area_of_the_place_sahebin(int n)
{
    system("cls");
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your Urban area of the place(Mandatory):");
    fflush(stdin);
    gets(sahebin[n].Urban_area_of_the_place);
    if (strlen(sahebin[n].Urban_area_of_the_place) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        Urban_area_of_the_place_sahebin(n);
    }
    sahebin_section(n);
}
////////////////////////////////////////////////
///////////////////////////////////////////
/////////////////////////////////////////////
void Shop_location_name_sahebin(int n)
{
    system("cls");
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your Shop location name(Mandatory):");
    fflush(stdin);
    gets(sahebin[n].Shop_location_name);
    if (strlen(sahebin[n].Shop_location_name) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        Shop_location_name_sahebin(n);
    }
    sahebin_section(n);
}
///////////////////////////////////////////////
////////////////////////////////////////////////
////////////////////////////////////////////////
void City_location_sahebin(int n)
{
    system("cls");

    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your City location (mandatory):");
    fflush(stdin);
    gets(sahebin[n].City_location);
    if (strlen(sahebin[n].City_location) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        City_location_sahebin(n);
    }
    sahebin_section(n);
}
///////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
void edit_email_sahebin(int n)
{
    system("cls");

    printf("\n\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your new email (Mandatory):");
    fflush(stdin);
    gets(sahebin[n].email);
    if (strlen(sahebin[n].email) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4");
        Sleep(500);
        printf(abi);
        edit_email_sahebin(n);
    }
    sahebin_section(n);
}
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
void edit_username_sahebin(int n)
{
    system("cls");
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your user name (Mandatory):");
    fflush(stdin);
    gets(sahebin[n].usrename);
    if (strlen(sahebin[n].usrename) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        edit_username_sahebin(n);
    }
    sahebin_section(n);
}
////////////////////////////////////////////////
/////////////////////////////////////////////////
/////////////////////////////////////////////////
void edit_NationalCode_sahebin(int n)
{
    system("cls");
    printf("\n\t\t\t\4\4\4\4\4\4\4\4\4\4\4");
    printf("  your new National Code (Mandatory):");

    fflush(stdin);
    gets(sahebin[n].NationalCode);
    if (strlen(sahebin[n].NationalCode) == 0)
    {
        printf(sorkh "  \n\7  \t\t\t\4\4\4\4\4\4\4\4\4\4\4  You need to fill in the blank field  \4\4\4\4\4\4\4\4\4\4\4\n");
        Sleep(500);
        printf(abi);
        edit_NationalCode_sahebin(n);
    }
    sahebin_section(n);
}
/////////////////////////////////////////View location status
////////////////////////////////////////View location status
/////////////////////////////////////////View location status
//////////////////////////////////////////View location status
void View_location_status(int n)
{
    system("cls");
    printf(sorkh "\n\n\n\n\n\n\n\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4  location status:");
    printf("%s", sahebin[n].location_status);
    printf(abi);
    Sleep(3000);
    sahebin_section(n);
}
///////////////////////////////////////
////////////////////////////////////////
//////////////////////////////////////////
void Informing_for_disinfection(int n)
{
    system("cls");
    printf(sorkh "\n\t\t\t\t \4\4\4\4\4\4\4\4\4\4\4  You can only choose White and Red \4\4\4\4\4\4\4\4\4\4\4 \n");
    printf(abi);
    printf(" \n\n\n\n\n\n\n\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4 please enter your Location status:");
    gets(sahebin[n].location_status);
    if (strcmp(sahebin[n].location_status, "White") != 0 && strcmp(sahebin[n].location_status, "Red") != 0)
    {
        printf(sorkh "\n\n\7\t\t\t\t \4\4\4\4\4\4\4\4\4\4\4  You can only choose white and red \4\4\4\4\4\4\4\4\4\4\4");
        Sleep(500);
        printf(abi);
        Informing_for_disinfection(n);
    }
    sahebin_section(n);
}
void filekarbaradi2()
{
    FILE *fptr;
    fptr = fopen("karbaradi.txt", "w+");
    fseek(fptr, 0, SEEK_SET);
    for (i = 0; i <= 100; i++)
    {
        fwrite(&karbaradi[i], sizeof(struct userkarbaradi), 1, fptr);
    }
}
//////////////////
void filesahebin2()
{
    FILE *fptr;
    fptr = fopen("sahebin.txt", "w+");
    fseek(fptr, 0, SEEK_SET);
    for (i = 0; i <= 100; i++)
    {
        fwrite(&sahebin[i], sizeof(struct usersahebin), 1, fptr);
    }
}
/////////////////////////////////////
////////////////////////////////////
void filemarakez2()
{
    FILE *fptr;
    fptr = fopen("marakez.txt", "w+");
    fseek(fptr, 0, SEEK_SET);
    for (i = 0; i <= 100; i++)
    {
        fwrite(&marakezdarmani[i], sizeof(struct infomation_marakezdarmani), 1, fptr);
    }
}
//////////////////////////////////////////////
//////////////////////////////////////////////
void filefoti2()
{
    FILE *fptr;
    fptr = fopen("foti.txt", "w+");
    fseek(fptr, 0, SEEK_SET);
    for (i = 0; i <= 100; i++)
    {
        fwrite(&foti[i], sizeof(struct listfoti), 1, fptr);
    }
}
////////////////////////////////////////////
//////////////////////////////////////////////
void listfoti(int n)
{
    strcpy(foti[tedadfoti].firstname, karbaradi[n].firstname);
    strcpy(foti[tedadfoti].lastname, karbaradi[n].lastname);
    strcpy(foti[tedadfoti].NationalCode, karbaradi[n].NationalCode);
    tedadfoti++;
    filefoti2();
}
////////////////////////////////////////
/////////////////////////////////////////
void hazfkarbar(int n)
{
    for (i = n; strlen(karbaradi[i + 1].firstname) != 0 || strlen(karbaradi[i + 1].lastname) != 0; i++)
    {
        karbaradi[i] = karbaradi[i + 1];
    }
    strcpy(karbaradi[i].usrename, "\0");
    strcpy(karbaradi[i].password, "\0");
    strcpy(karbaradi[i].Age, "\0");
    strcpy(karbaradi[i].bloodtype, "\0");
    strcpy(karbaradi[i].email, "\0");
    strcpy(karbaradi[i].firstname, "\0");
    strcpy(karbaradi[i].Height, "\0");
    strcpy(karbaradi[i].lastname, "\0");
    strcpy(karbaradi[i].NationalCode, "\0");
    strcpy(karbaradi[i].timekod, "\0");
    strcpy(karbaradi[i].weight, "\0");
    filesahebin2();
    filekarbaradi2();
}
////////////////////////////////////////
void fileadmin2()
{
    FILE *fptr;
    fptr = fopen("admin.txt", "w+");
    fseek(fptr, 0, SEEK_SET);
    fwrite(&admin, sizeof(struct admininformation), 1, fptr);
}
///////////////////////////////////////////////////
/////////////////////////////////////////////////////
void zaman()
{
    time_t zaman = time(NULL);
    for (i = 0; i < 100; i++)
    {
        if (zaman - sahebin[i].sanie_sorkh_shodan >= 1209600)
        {
            strcpy(sahebin[i].location_status, "White");
        }
    }
    for (i = 0; i <= tedadkarbaradi; i++)
    {
        if (karbaradi[i].kodsalamati[karbaradi[i].id - 1] == '3' && zaman - karbaradi[i].sanie_cod[karbaradi[i].id - 1] >= 604800)
        {
            time_t k = time(NULL);
            karbaradi[i].sanie_cod[karbaradi[i].id] = k;
            struct tm *locall = localtime(&k);
            strcpy(karbaradi[i].timekod[karbaradi[i].id], asctime(locall));
            karbaradi[i].kodsalamati[karbaradi[i].id] = '2';
            karbaradi[i].id++;
        }
        else if (karbaradi[i].kodsalamati[karbaradi[i].id - 1] == '2' && zaman - karbaradi[i].sanie_cod[karbaradi[i].id - 1] >= 604800)
        {
            time_t k = time(NULL);
            karbaradi[i].sanie_cod[karbaradi[i].id] = k;
            struct tm *locall = localtime(&k);
            strcpy(karbaradi[i].timekod[karbaradi[i].id], asctime(locall));
            karbaradi[i].kodsalamati[karbaradi[i].id] = '1';
            karbaradi[i].id++;
        }
    }
}
///////////////////////////////////////
////////////////////////////////////////
int main()
{
    welcome();
    filekarbaradi();
    filesahebin();
    filemarakez();
    filefoti();
    fileadmin();
    zaman();
    voroodkarbar();
}
