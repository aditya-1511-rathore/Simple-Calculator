#include<stdio.h>
#include<string.h>

int main()
{
  float x,y,z,result;
  char c,d,i;
  printf("This calculator performs only addition and subtraction. It not accepts brackets. Enter space seperated integers or float values with operators between them and = sign at last. Example: 5 + 4 = , 5 + 4 - 7 =\n");
  printf("----------------------------------------------------------------------------------------------------------------------");
  scanf("%f %c %f %c",&x, &c, &y, &d);
    if(c == '+')
    {
      result = x+y;
    }
    else if(c == '-')
    {
      result = x-y;
    }
    else
    {
      printf("Invalid input");
    }
    if(d == '=')
    {
      result = result;
    }
    else
    {
      scanf("%f %c",&z, &i);
      if(d == '+')
      {
        result = result + z;
      }
      else if(d == '-')
      {
        result = result - z;
      }
      else
      {
        printf("Invalid Input");
      }
    while (i!='=')
    {
      scanf("%f",&z);
      if(i == '+')
      {
        result = result + z;
      }
      else if(i == '-')
      {
        result = result - z;
      }
      else
      {
        printf("Invalid Input");
      }
      scanf("%c",&i);
    }
  }
    printf("%f",result);
}
