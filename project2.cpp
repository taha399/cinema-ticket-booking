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
    int movieChoice, movieLanguageChoice, backSeatsBooked;
    string movie_name, movieTime;
    int dayChoice;
    string dayName;
    string movieLanguage;

    void movie_days() {
        cout << "Movies available for 3 days \n\n1.Friday\n\n2.Saturday\n\n3.Sunday):\n\nFor which day you want to book your tickets: ";
        cin >> dayChoice;

        switch (dayChoice) {
            case 1:
			 dayName = "Friday";
			  break;
            case 2:
			 dayName = "Saturday";
			  break;
            case 3:
			 dayName = "Sunday";
			  break;
            default: {
			 cout << "wrong choice ";
			  break;
			   }
        }

        cout << "\nWhat type of movie would you like to watch\n\n1.English \n\n2.Punjabi \n\n";
        cin >> movieLanguageChoice;

        switch (movieLanguageChoice) {
            case 1:
			 movieLanguage = "English";
			  break;
            case 2:
			 movieLanguage = "Punjabi";
			  break;
            default: { 
			cout << "wrong choice ";
			 break;
			  }
        }

        if (movieLanguageChoice == 1) {
            cout << "Available movies for 3 days (Friday, Saturday, Sunday):\n";
            cout << "1. Interstellar\n2. AVATAR\n3. Cyber Hell\nChoose (1-3): ";
            cin >> movieChoice;

            int time;
            cout << "\nSelect the movie show time (1-3):\n";
            cout << "1. 08:00 AM\n2. 03:00 PM\n3. 07:00 PM\n";
            cin >> time;

            switch (time) {
                case 1:
				 movieTime = "08:00 AM";
				  break;
                case 2:
				 movieTime = "03:00 PM";
				  break;
                case 3:
				 movieTime = "07:00 PM";
				  break;
                default: movieTime = "Unknown"; cout << "Invalid movie choice.\n";
            }

            switch (movieChoice) {
                case 1:
				 movie_name = "Interstellar";
				  break;
                case 2:
				 movie_name = "AVATAR";
				  break;
                case 3:
				 movie_name = "Cyber Hell";
				  break;
                default: movieTime = "Unknown"; cout << "Invalid movie choice.\n";
            }

            switch (time) {
                case 1: cout << "15 of front seats are booked and 35 back seats are available at this time.\n"; break;
                case 2: cout << "25 of front seats are booked and 25 back seats are available at this time.\n"; break;
                case 3: cout << "30 of front seats are booked and 20 back seats are available at this time.\n"; break;
                default: cout << "Invalid time selected.\n";
            }

            cout << "Can you tell how many back seats you want to book? ";
            cin >> backSeatsBooked;
            cout << "Booking successfully! Your seat has been reserved\n";
        }

        if (movieLanguageChoice == 2) {
            cout << "Available movies for Today:\n";
            cout << "1. Sardaar ji 3 \n2. Chal mera putt\n3. Jutt && Juliate \nChoose (1-3): ";
            cin >> movieChoice;

            int time;
            cout << "\nSelect the movie show time (1-3):\n";
            cout << "1. 08:00 AM\n2. 03:00 PM\n3. 07:00 PM\n";
            cin >> time;

            switch (time) {
                case 1:
				 movieTime = "08:00 AM";
				  break;
                case 2:
				 movieTime = "03:00 PM";
				  break;
                case 3:
				 movieTime = "07:00 PM";
				  break;
                default:
				 movieTime = "Unknown";
				  cout << "Invalid movie choice.\n";
            }

            switch (movieChoice) {
                case 1:
				 movie_name = "Sardaar ji 3";
				  break;
                case 2:
				 movie_name = "Chal mera putt";
				  break;
                case 3:
				 movie_name = "Jutt && Juliate";
				  break;
                default:
				 movie_name = "Unknown";
				  cout << "Invalid movie choice.\n";
            }

            switch (time) {
                case 1: cout << "20 of front seats are booked and 30 back seats are available at this time.\n"; break;
                case 2: cout << "25 of front seats are booked and 25 back seats are available at this time.\n"; break;
                case 3: cout << "30 of front seats are booked and 20 back seats are available at this time.\n"; break;
                default: cout << "Invalid time selected.\n";
            }

            cout << "\nCan you tell how many back seats you want to book? ";
            cin >> backSeatsBooked;
    }
    }
	void thanks(){
	cout << "--------------------------------------------------------------------------------------";
            cout << "\n\nBooking successfully! Your seat has been reserved\n\nThank you very much for contacting us\n\nCome on " << dayName << " to hall number 4\n\n ";
}
};

class customer : public movie {
public:
    void ud() {
        cout << "\n--- Booking Summary ---\n\n";
        cout << "Customer Name: " << user_name << endl;
        cout << "Customer Email: " << user_email << endl;
        cout << "Movie Type: " << movieLanguage << endl;
        cout << "Movie Day: " << dayName << endl;
        cout << "Movie Time: " << movieTime << endl;
        cout << "Movie Selected: " << movie_name << endl;
        cout << "Seat Reserved: " << backSeatsBooked << endl;
    }
};

int main() {
    cout << "--------- Welcome to Plex Cinema ---------\n\n";
    cout << "             Hope you're doing good               \n\n";

    customer m;
    m.user_details();
    m.movie_days();
    m.thanks();

    m.ud();
   
    return 0;
}
