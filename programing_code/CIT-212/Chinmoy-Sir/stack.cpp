#include <iostream>
using namespace std;

#define SIZE 100
int stack[SIZE];
int top = -1;

void push(int element)
{
    if (top >= SIZE)
    {
        cout << "Stack Overflow, can't add more element element to stack." << endl;
        return;
    }

    top++;
    stack[top] = element;
    cout<< "Data pushed to stack." << endl;
}

int pop()
{
    if (top < 0)
    {
        cout<< "Stack is empty." << endl;
        return -1;
    }

    return stack[top--];
}

void display() {
    if(top>=0) {
        cout << "Stack elements are: ";
        for(int i=top; i>=0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
    else {
        cout<<"Stack is empty";
    }
}

int main()
{
    int choice, data;

    while(1)
    {
        cout<< "------------------------------------" << endl;
        cout<< "    STACK IMPLEMENTATION PROGRAM    " << endl;
        cout<< "------------------------------------" << endl;
        cout<< "1. Push" << endl;
        cout<< "2. Pop" << endl;
        cout<< "3. Size" << endl;
        cout<< "4. Display" << endl;
        cout<< "5. Exit" << endl;
        cout<< "------------------------------------" << endl;
        cout << "Enter your choice: " << endl;

        cin >> choice;

        switch(choice) 
        {
            case 1:
                cout << "Enter data to push into stack: ";
                cin >> data;
                push(data);
                break;

            case 2: 
                data = pop();
                if (data != -1)
                    cout << data << " is popped from stack" << endl;
                break;

            case 3:
                cout << "stack size is " << top + 1 << endl;
                break;

            case 4: 
                display();
                break;

            case 5: 
                cout<< "Exiting." << endl;
                exit(0);
                break;

            default: 
                cout<< "Invalid choice, please try again." << endl;
        }

        cout<< "\n" << endl;
    }


    return 0;
}