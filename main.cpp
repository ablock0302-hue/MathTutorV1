



#include <iostream>
using namespace std;

int main() {

    //Initial Values before User enters any information.
    string userName = "unknown";
    int userAnswer = 0;
    int leftNum = 2;
    int rightNum = 3;
    int answer = 0;

    //ASCII text
    cout << R"(
     ____  __  __    __    _  _    _  _   __  ____  _  _    ____  _  _  ____  __  ____
    / ___)(  )(  )  (  )  ( \/ )  ( \/ ) / _\(_  _)/ )( \  (_  _)/ )( \(_  _)/  \(  _ \
    \___ \ )( / (_/\/ (_/\ )  /   / \/ \/    \ )(  ) __ (    )(  ) \/ (  )( (  O ))   /
    (____/(__)\____/\____/(__/    \_)(_/\_/\_/(__) \_)(_/   (__) \____/ (__) \__/(__\_) )" << endl;

    //Divide between ASCII text and welcome
    cout << "********************************************************" << endl;
    cout << "*      Welcome to the Silly Simple Math Tutor V1       *" << endl;
    cout << "********************************************************" << endl;

    //Fun Math facts
    cout << "Fun math facts:" << endl;
    cout << "   *Math teachers have problems." << endl;
    cout << "   *Math is the only subject that counts" << endl;
    cout << "   *If it seems easy, you're doing it wrong." << endl;
    cout << "   *It's all fun and games until someone divides by zero!" << endl;

    cout << "********************************************************" << endl;

    //User input along with general specification
    cout << "What is your name?" << endl;

    //Program getting the User's Name
    cin >> userName;
    cout << "Welcome to Silly Math Tutor " << userName << "!" << endl;

    //Addition portion
    cout << "What is " << leftNum << " + " << rightNum << " = ";
    cin >> answer;

    //Final Message
    cout<< "Sorry, this is all the program does for the moment." << endl;
    cout << "Version 2 is coming soon..." << endl;

    return 0;
}
