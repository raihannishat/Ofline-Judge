void judge_2518()
{
    system("COLOR F0");
    system("CLS");

    int i;
    char judge_command[10];

	FILE *fptr_1 = fopen("2518_out.txt", "r");
	FILE *fptr_2 = fopen("submit_out.txt", "r");

    char line_1[10000], line_2[10000];
	char *str_1 = calloc(10000, sizeof(char));
	char *str_2 = calloc(10000, sizeof(char));

	while(fscanf(fptr_1,"%[^\n]\n", line_1) == 1) {
		strcat(str_1, line_1);
		strcat(str_1, "\n");
	}

	while(fscanf(fptr_2,"%[^\n]\n", line_2) == 1) {
		strcat(str_2, line_2);
		strcat(str_2, "\n");
	}

	printf("\n\n\n\n\t\t     ");
    printf("\t       RUNING\n\n");
    printf("\t\t     ");

    for(i = 1; i <= 25; i++){
        Sleep(100);
        printf("#");
    }

    printf("\n\t\t    ");
    printf("\n\t\t  ");

    if(0 == strcmp(str_1, str_2)){
        system("COLOR 2F");
        printf("\t      ");
        printf("Accepted\n");
    }
    else{
        system("COLOR 4F");
        printf("\t    ");
        printf("Wrong Answer\n");
    }

    printf("\n\n\t\t     ");

    printf("Enter command(BACK->'B'): ");
    scanf("%s", &judge_command);

    if(0 == strcmp(judge_command, "B")){
        submit();
    }

	fclose(fptr_1);
	fclose(fptr_2);
}

void judge_2519()
{
    system("COLOR F0");
    system("CLS");

    int i;
    char judge_command[10];

	FILE *fptr_1 = fopen("2519_out.txt", "r");
	FILE *fptr_2 = fopen("submit_out.txt", "r");

    char line_1[10000], line_2[10000];
	char *str_1 = calloc(10000, sizeof(char));
	char *str_2 = calloc(10000, sizeof(char));

	while(fscanf(fptr_1,"%[^\n]\n", line_1) == 1) {
		strcat(str_1, line_1);
		strcat(str_1, "\n");
	}

	while(fscanf(fptr_2,"%[^\n]\n", line_2) == 1) {
		strcat(str_2, line_2);
		strcat(str_2, "\n");
	}

	printf("\n\n\n\n\t\t     ");
    printf("\t       RUNING\n\n");
    printf("\t\t     ");

    for(i = 1; i <= 25; i++){
        Sleep(100);
        printf("#");
    }

    printf("\n\t\t    ");
    printf("\n\t\t  ");

    if(0 == strcmp(str_1, str_2)){
        system("COLOR 2F");
        printf("\t      ");
        printf("Accepted\n");
    }
    else{
        system("COLOR 4F");
        printf("\t    ");
        printf("Wrong Answer\n");
    }

    printf("\n\n\t\t     ");

    printf("Enter command(BACK->'B'): ");
    scanf("%s", &judge_command);

    if(0 == strcmp(judge_command, "B")){
        submit();
    }

	fclose(fptr_1);
	fclose(fptr_2);
}

