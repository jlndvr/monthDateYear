#include <stdio.h>

int main(void) {
  
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  scanf("%d /%d /%d", &month, &day, &year);

  // Print the month
  switch (month) {
    case 1 :
    printf("January");
    break;
    case 2 :
    printf("February");
    break;
    case 3 :
    printf("March");
    break;
    case 4 :
    printf("April");
    break;
    case 5 :
    printf("May");
    break;
    case 6 :
    printf("June");
    break;
    case 7 :
    printf("July");
    break;
    case 8 :
    printf("August");
    break;
    case 9 :
    printf("September");
    break;
    case 10 :
    printf("October");
    break;
    case 11 :
    printf("November");
    break;
    case 12 :
    printf("December");
    break;
  }
  /*
  nd, st, rd, and th
  */
  // Print the day
  switch (day) {
    // Is there a better way to do this?
    // My solution:
    case 1 : case 21 : case 31 :
    printf(" %ist", day);
    break;
    case 2 : case 22 :
    printf(" %ind", day);
    break;
    case 3 : case 23 :
    printf(" %ird", day);
    break;
    case 4 : case 5 : case 6 : case 7 : case 8 : case 9 : case 10 : case 11 : case 12 : case 13 : case 14 : case 15 : case 16 : case 17 : case 18 : case 19 : case 20 : case 24 : case 25 : case 26 : case 27 : case 28 : case 29 : case 30 :
    printf(" %ith", day);
    break;
  }
    // AI solution: 
    /*
    // Handle special cases first (11, 12, 13) the 11th 12th and 13th are the only "n1th, n2th, n3th" of any 1-10 10 20 30 40 50 60 70 80 90 100 that use "th" instead of this format like every other month which is n1"st", n2"nd", and n3"rd".
    if (day == 11 || day == 12 || day == 13) {
        printf(" %dth", day);
        return;
    }

    // Get the last digit of the day
    int lastDigit = day % 10;

    switch (lastDigit) {
        case 1:
            printf(" %dst", day);
            break;
        case 2:
            printf(" %dnd", day);
            break;
        case 3:
            printf(" %drd", day);
            break;
        default:
            printf(" %dth", day);
            break;
    }
    */
  

  // Print the year
  printf(", %i\n", year);
  
  return 0;
  
}
