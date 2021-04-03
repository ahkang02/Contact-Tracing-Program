#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#pragma warning(disable:4996)

void clear_screen()
{
	system("cls");
}

void footer()
{
	SYSTEMTIME t;
	GetLocalTime(&t);
	printf("\n-----------------------------------------\n");
	printf("           Thank You For Using           \n");
	printf("      Crimson Contact Tracing System     \n");
	printf("    If Bugs Found, Kindly Contact Me     \n");
	printf("                    At                   \n");
	printf("             GitHub <ahkang02>           \n");
	printf("-----------------------------------------\n");
	printf("   Program Exited At: %02d-%02d-%4d %02d:%02d\n",
		t.wDay,t.wMonth,t.wYear,t.wHour,t.wMinute);
}

void mainMenu()
{
	char userResponse;
	int choice;
	do {
		do {
			clear_screen();
			printf("Welcome To Crimson Contact Tracing System\n");
			printf("-----------------------------------------\n");
			printf("                Main Menu\n\n");
			printf("[1] - Visitor Information Records\n");
			printf("[2] - Venue Information Records\n");
			printf("[3] - Administrative Records\n");
			printf("[4] - Visits and Exits Records\n");
			printf("[5] - Sanitization Records\n");
			printf("[6] - Exit The Program\n\n");
			printf("Enter Your Choice > ");
			scanf("%d", &choice);
			rewind(stdin);

			switch (choice)
			{
			case 1:
				visitorInfo();
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
				footer();
				exit(0);
				break;
			default:
				printf("- Error Found: Enter 1 - 6 Only -\n");
				system("pause");
			}
		} while (choice < 1 || choice > 6);
		printf("\nPress any key to return to Main Menu and E to Exit The Program\n");
		scanf("%c", &userResponse);
		rewind(stdin);
	} while (toupper(userResponse) != 'E');
	footer();
}

void main()
{
	SetConsoleTitle(L"Crimson Contact Tracing System");
	mainMenu();
}