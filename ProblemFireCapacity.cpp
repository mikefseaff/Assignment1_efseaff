#include <iostream>
using namespace std;

int main (int argc, char **argv){
    /*
    maxRoomCap is an int representing the max number of people allowed in the room (input from command line)
    numPeople is an int representing the number of people invited to the event in the room (input from command line)
    */
	int maxRoomCap = atoi(argv[1]);
    int numPeople = atoi(argv[2]);
    //invalid input check
    if (maxRoomCap > 0 && numPeople > 0){
        //can use room check
        if (numPeople <= maxRoomCap){
            cout << "it is leagal to hold a meeting woohoo! " << endl;
            cout << maxRoomCap - numPeople << " people may still attend." << endl;
        }
        else {
            cout << "The meeting may not be held due to fire regulations." << endl;
            cout << numPeople - maxRoomCap << " people must be removed from the guest list." << endl;
        }
    }
    else {
        cout << "Command line input invalid or is 0 " << endl;
        cout << "Ensure the first number is the Room capacity and the second number is the number of people attending. " << endl;
        cout << "Both numbers must be integers, any decimals will be truncated" << endl;
    }
    
	return 0;
}