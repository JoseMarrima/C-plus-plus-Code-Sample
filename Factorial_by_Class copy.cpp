//
//  main.cpp
//  C++
//
//  Created by Jose Jorge Do Marrima on 6/21/15.
//  Copyright (c) 2015 Jose Marrima. All rights reserved.
//

#include <iostream>
using namespace std;

class Factorial
{
private:
    int number;
    int result;
public:
    void get_number();
    int calculate_factorial();
};

void Factorial::get_number(){
    cout << "Provide us the number, so we can tell your the factorial: ";
    cin >> number;
}

int Factorial::calculate_factorial()
{
    result = 1;
    for (int i = 1; i <= number; i++)
    {
        result = i * result;
    }
    return result;
}

int main()
{
    Factorial object;
    object.get_number();
    cout << "The factorial is " << object.calculate_factorial() << ".";
    return 0;
}
