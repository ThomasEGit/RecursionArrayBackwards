// RecursionArrayBackwards.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void PrintArrayBackwards(const char InputArray[], int FirstPos, int LastPos)
{

    if (FirstPos <= LastPos)
    {
        cout << InputArray[LastPos];
        PrintArrayBackwards(InputArray, FirstPos, LastPos-1);
    }
}

int main()
{
    char MyArray[] = "Triangle";
    PrintArrayBackwards(MyArray, 0, 7);
}