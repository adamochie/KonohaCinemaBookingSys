#include <stdio.h>
#include<windows.h>
#include <string.h>
#include <stdlib.h>
#include<conio.h>
int mainmenu(char**, char**);
int registermember(void);
int choice1(char**, char**); 
int movie(char**, char**);
int passBy(int ,int, int, char**, char** );
void Food(void);
void Food2(void);
int mainMenu, choice, smovie, sregistermember;
int j,i,q,w,e;
int a,bye;
char* time[3] = {"8.00am", "9.00am", "9.30am"};
char lime[3][100];
char* num[3]= {"Avengers", "365 Days", "Batman 3"};
char bum[3][100];
int staffID;

int main ()
{
  int seat [10][10]={
  {1,2,3,4,5,6,7,8,9,10},
  {11,12,13,14,15,16,17,18,19,20},
  {21,22,23,22,25,26,27,28,29,30},
  {31,32,33,34,35,36,37,38,39,40,},
  {41,42,43,44,45,46,47,48,49,50},
  {51,52,53,54,55,56,57,58,59,60},
  {61,62,63,64,65,66,67,68,69,70},
  {71,72,73,74,75,76,77,78,79,80},
  {81,82,83,84,85,86,87,88,89,90},
  {91,92,93,94,95,96,97,98,99,100}
  };

    
  mainMenu=mainmenu(num, time);
  if (mainMenu==1)
  {
    system("cls");
    choice=choice1(num, time);
    while(choice!=3)
  {
    switch(choice)
     {
       case 1:
         {
         smovie=movie(num, time);  
         system("cls");
         system("COLOR 4F");
        printf("\t\t\t\t\t CINEMA SCREEN\n");
				printf("\t\t\t\t\t________________\n\n");
			for(i=0;i<10;i++)
			{
			for(j=0;j<10;j++)
			{
			printf("\t %d ",seat[i][j]);
			}
			printf("\n");
			}
	printf("______________________________________________________________________________________________\n");
	printf("\tPlease enter your number phone >> ");
	scanf("%d", &w);
	printf("\tPlease select your seat number >> ");
	scanf("%d", &e);
  
  passBy ( smovie, w, e, num, time);
  getch();
  main();
         break;
           }
       case 2 :
          Food();
        break;
      case 3:
        exit(0);
        break;
      default:
        printf("Choice not available");
        getch();
        main();
        break;
     }
     break;
  }
    }
  else if (mainMenu == 2)
  {
          char username[15]; 
          char password[12];
          int choice;
  
          system("cls");
          printf("\n\n\t\t\t********************************** \n");
          printf("\t\t\t            LOG IN MENU   \n");
          printf("\t\t\t***********    MENU   ************\n\n");
  {  
            printf("\t\t\tEnter membership username >> "); 
            scanf("%s",&username); 
 
            printf("\t\t\tEnter your password >> "); 
            scanf("%s",&password); 
 
    if(strcmp(username,"naruto")==0)
  { 
        if(strcmp(password,"dattebayo")==0)
    { 
        printf("\n\t\t\tWelcome Naruto, Your Login Success!"); 
        getch();
        Food2();
        }
    else
    {

printf("\n\t\t\tWrong password, please re-log in"); 
      getch();
      main();
    } 
    }
  else
  { 
    printf("\n\t\t\tUser doesn't exist!\n\t\t\tJoin our membership TODAY to enjoy more!!! "); 
    getch();
    main();
  }
  }
  }
  
  else if (mainMenu == 3)
  {
    system("cls");
	char username[15], surname[13]; 
    char *password[10], *password2[10]; 
 
    printf("\n\n\t\t\t********************************** \n");
    printf("\t\t\t      WELCOME TO REGISTIRATION    \n");
    printf("\t\t\t***********    MENU   ************\n\n");
    printf("\t\t\tEnter Surname >> "); 
    scanf("%s",&surname);
    printf("\t\t\tEnter your new membership username >> "); 
    scanf("%s",&username); 
    printf("\n\t\t\tEnter your new password *must contain 10 words below>> "); 
    scanf("%s", &password);
    printf("\t\t\tConfirm your new password >> "); 
	scanf("%s", &password2);
  
    if( *password == *password2)
    {
   	printf("\n\n\t\t\t********************************** ");
    printf("\n\t\t\tWELCOME %s , OUR NEW MEMBER !!\n\t\t\tSTAY TIGHT! AMAZING PROMOTION AWAITS !!", surname);
    printf("\n\n\t\t\t********************************** ");
    }
     else
      printf("\n\t\t\tSorry, but Your password is unacceptable due to the inquires");
      getch();
      main();
  }
  else if (mainMenu == 4)
  {
    system("cls");
    {
  
          system("cls");
          system("COLOR AF");
          printf("\n\n\t\t\t********************************** \n");
      printf("\t\t\t         KONOHA CINEMA STAFF    \n");
      printf("\t\t\t***********    MENU   ************\n\n");
        
            printf("\t\t\tEnter your staff ID :");
            scanf("%d", &staffID);
            
            while( staffID != 1000)
           {
          printf("\t\t\tPlease insert the correct staff ID ");
             printf("\n\n\t\t\tEnter your staff ID :");
           scanf("%d", &staffID);
            }
            printf("\t\t\tStaff Login Succesfull");
      
      getch();
      
}  
    system("cls");
    printf("\t\t\tCURRENT MOVIES \n");
	printf(" ==================================================================\n");
	printf("||              Movie                  Time                      ||\n");
	for(a=0; a < 3; a++)
	{
	  printf("||\t\t%d. %s           %s\t\t\t  \n",a , num[a], time[a]);
      printf("                                                                  ||\n");
	}
	printf("||                                                                ||\n");
	printf("||================================================================||\n");
	
	printf("\nEnter 1 for change movie list & 2 for proceed >>   \n");
	scanf("%d", &bye);
	
	if(bye == 1)
	{
	  printf("\nEnter movies name >> \n");
	  for(a=0; a<3; a++)
	  {
	  	scanf("%s", bum[a]);
	  } 
	   printf("\nEnter movies time >> \n");
	  for(a=0; a<3; a++)
	  {
	  	scanf("%s", lime[a]);
	  } 
	  for(a=0; a < 3; a++)
	  {
	  num[a] = bum[a];
	  time[a] = lime[a];
      }
	  printf("_______________________________________________________________");
	  for(a=0; a < 3; a++)
	  printf("\n%d. %s      %s",a , num[a], time[a]);
    }
    else if(bye == 2)
    system("cls");
    printf("\t\tTHE MOVIES LIST \n");
	printf(" ==================================================================\n");
	printf("||              Movie                  Time                      ||\n");
	for(a=0; a < 3; a++)
	{
	  printf("||\t\t%d. %s           %s\t\t\t  \n",a , num[a], time[a]);
      printf("                                                                  ||\n");
	}
	printf("||                                                                ||\n");
	printf("||================================================================||\n");
	getch();    
    main(a);
  }
  else
  {
    system("cls");
    main();
  }
}

