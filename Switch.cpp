#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    char choice;
    int x, y;
  
    while (1) {
        cout << "Enter the Operator (+,-,*,/)\nEnter x to "
                "exit\n";
        cin >> choice;
  
        if (choice == 'x') {
            exit(0);
        }
  
        cout << "Enter the two numbers: ";
        cin >> x >> y;
  
        switch (choice) {
        case '+':
            cout << x << " + " << y << " = " << x + y
                 << endl;
            break;
  
        case '-':
            cout << x << " - " << y << " = " << x - y
                 << endl;
            break;
  
        case '*':
            cout << x << " * " << y << " = " << x * y
                 << endl;
            break;
        case '/':
            cout << x << " / " << y << " = " << x / y
                 << endl;
            break;
        default:
            printf("Invalid Operator Input\n");
        }
    }
    return 0;
}