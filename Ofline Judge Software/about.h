void about()
{
    system("COLOR F0");
    system("CLS");

    char about_command[10];

    printf("\n\n\n\n\t\t     ");

    printf("\t       ABOUT\n");
    printf("\t\t     =========================");
    printf("\n\t\t    ");

    strcpy(about_command, "about.html");
    system(about_command);

    printf("Enter command(BACK->'B'): ");
    scanf("%s", &about_command);

    if(0 == strcmp(about_command, "B")){
        menu();
    }
}