int mainmenu (char **a, char **b)
{
  system("cls");
  int choice;
  printf("                       WELCOME TO KONOHA CINEMA                     \n");
  printf(" ==================================================================\n");
  printf("||                                                                ||\n");
  printf("||                                                                ||\n");
  printf("||               1- Main menu                                     ||\n");
  printf("||               2- Log in Membership                             ||\n");
  printf("||               3- Membership Registration                       ||\n");
  printf("||               4- Update movie list( Staff only )               ||\n");
  printf("||                                                                ||\n");
  printf("||                                                                ||\n");
  printf("||================================================================||\n");
  system("COLOR 3F");
  printf(" Enter your choice: ");
  scanf("%d",&choice);
  return choice;
  getch();
}

int choice1 (char **a, char **b)
{
  int choice;
    
  printf(" ==================================================================\n");
  printf("||                                                                ||\n");
  printf("||                                                                ||\n");
  printf("||                 1- Movie List & Book Tickets :                 ||\n");
  printf("||                 2- Purchase Food & Beverages :                 ||\n");
  printf("||                 3- Exit System :                               ||\n");
  printf("||                                                                ||\n");
  printf("||                                                                ||\n");
  printf("||================================================================||\n");
  system("COLOR E0");
  printf("  Enter your choice: ");
  scanf("%d",&choice);
  return choice;
}

int movie(char **a, char **b)
{
  int i,j;
  system("cls");
  printf("\t\t\tSHOWING MOVIE \n");
	printf(" ==================================================================\n");
	printf("||              Movie                  Time                      ||\n");
	for(j=0; j < 3; j++)
	{
	  printf("||\t\t%d. %s           %s\t\t\t  \n",j , num[j], time[j]);
      printf("                                                                  ||\n");
	}
	printf("||                                                                ||\n");
	printf("||================================================================||\n");
  printf("Enter your choice >> ");
  scanf("%d", &i);
  return i;
  
}

void Food(void)
{
	system("cls");
	system("COLOR 5F");
	printf("\n\t________________________________________\n");
	printf("\n\t\tWELCOME TO CINEMA'S SNACKS\n");
	printf("\t1.PICK YOUR SNACK-->>\n\t2.EXIT-->>\n");
	printf("\n\t__________________________________________\n");
	printf("\tEnter your choice >> ");
	
	int selection;
	scanf("%d",&selection);
	
	if (selection ==1)
	{
		system("cls");
		printf("\n                          MEALS FOR TODAY                         \n");
		printf("\t________________________________________\n");
		printf("\n\t1. POPCORN (BIG) + COKE (BIG) = RM20\n");
		printf("\t2. POPCORN (MEDIUM) + COKE (MEDIUM) = RM15\n");
		printf("\t3. POPCORN (SMALL) + COKE (SMALL) = RM10\n");
		printf("\t_________________________________________\n");
		printf("\n\tENTER YOUR CHOICE >> ");
		
		int select;
		scanf("%d",&select);
		if(select==1)
		{
			printf("\n\tENTER YOUR MONEY VALUE >> RM");
			int pay,change;
			scanf("%d", &pay);
			change=pay - 20;
			printf("\tYOUR CHANGE IS >> RM%d", change);
			getch();
			Food();
		
		}
		else if(select==2)
		{
			
			printf("\n\tENTER YOUR MONEY VALUE >> RM");
			int pay,change;
			scanf("%d",&pay);
			change=pay - 15;
			printf("\tYOUR CHANGE IS >> RM%d", change);
			getch();
			Food();
		
		}		
		else if(select==3)
		{
			
			printf("\n\tENTER YOUR MONEY VALUE >> RM");
			int pay,change;
			scanf("%d",&pay);
			change=pay - 10;
			printf("\tYOUR CHANGE IS >> RM%d", change);
			getch();
			Food();
		}
		
	}
	else if(selection==2)
	{
		
		printf("\n\t***************************************************\n");
		printf("\t                    THANK YOU                           \n");
		printf("\t                       &                                \n");
		printf("\t                    COME AGAIN                          \n");
		printf("\t*****************************************************\n");
		getch();
		main();
		
	}
	system("cls");
}


