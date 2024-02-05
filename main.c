#include <stdio.h>
#include <string.h>


int main(void) {
  char input[100];
  char highestSale[10];
  int saleAmount;
  int grandTotal;
  
  
  int salesPersonD = 0;
  int salesPersonE = 0;
  int salesPersonF = 0;
  
  
  printf("Enter salesperson's initial or 'Z' to quit: ");
  scanf("%s", input);


  while (strcmp(input, "Z") != 0) {
    
    if (strcmp(input, "D") == 0 || strcmp(input, "d") == 0) {
      printf("\nEnter sale amount for salesperson 'D': ");
      scanf("%s", input);
      salesPersonD += atoi(input);
    }
    else if (strcmp(input, "E") == 0|| strcmp(input, "e") == 0) {
      printf("\nEnter sale amount for salesperson 'E': ");
      scanf("%s", input);
      salesPersonE += atoi(input);
    }
    else if (strcmp(input, "F") == 0 || strcmp(input, "f") == 0) {
      printf("\nEnter sale amount for salesperson 'F': ");
      scanf("%s", input);
      salesPersonF += atoi(input);
    }
    else {
      printf("\nError, invalid salesperson selected, please try again.");
    }

    printf("\nEnter salesperson initial or 'Z' to quit: ");
    scanf("%s", input);
  }

  // We COULD bubblesort but I'm lazy!
  if (salesPersonD > salesPersonE && salesPersonD > salesPersonE) {
    strcpy(highestSale, "D");
  }
  if (salesPersonE > salesPersonD && salesPersonE > salesPersonF) {
    strcpy(highestSale, "E");
  }
  if (salesPersonF > salesPersonD && salesPersonF > salesPersonE) {
    strcpy(highestSale, "F");
  }
  
  grandTotal = salesPersonD + salesPersonE + salesPersonF;
  printf("\nGrand Total: $%d", grandTotal);
  printf("\nHighest Sale: %s", highestSale);
  
  return 0;
}