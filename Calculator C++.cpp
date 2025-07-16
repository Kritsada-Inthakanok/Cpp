#include <iostream>
using namespace std;

void print(const string& data) {
    cout << data << endl;
}
void inputNumbers(int& x, int& y) {
    cout << "Enter Num1: ";
    cin >> x;
    cout << "Enter Num2: ";
    cin >> y;
}

int main() {
    int op, x, y;

    enum Function {
        Adder = 1,
        Subtract,
        Multiply,
        Divide
    };

    print("\nCalculator");
    print("-----------------------------------------------");
    print("1. Add");
    print("2. Subtract");
    print("3. Multiply");
    print("4. Divide");
    print("Choose an operation (1-4):");

    cin >> op;

    if (op >= 1 && op <= 4) {
        inputNumbers(x, y);

        switch (op) {
            case Adder:
                cout << "Result: " << x + y << endl;
                break;
            case Subtract:
                cout << "Result: " << x - y << endl;
                break;
            case Multiply:
                cout << "Result: " << x * y << endl;
                break;
            case Divide:
                if (y == 0) {
                    print("Error: Division by zero");
                } else {
                    cout << "Result: " << static_cast<float>(x) / y << endl;
                }
                break;
        }
    } else {
        print("Invalid input");
    }

    return 0;
}
