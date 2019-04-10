#include <stdio.h>
int main()
{
      double firstNumber=2, secondNumber=3, temporaryVariable;

    
    
      temporaryVariable = firstNumber;

      firstNumber = secondNumber;

    
      secondNumber = temporaryVariable;

     // printf("\nAfter swapping, firstNumber = %.2lf\n", firstNumber);
      printf("After swapping, secondNumber = %.2lf", secondNumber);

      return 0;
}
