#include <iostream>
#include <string>
using namespace std;

class Driver {
private:
    int driverID;
    string drivername;
    double rating;

public:
    // 1. Parameterized Constructor: Object bante hi aik line mein data set ho jaye ga
    Driver(int id, string name) {
        driverID = id;
        drivername = name;
        rating = 5.0; // Requirement: Starting rating automatically 5.0 hogi
    }

    // 2. Getter Functions: Yeh functions sirf value return karte hain, cout nahi karte
    int getID() {
        return driverID;
    }

    string getName() {
        return drivername;
    }

    double getRating() {
        return rating;
    }

    // 3. Setter/Update Function: Sirf rating badalne ke liye
    void updateRating(double newRating) {
        rating = newRating;
    }
};

int main() {
    int ids;
    string namee;
    double newRaating;

    // Inputs lena
    cout << "Enter your id: ";
    cin >> ids;

    cout << "Enter your name: ";
    cin >> namee;

    // 4. Elite Method: Object banate hi ID aur Name constructor ko pass kar diye
    Driver t1(ids, namee);

    cout << "\n--- Driver Profile Created ---" << endl;
    // Getters ko use kar ke data print karna
    cout << "Driver ID: " << t1.getID() << endl;
    cout << "Driver Name: " << t1.getName() << endl;
    cout << "Initial Rating: " << t1.getRating() << endl;

    // Rating update karna
    cout << "\nGive him new rating: ";
    cin >> newRaating;
    t1.updateRating(newRaating);

    // Final verification
    cout << "Updated Rating is: " << t1.getRating() << endl;

    return 0;
}