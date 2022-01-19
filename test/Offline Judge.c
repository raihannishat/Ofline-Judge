#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#include "judge.h"
#include "home.h"
#include "login.h"
#include "problem.h"
#include "submit.h"
#include "hints.h"
#include "about.h"

void menu()
{
    system("CLS");
    system("COLOR F0");
    home();

    char main_command[10];

    printf("\n\t\t\t  ");

    printf("ENTER COMMAND: ");
    scanf("%s", &main_command);

    if(0 == strcmp(main_command, "2")){
        registration();
    }
    else if(0 == strcmp(main_command, "3")){
        problem();
    }
    else if(0 == strcmp(main_command, "4")){
        submit();
    }
    else if(0 == strcmp(main_command, "5")){
        hints();
    }
    else if(0 == strcmp(main_command, "6")){
        about();
    }
    else if(0 == strcmp(main_command, "7")){
        exit(0);
    }
    else if(0 == strcmp(main_command, "1")){
        main();
    }
}

int main()
{
    system("COLOR 1F");
    system("cls");
    int choice;

    printf("\n\n\n\n\n\n");
    printf("\t\t\t******** HOME ********\n");
    printf("\n\t\t\t --> Log In : Press 1\n");
    printf("\n\t\t\t --> Account : Press 2\n");
    printf("\n\t\t\t --> @EXIT : Press 0\n");

    printf("\n\n\t\t\t Enter Your Choice :  ");
    scanf("%d",&choice);
    system("cls");

    switch(choice)
    {
    case 1 :
        log_in();
        break;
    case 2 :
        registration();
        break;

    case 0 :
    {
        printf("\n\t\t\t\tGOOD BYE !!!\n\n");
        system("pause");
        exit(0);
    }
    break;
    }
}
