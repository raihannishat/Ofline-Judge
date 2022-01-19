void problem(){
    system("COLOR 2F");
    system("CLS");

    char problem_command[10];

    printf("\n\n\n\n\t\t     ");

    printf("\t     PROBLEMS\n");
    printf("\t\t     =========================");
    printf("\n\t\t\t     ");

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

    printf("\n\n\t\t   ");
    printf("Enter command(BACK->'B'): ");
    scanf("%s", &problem_command);

    if(0 == strcmp(problem_command, "B")){
        menu();
    }
    else if(0 == strcmp(problem_command, "2518")){
        strcpy(problem_command, "E.pdf");
        system(problem_command);
        problem();
    }
    else if(0 == strcmp(problem_command, "2519")){
        strcpy(problem_command, "A.pdf");
        system(problem_command);
        problem();
    }
    else if(0 == strcmp(problem_command, "2517")){
        strcpy(problem_command, "B.pdf");
        system(problem_command);
        problem();
    }
    else if(0 == strcmp(problem_command, "2548")){
        strcpy(problem_command, "C.pdf");
        system(problem_command);
        problem();
    }
    else if(0 == strcmp(problem_command, "2545")){
        strcpy(problem_command, "D.pdf");
        system(problem_command);
        problem();
    }
}