int passBy(int z, int p, int c,char **a, char **b)
{
  if(z==0)
  {
    system("cls");
      printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t================================================================\n");
        printf("\t Booking ID : 1000 \t\t\tShow Name : %s\n",a[0]);
        printf("\t No tel : 0%d\n",p);
        printf("\t\t\t                              Date      : 29-04-2019\n");
        printf("\t                                              Time      : %s\n", b[0]);
        printf("\t                                              Hall      : 01\n");
        printf("\t                                              seats No. : %d  \n",c);
        printf("\t                                              price . : RM14.00  \n\n");
        printf("\t=================================================================\n");
  }
  else if(z==1)
  {
    system("cls");
      printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t================================================================\n");
        printf("\t Booking ID : 1000 \t\t\tShow Name : %s\n",a[1]);
        printf("\t No tel : 0%d\n",p);
        printf("\t\t\t                              Date      : 29-04-2019\n");
        printf("\t                                              Time      : %s\n", b[1]);
        printf("\t                                              Hall      : 02\n");
        printf("\t                                              seats No. : %d  \n",c);
        printf("\t                                              price . : RM14.00  \n\n");
        printf("\t=================================================================\n");
  }
  else if(z==2)
  {
    system("cls");
      printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t================================================================\n");
        printf("\t Booking ID : 1000 \t\t\tShow Name : %s\n",a[2]);
        printf("\t No tel : 0%d\n",p);
        printf("\t\t\t                              Date      : 29-04-2019\n");
        printf("\t                                              Time      : %s\n", b[2]);
        printf("\t                                              Hall      : 03\n");
printf("\t                                              seats No. : %d  \n",c);
        printf("\t                                              price . : RM14.00  \n\n");
        printf("\t=================================================================\n");
  }
}

void Food2(void)
{
	system("cls");
	system("COLOR 5F");
	printf("\n\t_____________________________________________\n");
	printf("\n\t\tWELCOME TO MEMBERSHIP CINEMA'S SNACKS\n");
	printf("\t1.PICK YOUR SNACK-->>\n\t2.EXIT-->>\n");
	printf("\n\t______________________________________________\n");
	printf("\tEnter your choice >> ");
	
	int selection;
	scanf("%d",&selection);
	
	if (selection ==1)
	{
		system("cls");
		printf("\n                          MEALS FOR TODAY                         \n");
		printf("\t________________________________________\n");
		printf("\n\t1. POPCORN (BIG) + COKE (BIG) = RM15\n");
		printf("\t2. POPCORN (MEDIUM) + COKE (MEDIUM) = RM10\n");
		printf("\t3. POPCORN (SMALL) + COKE (SMALL) = RM5\n");
		printf("\t_________________________________________\n");
		printf("\n\tENTER YOUR CHOICE >> ");
		
		int select;
		scanf("%d",&select);
		if(select==1)
		{
			printf("\n\tENTER YOUR MONEY VALUE >> RM");
			int pay,change;
			scanf("%d", &pay);
			change=pay - 15;
			printf("\tYOUR CHANGE IS >> RM%d", change);
			getch();
			Food();
		
		}
		else if(select==2)
		{
			
			printf("\n\tENTER YOUR MONEY VALUE >> RM");
			int pay,change;
			scanf("%d",&pay);
			change=pay - 10;
			printf("\tYOUR CHANGE IS >> RM%d", change);
			getch();
			Food();
		
		}		
		else if(select==3)
		{
			printf("\n\tENTER YOUR MONEY VALUE >> RM");
			int pay,change;
			scanf("%d",&pay);
			change=pay - 5;
			printf("\tYOUR CHANGE IS >> RM%d", change);
			getch();
			Food();
		}
		
	}
	else if(selection==2)
	{
		
		printf("\n\t***************************************************\n");
		printf("\t                    THANK YOU                           \n");
		printf("\t                       &                                \n");
		printf("\t                    COME AGAIN                          \n");
		printf("\t*****************************************************\n");
		getch();
		main();
		
	}
	system("cls");
}
