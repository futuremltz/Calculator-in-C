#include <stdio.h>

 double addition(double num1, double num2) {
  printf("Enter the first number: ");
  scanf("%lf", &num1);
  printf("Enter the second number: ");
  scanf("%lf", &num2);
  printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
  return num1 + num2;
}

double subtraction(double num1, double num2) {
  printf("Enter the first number: ");
  scanf("%lf", &num1);
  printf("Enter the second number: ");
  scanf("%lf", &num2);
  printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
  return num1 - num2;
}

double multiplication(double num1, double num2) {
  printf("Enter the first number: ");
  scanf("%lf", &num1);
  printf("Enter the second number: ");
  scanf("%lf", &num2);
  printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
  return num1 * num2;
}

double division(double num1, double num2) {
  printf("Enter the first number: ");
  scanf("%lf", &num1);
  printf("Enter the second number: ");
  scanf("%lf", &num2);
  if (num2 != 0) {
    printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
    return num1 / num2;
  } else {
    printf("Error: Division by zero is not allowed.\n");
    return 0;
  }
}

int main() {
  int choice;
  int menu = 1;
  int programa_rodando = 1;
  
  while (programa_rodando)
  {
  
  printf("===============================\n");
  printf("   Simple Calculator\n");
  printf("===============================\n");
  while (menu) {
  printf("Select an operation:\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. Exit\n");
  printf("Option: ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
      printf("You chose Addition.\n");
      double num1, num2;
      addition(num1, num2);
      menu = 0;
      break;
    case 2:
      printf("You chose Subtraction.\n");
      subtraction(num1, num2);
      menu = 0;
      break;
    case 3:
      printf("You chose Multiplication.\n");
      multiplication(num1, num2);
      menu = 0;
      break;
    case 4:
      printf("You chose Division.\n");
      division(num1, num2);
      menu = 0;
      break;
    case 5:
      printf("Thank you for using the calculator! See you next time.\n");
      menu = 0;
      programa_rodando = 0;
      break;
    default:
      printf("Invalid option. Please try again.\n");
  }
  }
  if (programa_rodando == 1)
  {
  char l;
  printf("Do you want to perform another operation? (y/n): ");
  scanf(" %c", &l);
  if (l == 'y')
  {
    menu = 1;
  }else if (l == 'n')
  {
    printf("Thank you for using the calculator! See you next time.\n");
    programa_rodando = 0;
  }else{
    printf("Invalid response. Please type 'y' for yes or 'n' for no.\n");
  }
  }
}
  return 0;
}