#include <iostream>
using namespace std;

void print(const string& data) {
    cout << data << endl;
}

/*
50-54 = 1
55-59 = 1.5
60-64 = 2
65-69 = 2.5
70-74 = 3
75-79 = 3.5
80-100 = 4
*/

int main() {
    int x;
    
    print("Please Enter Your Grade");
    cin >> x;
    if (x >= 101) {
        print("Invalid input");
        print("Please enter more than 0");
    }
    else if (x >= 49) {
        if (x >= 50 and x <= 54) {
            print("Grade : 1");
        }
        else if (x >= 55 and x <= 59) {
            print("Grade : 1.5");
        }
        else if (x >= 60 and x <= 64) {
            print("Grade : 2");
        }
        else if (x >= 65 and x <= 69) {
            print("Grade : 2.5");
        }
        else if (x >= 70 and x <= 74) {
            print("Grade : 3");
        }
        else if (x >= 75 and x <= 79) {
            print("Grade : 3.5");
        }
        else if (x >= 80 and x <= 100) {
            print("Grade : 4");
        }
    }
    else {
        if (x <= -1){
            print("Invalid input");
            print("Please enter more than 0");
        }
        else {
            print("Grade : 0");
        }
        
    }

    return 0;
}
