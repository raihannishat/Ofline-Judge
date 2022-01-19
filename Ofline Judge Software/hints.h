void hints()
{
    system("COLOR 0F");
    system("CLS");

    char status_command[10];

    printf("\n\n\n\n\t\t     ");

    printf("\t       HINTS\n");
    printf("\t\t     =========================");
    printf("\n\t\t    ");

    strcpy(status_command, "Hints.pdf");
    system(status_command);

    printf("Enter command(BACK->'B'): ");
    scanf("%s", &status_command);

    if(0 == strcmp(status_command, "B")){
        menu();
    }
}
