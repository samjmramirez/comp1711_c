# include <stdio.h>

int main()
{
    int opt;
    printf("Enter one of the following options [1-5]: ");
    scanf("%d", &opt);

switch(opt)
{
    case 1: printf("You have selected option 1\n");
    break;
    case 2: printf("You have selected option 2\n");
    break;
    case 3: printf("You have selected option 3\n");
    break;
    case 4: printf("You have selected option 4\n");
    break;
    case 5: printf("You have selected option 5\n");
    break;
    default: printf("You have selected another option\n");
}
return 0;
}