void judge_2517()
{
    system("COLOR F0");
    system("CLS");

    int i;
    char judge_command[10];

	FILE *fptr_1 = fopen("2517_out.txt", "r");
	FILE *fptr_2 = fopen("submit_out.txt", "r");

    char line_1[10000], line_2[10000];
	char *str_1 = calloc(10000, sizeof(char));
	char *str_2 = calloc(10000, sizeof(char));

	while(fscanf(fptr_1,"%[^\n]\n", line_1) == 1) {
		strcat(str_1, line_1);
		strcat(str_1, "\n");
	}

	while(fscanf(fptr_2,"%[^\n]\n", line_2) == 1) {
		strcat(str_2, line_2);
		strcat(str_2, "\n");
	}

	printf("\n\n\n\n\t\t     ");
    printf("\t       RUNING\n\n");
    printf("\t\t     ");

    for(i = 1; i <= 25; i++){
        Sleep(100);
        printf("#");
    }

    printf("\n\t\t    ");
    printf("\n\t\t  ");

    if(0 == strcmp(str_1, str_2)){
        system("COLOR 2F");
        printf("\t      ");
        printf("Accepted\n");
    }
    else{
        system("COLOR 4F");
        printf("\t    ");
        printf("Wrong Answer\n");
    }

    printf("\n\n\t\t     ");

    printf("Enter command(BACK->'B'): ");
    scanf("%s", &judge_command);

    if(0 == strcmp(judge_command, "B")){
        submit();
    }

	fclose(fptr_1);
	fclose(fptr_2);
}

void judge_2545()
{
    system("COLOR F0");
    system("CLS");

    int i;
    char judge_command[10];

	FILE *fptr_1 = fopen("2545_out.txt", "r");
	FILE *fptr_2 = fopen("submit_out.txt", "r");

    char line_1[10000], line_2[10000];
	char *str_1 = calloc(10000, sizeof(char));
	char *str_2 = calloc(10000, sizeof(char));

	while(fscanf(fptr_1,"%[^\n]\n", line_1) == 1) {
		strcat(str_1, line_1);
		strcat(str_1, "\n");
	}

	while(fscanf(fptr_2,"%[^\n]\n", line_2) == 1) {
		strcat(str_2, line_2);
		strcat(str_2, "\n");
	}

	printf("\n\n\n\n\t\t     ");
    printf("\t       RUNING\n\n");
    printf("\t\t     ");

    for(i = 1; i <= 25; i++){
        Sleep(100);
        printf("#");
    }

    printf("\n\t\t    ");
    printf("\n\t\t  ");

    if(0 == strcmp(str_1, str_2)){
        system("COLOR 2F");
        printf("\t      ");
        printf("Accepted\n");
    }
    else{
        system("COLOR 4F");
        printf("\t    ");
        printf("Wrong Answer\n");
    }

    printf("\n\n\t\t     ");

    printf("Enter command(BACK->'B'): ");
    scanf("%s", &judge_command);

    if(0 == strcmp(judge_command, "B")){
        submit();
    }

	fclose(fptr_1);
	fclose(fptr_2);
}

void judge_2548()
{
    system("COLOR F0");
    system("CLS");

    int i;
    char judge_command[10];

	FILE *fptr_1 = fopen("2548_out.txt", "r");
	FILE *fptr_2 = fopen("submit_out.txt", "r");

    char line_1[10000], line_2[10000];
	char *str_1 = calloc(10000, sizeof(char));
	char *str_2 = calloc(10000, sizeof(char));

	while(fscanf(fptr_1,"%[^\n]\n", line_1) == 1) {
		strcat(str_1, line_1);
		strcat(str_1, "\n");
	}

	while(fscanf(fptr_2,"%[^\n]\n", line_2) == 1) {
		strcat(str_2, line_2);
		strcat(str_2, "\n");
	}

	printf("\n\n\n\n\t\t     ");
    printf("\t       RUNING\n\n");
    printf("\t\t     ");

    for(i = 1; i <= 25; i++){
        Sleep(100);
        printf("#");
    }

    printf("\n\t\t    ");
    printf("\n\t\t  ");

    if(0 == strcmp(str_1, str_2)){
        system("COLOR 2F");
        printf("\t      ");
        printf("Accepted\n");
    }
    else{
        system("COLOR 4F");
        printf("\t    ");
        printf("Wrong Answer\n");
    }

    printf("\n\n\t\t     ");

    printf("Enter command(BACK->'B'): ");
    scanf("%s", &judge_command);

    if(0 == strcmp(judge_command, "B")){
        submit();
    }

	fclose(fptr_1);
	fclose(fptr_2);
}
