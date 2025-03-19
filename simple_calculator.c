#include <stdio.h>
int main()
{
	float num1, num2, result;
  char characterChosen;
	printf("Please enter a number: ");
	scanf("\n%f", &num1);
  
	printf("Please enter a character ( +,*,-,/) : ");
	scanf("\n%c", &characterChosen);
  
	printf("Please enter another number: ");
	scanf("\n%f", &num2);

  switch (characterChosen)
    {
      case '+':
      result = num1+num2;
      break;

        case '-':
      result = num1-num2;
      break;

        case '/':

        if (num2 == 0)
        {
          printf("Numbers can NOT be divided by zero!");
          return 1;
  
        }
      result = num1/num2;
      break;
      

        case '*':
      result = num1*num2;
      break;
      
    }

  printf("\nSolution: %.2f", result);

	
	return 0;
}

