#include <iostream>
using namespace std;

#define CAPACITY 100
int queue[CAPACITY];
int size  = 0;
int rear  = CAPACITY - 1;
int front = 0;


int isFull() {
    return (size == CAPACITY);
}

int isEmpty() {
    return (size == 0);
}

int Insert(int data) {
    if (isFull()) {
        return 0;
    }

    rear = (rear + 1) % CAPACITY;
    size++;
    queue[rear] = data;
    return 1;
}

int deletee() {
    int data = INT_MIN;

    if (isEmpty()) {
        return INT_MIN;
    }

    data = queue[front];
    front = (front + 1) % CAPACITY;
    size--;
    return data;
}

int getFront() {
    return (isEmpty()) ? INT_MIN : queue[front];
}

int getRear() {
    return (isEmpty()) ? INT_MIN : queue[rear];
}

void Display() {
    if (front == -1) {
        cout<<"Queue is empty"<<endl;
    }
    else {
        cout<<"Queue elements are : ";
        for (int i = front; i <= rear; i++) {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int ch, data;

    while (1)
    {
        cout << "--------------------------------------" << endl;
        cout << "  QUEUE ARRAY IMPLEMENTATION PROGRAM  " << endl;
        cout << "--------------------------------------" << endl;
        cout << "1. Insert" << endl;
        cout << "2. delete" << endl;
        cout << "3. Size" << endl;
        cout << "4. Get Rear" << endl;
        cout << "5. Get Front" << endl;
        cout << "6. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Select an option: ";

        cin >> ch;

        switch (ch)
        {
            case 1:
                cout << "\nEnter data to Insert: ";
                cin >> data;

                if (Insert(data)) {
                    cout << "Element added to queue.";
                }
                else {
                    cout << "Queue is full.";
                }

                break;

            case 2:
                data = deletee();

                if (data == INT_MIN) {
                    cout << "Queue is empty.";
                }
                else {
                    cout << data << " is deleted" << endl;
                }
                break;

            case 3:
                if (isEmpty()) {
                    cout << "Queue is empty.";
                }
                else {
                    cout << "Queue size is " << size << endl;
                }
                break;

            case 4: 
                if (isEmpty()) {
                    cout << "Queue is empty.";
                }
                else {
                    cout << "Rear is " << getRear();
                }
                break;

            case 5:
                if (isEmpty()) {
                    cout << "Queue is empty.";
                }
                else {
                    cout << "Front is " << getFront();
                }
                break;

            case 6:
                Display();
                break;

            case 0:
                cout << "Exiting from app." << endl;
                exit(0);
        
            default:
                cout << "Invalid choice, please input number between (0-5).";
                break;
        }

        cout << "\n" << endl;
    }
}