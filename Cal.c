int calc(int firstNumber,int secondNumber, int operation)
{
  int value;
  //value=0;
  switch(operation)
  {
  case 1:
    value = firstNumber + secondNumber;
    break;
    case 2:
    value = firstNumber - secondNumber;
    break;
    case 3:
    value = firstNumber * secondNumber;
    break;
    case 4:
    value = firstNumber / secondNumber;
    break;

  }
return value;
}
