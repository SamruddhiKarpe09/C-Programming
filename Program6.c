//Write a program which checks whether number is even or odd

#include<stdio.h>  //for printf and scanf
#include<stdbool.h>  //for bool datatype

////////////////////////////////////
//
//Function name:  CheckEvenOdd
//Input:          Integer
//Output:         Boolean
//Description:    Checks whether input is even or odd
//Author:         Samruddhi Ajit Karpe
//Date:           25/04/2023
//Update Date:    26/04/2023
//
////////////////////////////////////

bool CheckEvenOdd(int iNo)
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
    int ivalue = 0;
    bool bRet = false;

    printf("Please enter number to check whether it is even or odd : \n");
    scanf("%d",&ivalue);

    bRet = CheckEvenOdd(ivalue);
    return 0;

    if(bRet == true)
    {
        printf("%d is even number\n",&ivalue);

    }
    else
    {
        printf("%d is odd number\n",&ivalue);
    }
    return 0;
}

