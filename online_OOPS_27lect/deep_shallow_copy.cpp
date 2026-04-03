#include <iostream>
#include <cstring>
using namespace std;

/////BLUEPRINT///////
class car {
private:
    int price;
public:
    char *name;
    int model;

    // default constructor
    car() {
        name = NULL; // Initialize pointer
    }

    // parameterized constructor 1
    car(char *n, int p, int m) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        price = p;
        model = m;
    }

    // parameterized constructor 2 (overload)
    car(int p, int m, char *n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        price = p;
        model = m;
    }

    // copy constructor
    car(car &S) { // always pass by reference
        // Allocate memory for the new object's name
        name = new char[strlen(S.name) + 1]; 
        strcpy(name, S.name);
        name=S.name;
        price = S.price;
        model = S.model;
    }

    // copy assignment operator
    void operator=(car &S) {
        // Handle self-assignment if necessary
        if (this == &S) return;

        // Clean up existing memory before allocating new
        if (name != NULL) {
            delete[] name;
        }

        name = new char[strlen(S.name) + 1];
        strcpy(name, S.name);
        price = S.price;
        model = S.model;
    }

    void print() {
        cout << "Name: " << (name ? name : "N/A") << endl; // Check if name is null
        cout << "price: " << price << endl;
        cout << "model: " << model << endl;
    }

    void setprice(int p) {
        if (p >= 160 && p < 200) {
            price = p;
        } else {
            price = 180;
        }
    }

    int getprice() {
        return price;
    }

    void setname(char *n) {
        if (name != NULL) {
            delete[] name;
        }
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Destructor to free dynamically allocated memory
    ~car() {
        if (name != NULL) {
            delete[] name;
        }
    }
};

//////BLUEPRINT///////
int main() {
    car A; // A is an object of class car
    A.setname("BMW");
    A.setprice(160);
    A.model = 2000;

    car B=A;
    car C=B;
    car D=C;

    A.print();
    B.print();
    C.print();
    D.print();

    return 0;
}
