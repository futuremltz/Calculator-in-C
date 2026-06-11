#include <stdio.h>


void addition(){
  double a, b;
  printf("Enter the first number: ");
  scanf("%lf",&a);
  printf("Enter the second number: ");
  scanf("%lf",&b);

  printf("Result: %.1lf + %.1lf = %.1lf\n", a, b, a + b);

}

void subtraction(){
  double a, b;
  printf("Enter the first number: ");
  scanf("%lf",&a);
  printf("Enter the second number: ");
  scanf("%lf",&b);

  printf("Result: %.1lf - %.1lf = %.1lf\n", a, b, a - b);

}

void multiplication(){
  double a, b;
  printf("Enter the first number: ");
  scanf("%lf",&a);
  printf("Enter the second number: ");
  scanf("%lf",&b);

  printf("Result: %.1lf * %.1lf = %.1lf\n", a, b, a * b);

}

void division(){
  double a, b;
  printf("Enter the first number: ");
  scanf("%lf",&a);
  printf("Enter the second number: ");
  scanf("%lf",&b);
  if (b != 0){
    printf("Result: %.1lf / %.1lf = %.1lf\n", a, b, a/b);
  }else{
    printf("Error: Division by zero is not allowed.\n");
  }
  

}

int main(){
  int choice;
  int program_running = 1;
  while (program_running)
  {
    printf("===============================\n");
    printf("   Simple Calculator\n");
    printf("===============================\n");

    int menu = 1;
    
    while (menu)
    {
      printf("Select an operation:\n");
      printf("1. Addition\n");
      printf("2. Subtraction\n");
      printf("3. Multiplication\n");
      printf("4. Division\n");
      printf("5. Exit\n");
      printf("Option: ");

      if (scanf("%d", &choice) != 1) 
      {
        while (getchar() != '\n');
        choice = 0;
      }
      switch (choice)
      {
      case 1:
        printf("You choose Addition\n");
        addition();
        menu = 0;
        break;

      case 2:
        printf("You choose Subtraction\n");
        subtraction();
        menu = 0;
        break;

      case 3:
        printf("You choose Multiplication\n");
        multiplication();
        menu = 0;
        break;

      case 4:
        printf("You choose Division\n");
        division();
        menu = 0;
        break;
      
      case 5:
        printf("Thank you for using the calculator! See you next time.\n");
        program_running = 0;
        menu = 0;
        break;
      
      default:
        printf("Number of the range of 1-5\n");
        break;

      }
    }
    if (program_running == 1)
    {
      char l;
      int validation = 0;
      while (!validation)
      {
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c",&l);

        if (l == 'y' || l == 'Y')
        {
          validation = 1;
        }else if (l == 'n' || l == 'N'){
          validation = 1;
          program_running = 0;
        }else{
          printf("Invalid response. Please type 'y' for yes or 'n' for no.\n");
        }
      }
    }
  }
  return 0;
}
