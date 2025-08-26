#include <iostream>
using namespace std;

class User {
public:
    string user_name;
    string user_email;

    void getUserDetails() {
        cout << "Enter your name: ";
        cin >> user_name;
        cout << "Enter your working email: ";
        cin >> user_email;
        cout << endl;
    }
};

class Movie : public User {
public:
    int moviechoice, movielanguagechoice, backSeats, ticket_price;
    string movie_name, movieTime;
    int dayChoice;
    string dayname;
    string movielanguage;
    int availableSeats;

    void choose_movie() {
        cout << "Movies available for 3 days \n\n1. Friday\n2. Saturday\n3. Sunday\n\nChoose day: ";
        cin >> dayChoice;

        switch (dayChoice) {
            case 1: dayname = "Friday"; break;
            case 2: dayname = "Saturday"; break;
            case 3: dayname = "Sunday"; break;
            default: cout << "Invalid day selected:";
        }

        cout << "\nSelect movie language:\n1. English\n2. Punjabi\nChoose: ";
        cin >> movielanguagechoice;

        switch (movielanguagechoice) {
            case 1: movielanguage = "English"; break;
            case 2: movielanguage = "Punjabi"; break;
            default: cout << "Invalid choice";
        }

        if (movielanguage == "English") {
            cout << "\nAvailable English movies:\n1. Interstellar\n2. Avatar\n3. Cyber Hell\nChoose (1-3): ";
            cin >> moviechoice;
            switch (moviechoice) {
                case 1: movie_name = "Interstellar"; break;
                case 2: movie_name = "Avatar"; break;
                case 3: movie_name = "Cyber Hell"; break;
                default: movie_name = "Unknown"; cout << "Invalid choice.\n";
            }
        } else {
            cout << "\nAvailable Punjabi movies:\n1. Sardaar Ji 3\n2. Chal Mera Putt\n3. Jatt & Juliet\nChoose (1-3): ";
            cin >> moviechoice;
            switch (moviechoice) {
                case 1: movie_name = "Sardaar Ji 3"; break;
                case 2: movie_name = "Chal Mera Putt"; break;
                case 3: movie_name = "Jatt & Juliet"; break;
                default: movie_name = "Unknown"; cout << "Invalid choice.\n";
            }
        }

        cout << "\nSelect show time:\n1. 08:00 AM\n2. 03:00 PM\n3. 07:00 PM\nChoose (1-3): ";
        int time;
        cin >> time;
        switch (time) {
            case 1: movieTime = "08:00 AM"; 
			availableSeats = 35; break;
            case 2: movieTime = "03:00 PM";
			 availableSeats = 25; break;
            case 3: movieTime = "07:00 PM";
			 availableSeats = 20; break;
            default: movieTime = "Unknown";
        }

        cout << "\nAvailable back seats: " << availableSeats << " & Price: 600 Rs for each\n";
        cout << "How many seats do you want to book? ";
        cin >> backSeats;
        ticket_price = 600 * backSeats;
    }

    void bookingConfirmation() {
        cout << "\n-------------------------------------------------------------";
        cout << "\n Booking Successful Your seats have been reserved :-)\n";
        cout << " Thank you for choosing Plex Cinema\n";
        cout << " Please arrive 15 minutes before showtime\n";
        cout << "-------------------------------------------------------------\n";
    }
};

class Customer : public Movie {
public:
    void bookingSummary() {
        cout << "\n----------- BOOKING SUMMARY ---------------\n";
        cout << "Customer Name   : " << user_name << endl;
        cout << "Customer Email  : " << user_email << endl;
        cout << "Movie Language  : " << movielanguage << endl;
        cout << "Movie Name      : " << movie_name << endl;
        cout << "Day             : " << dayname << endl;
        cout << "Show Time       : " << movieTime << endl;
        cout << "Seats Reserved  : " << backSeats << endl;
        cout << "Total Bill      : " << ticket_price << " Rs\n";
        cout << "----------------------------------------------\n";
    }
};

int main() {
    cout << "-------- Welcome to Plex Cinema ----------\n";
    cout << "          Hope you're doing good<3        \n\n";

    Customer c;
    c.getUserDetails();
    c.choose_movie();
    c.bookingConfirmation();
    c.bookingSummary();

    return 0;
}
