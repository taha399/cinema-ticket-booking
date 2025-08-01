#include <iostream>
using namespace std;
class user {
public:
    string user_name;
    string user_email;

    void user_details() {
        cout << "Enter your name: ";
        cin >> user_name;
        cout << "Enter your working email: ";
        cin >> user_email;
        cout << endl;
    }
};

class movie : public user {
public:
    int m;
    int seat_number;
    string movie_name;

    void am() {
        cout << "Available movies for Today:\n";
        cout << "1. Interstellar\n2. AVATAR\n3. Cyber Hell\nChoose (1-3): ";
        cin >> m;

        int time;
        cout << "\nSelect the movie show time (1-3):\n";
        cout << "1. 08:00 AM\n2. 03:00 PM\n3. 07:00 PM\n";
        cin >> time;

        switch (m) {
        case 1:
            movie_name = "Interstellar";
            break;
        case 2:
            movie_name = "AVATAR";
            break;
        case 3:
            movie_name = "Cyber Hell";
            break;
        default:
            movie_name = "Unknown";
            cout << "Invalid movie choice.\n";
        }

        switch (time) {
        case 1:
            cout << "40 seats are available at this time.\n";
            break;
        case 2:
            cout << "30 seats are available at this time.\n";
            break;
        case 3:
            cout << "50 seats are available at this time.\n";
            break;
        default:
            cout << "Invalid time selected.\n";
        }

        cout << "Which seat number do you want to book? ";
        cin >> seat_number;
        cout << "Booking successfully! your seat has been reserved\n";
    }
};

class customer : public movie {
public:
    void ud() {
        cout << "\n--- Booking Summary ---\n";
        cout << "Customer Name: " << user_name << endl;
        cout << "Customer Email: " << user_email << endl;
        cout << "Movie Selected: " << movie_name << endl;
        cout << "Seat Number: " << seat_number << endl;
    }
};

int main() {
    cout << "--------- Welcome to Plex Cinema ---------\n\n";

    customer m;
    m.user_details();
    m.am();
    m.ud();

    return 0;
}

