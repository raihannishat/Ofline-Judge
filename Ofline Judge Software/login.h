void registration()
{
    system("cls");

    char reg_username[30],reg_pass[30];

    FILE *fp;
    fp=fopen("reg.txt","a");

    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("\n\n\n\n\n\n");
    printf("\t\t\t   USER REGISTRATION\n\n");
    printf("\n\t\t\tUSER NAME : ");
    scanf("%s",reg_username);
    printf("\n\t\t\tUSER PASSWORD: ");
    scanf("%s",reg_pass);
    fprintf(fp,"\n%s %s",reg_username,reg_pass);
    fclose(fp);

    printf("\t\t\t\tYour Registration is successful.\n");
    printf("\t\t\t\tNow its time to login \n ");
    system("cls");
    system("pause");

    menu();
}

void log_in()
{
    system("CLS");
    char reg_username[30],reg_pass[30],log_pass[30],log_username[30],name[30],pass[30];
    int c=0,cnt=0;
    int flag=1,tym_3=3;
    int reg_log_button;

    FILE *fp;

    fp=fopen("reg.txt","r");
    if(fp==NULL)
    {
        printf("Error!");
        exit(1);
    }

    while(flag)
    {

        //login

        printf("\n\n\n\n\n\n");
        printf("\t\t\t   LOG IN\n\n");
        printf("\n\t\t\tUSER NAME : ");
        scanf("%s",log_username);


        printf("\n\t\t\tUSER PASSWORD: ");
        int l=0;
        while(l<=9)
        {
            log_pass[l]=getch();
            if(log_pass[l]==13)
                break;
            else
                printf("*");
            l++;
        }
        log_pass[l]='\0';

        fp=fopen("reg.txt","r");
        if(fp==NULL)
        {
            printf("Error!");
            exit(1);
        }

        //comparison
        while(fscanf(fp,"%s %s\n",name,pass)!=EOF){
            if((strcmp(log_username,name)==0)&&(strcmp(log_pass,pass)==0)){
                //if the combination matches value of c is increased and user id of req user is stored in user.id
                //system("cls");
                menu();
                //system("pause");
                flag=0;
                break;
            }
        }

        tym_3--;
        if(flag)
        {
            system("cls");
            printf("Incorrect username or password. Please try again.\n");
            system("pause");
            fclose(fp);
            system("cls");
            if(tym_3==0)
            {
                printf("\n\t\t\t\tTry again later . \n");
                break;
            }
        }
    }
}
