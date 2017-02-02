//This program is created with intend to implement queues using linked list
//Created by Jose Jorge do Amaral Marrima



#include <iostream>
#include <stdio.h>
#include <curses.h>
#include <iomanip>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *newNode = NULL;
node *front = NULL;
node *rear = NULL;
node *temp = NULL;

void push(int number);

void remove();

int main()
{
    int const stop = -1;
    int choice = 0;
    do
    {
        cout << "\n\n";
        cout << setw(20) << "**** Menu **** \n" << endl;
        cout << "Press 1 to add values to the queue" << endl;
        cout << "Press 2 to remove all th values on the queue" << endl;
        cout << "Press -1 to finish this program \n" << endl;
        cout << "Enter: ";
        cin >> choice;
        cout << "\n\n";
        switch (choice)
        {
            case 1:
            {
                int value;
                int counter = 0;
                int numberOfvaluesToPush;
                
                cout << "How many values to be pushed into queue? Answer: ";
                cin >> numberOfvaluesToPush;
                while (counter < numberOfvaluesToPush)
                {
                    cout << "Enter the " << counter + 1 << " value on the queue: ";
                    cin >> value;
                    push(value);
                    counter++;
                }
                
                break;
            }
            case 2:
            {
                cout << "The values removed are: " << endl;
                while (true)
                {
                    if (front != NULL)
                    {
                        remove();
                    }
                    else
                        break;
                }
                
                break;
            }
            default:
            {
                cout << "ERROR: Enter a valid choice!" << endl;
                break;
            }
        }
        
    }while(choice != stop);
    
    return 0;
}

void push(int number)
{
    node *newNode = NULL;
    newNode = new node;
    newNode->data = number;
    newNode->next = NULL;
    if (front == NULL)
    {
        front = rear = newNode;
        rear->next = NULL;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
        rear->next = NULL;
    }
}

void remove()
{
    int number;
    if (front == NULL)
    {
        cout << "This queue is already empty" << endl;
    }
    else
    {
        temp = front;
        number = temp->data;
        front = front->next;
        delete(temp);
        cout << number << endl;
    }
}