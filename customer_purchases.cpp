#include <iostream>
using namespace std;

class customer {
public:
    int id;
    int purchases;
    void display() {
        cout << "ID: " << id << endl;
        cout << "Purchases: " << purchases << endl;
    }
};

int main() {
    char choice;
    customer c1 = {001, 0};
    
    while (true) {
        cout << "Do you wish to purchase an item? (Y/N)\n";
        cin >> choice;
        
        try {
            if (choice == 'Y' || choice == 'y') {
                c1.purchases += 1;
                cout << "Purchase made successfully." << endl;
            } else if (choice == 'N' || choice == 'n') {
                cout << "No purchase made." << endl;
                break; 
            } else {
                throw choice; 
            }
        }
        catch (char a) {
            cout << "ERROR: Invalid input '" << a << "', please try again." << endl;
        }
    }
    
    cout << "\nCustomer Summary:" << endl;
    c1.display();
    
    return 0;
}

/*
OUTPUT
Do you wish to purchase an item? (Y/N)
y
Purchase made successfully.
Do you wish to purchase an item? (Y/N)
a
ERROR: Invalid input 'a', please try again.
Do you wish to purchase an item? (Y/N)
n
No purchase made.

Customer Summary:
ID: 1
Purchases: 1
*/
