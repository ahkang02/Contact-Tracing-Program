#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

void sanitizeMenu()
{
	char userResponse;
	int choice;
	do {
		do {
			clear_screen();
			printf("        Sanitization Record Module       \n");
			printf("-----------------------------------------\n");
			printf("                Main Menu\n\n");
			printf("[1] - Add New Sanitize Record\n");
			printf("[2] - Search Existing Sanitize Record\n");
			printf("[3] - Modify Existing Sanitize Record\n");
			printf("[4] - Display Existing Sanitize Record\n");
			printf("[5] - Delete Existing Sanitize Record\n");
			printf("[6] - View Sanitization Summary Report\n");
			printf("[7] - Back To Main Menu\n");
			printf("[8] - Exit The Program\n");
			printf("Enter Your Choice > ");
			scanf("%d", &choice);
			rewind(stdin);

			switch (choice)
			{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				mainMenu();
				break;
			case 8:
				footer();
				exit(0);
				break;
			default:
				printf("- Error Found: Enter 1 - 8 Only -\n");
				system("pause");
			}
		} while (choice < 1 || choice > 8);
		printf("\nPress any key to return to Sanitize Menu and M to Exit The Program\n");
		scanf("%c", &userResponse);
		rewind(stdin);
	} while (toupper(userResponse) != 'M');
	mainMenu();
}