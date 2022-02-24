/*Define a structure that can describe a hotel. It should have the member that 
includes the name, address, grade, room charge and number of rooms. 
Write a function to print out hotel of given grade in order of room charges. */
#include <stdio.h>
#include <string.h>

typedef struct hotel
{
     char name[30];
     char add[200];
     char grade;
     float charge;
     int no_of_rooms;
} hotel;

int main (void)
{
     hotel list[100];
     hotel key;
     int no_of_hotels = 0;
     int choice;
     int success;
     char del_name[30];
     char grd;
     int i, j;

     while (1)
     {
          //Menu
          printf ("***Menu***\n");
          printf ("1. List Hotels\n");
          printf ("2. Edit Hotels\n");
          printf ("3. Exit\n");
          printf ("Choice: ");
          scanf ("%d", &choice);

          //Exit
          if (choice == 3)
               break;

          switch (choice)
          {
               //List hotels
               case 1:
                    printf ("\nHotel Grade: ");
                    fflush (stdin);
                    scanf ("%c", & grd);

                    printf ("List of hotels of grade %c\n\n", grd);
                    for (i = 0, j= 1; i <= no_of_hotels - 1; i++)
                    {
                         if (list[i].grade == grd)
                         {
                              printf ("%d. %s\n", j++, list[i].name);
                              printf ("%s\n", list[i].add);
                              printf ("No of Rooms: %d\n", list[i].no_of_rooms);
                              printf ("Rent: Rs. %.2f\n\n", list[i].charge);
                         }
                    }
                    printf ("Total %d hotel found.\n\n", j - 1);
                    break;

               //Edit Hotels
               case 2:
                    while (1)
                    {
                         //Hotel Edit Menu
                         printf ("\n***Hotel Edit Menu***\n");
                         printf ("1. Add Hotel\n");
                         printf ("2. Delete Hotel\n");
                         printf ("3. Exit Hotel Edit Menu\n");
                         printf ("Choice: ");
                         scanf ("%d", &choice);

                         //Exit loop
                         if (choice == 3)
                         {
                              printf ("\n");
                              break;
                         }

                         switch (choice)
                         {
                              //Add Hotel
                              case 1:
                                   printf ("\nAdd Hotel\n");
                                   printf ("Input Grade: ");
                                   fflush (stdin);
                                   scanf ("%c", &key.grade);
                                   printf ("Input Name: ");
                                   fflush (stdin);
                                   gets (key.name);
                                   printf ("Input Address: ");
                                   fflush (stdin);
                                   gets (key.add);
                                   printf ("Input Number of Rooms: ");
                                   scanf ("%d", &key.no_of_rooms);
                                   printf ("Input Rent: Rs. ");
                                   scanf ("%f", &key.charge);

                                   //Sorting
                                   for (i = no_of_hotels - 1; i >= 0 && key.charge < list[i].charge; i--)
                                        list[i + 1] = list[i];
                                   list[i + 1] = key;
                                   printf ("%s added successfully.\n\n", list[i + 1].name);
                                   no_of_hotels++;
                                   break;

                              //Delete Hotel
                              case 2:
                                   printf ("\nDelete Hotel\n");
                                   printf ("Input Name: ");
                                   fflush (stdin);
                                   gets (del_name);
                                   printf ("Input Grade: ");
                                   fflush (stdin);
                                   scanf ("%c", &grd);

                                   success = 0;
                                   for (i = 0; i <= no_of_hotels - 1; i++)
                                        if (!strcmp (del_name, list[i].name) && grd == list[i].grade)
                                        {
                                             for (j = i; j <= no_of_hotels - 2; j++)
                                                  list[j] = list[j + 1];
                                             success = 1;
                                             no_of_hotels--;
                                        }

                                   if (success)
                                        printf ("Hotel %s deleted successfully.\n\n", del_name);
                                   else
                                        printf ("Hotel %s is not found.\n\n", del_name);
                                   break;

                              default:
                                   printf ("Error! Wrong Choice. Try Again\n");
                         }
                    }
                    break;

               default:
                    printf ("Error! Wrong Choice. Try Again\n\n");
          }
     }

     return 0;
};
