//Write a program which checks whether number is even or odd

#include<stdio.h>  //for printf and scanf
#include<stdbool.h>  //for bool datatype

////////////////////////////////////
//
//Function name:  CheckEvenOdd
//Input:          Integer
//Output:         Boolean
//Description:    Checks whether input is divisible by 3 nad 5
//Author:         Samruddhi Ajit Karpe
//Date:           25/04/2023
//Update Date:    26/04/2023
//
////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////
//Entry Point function
///////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number to check whether it is divisible by 3 and 5 : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);
    return 0;

    if(bRet == true)
    {
        printf("%d is completely by 3 and 5\n",iValue);

    }
    else
    {
        printf("%d is completely by 3 and 5\n",iValue);
    }
    return 0;
}

