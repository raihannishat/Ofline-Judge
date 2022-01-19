void submit()
{
    system("COLOR 3F");
    system("CLS");

    char submit_command[10];

    printf("\n\n\n\n\t\t     ");

    printf("\t       SUBMIT\n");
    printf("\t\t     =========================");
    printf("\n\t\t    ");
    printf("\n\t\t  ");
    printf("   ID: 2518: SCHOOL PHYSICS\n");

    printf("\t\t  ");
    printf("   ID: 2519: WATERMELON\n");

    printf("\t\t  ");
    printf("   ID: 2517: THEATRE SQUARE\n");

    printf("\t\t  ");
    printf("   ID: 2548: NEXT ROUND\n");

    printf("\t\t  ");
    printf("   ID: 2545: BIT++\n");
    printf("\n\t\t     =========================");

    printf("\n\n\t\t     ");

    printf("Enter command(BACK->'B'): ");
    scanf("%s", &submit_command);

    if(0 == strcmp(submit_command, "B")){
        menu();
    }

    if(0 == strcmp(submit_command, "2518")){
        strcpy(submit_command, "gcc submit.c");
        system(submit_command);
        strcpy(submit_command, "a.exe");
        system(submit_command);
        judge_2518();
    }else if(0 == strcmp(submit_command, "2519")){
        strcpy(submit_command, "gcc submit.c");
        system(submit_command);
        strcpy(submit_command, "a.exe");
        system(submit_command);
        judge_2519();
    }
    else if(0 == strcmp(submit_command, "2517")){
        strcpy(submit_command, "gcc submit.c");
        system(submit_command);
        strcpy(submit_command, "a.exe");
        system(submit_command);
        judge_2517();
    }else if(0 == strcmp(submit_command, "2548")){
        strcpy(submit_command, "gcc submit.c");
        system(submit_command);
        strcpy(submit_command, "a.exe");
        system(submit_command);
        judge_2548();
    }
    else if(0 == strcmp(submit_command, "2545")){
        strcpy(submit_command, "gcc submit.c");
        system(submit_command);
        strcpy(submit_command, "a.exe");
        system(submit_command);
        judge_2545();
    }
}
