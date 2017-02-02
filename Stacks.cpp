#include <iostream>
#include <stdlib.h>

using namespace std;


class stack
{
    int stk[500], top;
public:
    
    stack()
    {
        top = -1;
    }
    void push(int x)
    {
        if (top > 500)
        {
            cout << "The stack is full. \n";
        }
        stk[++top] = x;
        cout << "Inserted sucessfully. \n";
    }
    void pop()
    {
        if (top < 0)
        {
            cout << "The stack is empty. \n";
        }
        cout << "The deleted element is: " << stk[top--] << endl;
    }
    void display()
    {
        if (top < 0)
        {
            cout << "\n The stack is empty. \n";
        }
        for (int i = top; i >= 0; i--)
        {
            cout << stk[i] << " " << endl;
        }
    }
};

int main()
{
    int num, choice;
    stack object;
    while (1)
    {
        cout << "Menu: \n 1. Push. \n 2. Pop. \n 3.Display. \n 4. Exit. " << endl;
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Enter a number: ";
                cin >> num;
                object.push(num);
                break;
            case 2:
                object.pop();
                break;
            case 3:
                object.display();
                break;
            case 4:
                exit(0);
                
            default:
                cout << "Please enter a valid number." << endl;
                break;
        }
    }
    return 0;
}