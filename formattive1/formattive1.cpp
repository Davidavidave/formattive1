#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    int choose;
    int numDiv1;
    int numDiv2;
    int exit;
    int numAdd1 = 0;
    int numAdd2 = 0;
    int numSub1 = 0;
    int numSub2 = 0;
    int numMult1 = 0;
    int numMult2 = 0;
    int numMod1 = 0;
    int numMod2 = 0;

    string presCont;

    do {


        cout << "Welcome To Calculator\n";

        cout << "Select what do u want to select\n"
            << "1. Addition\n"
            << "2. Subtraction\n"
            << "3. Multiply\n"
            << "4. Divide\n"
            << "5. Modulos\n"
            << "6. Exit\n"
            << "Choose 1-6 " << endl;
        cin >> choose;

        if (choose == 6) {
            cout << "You choose exit. Thank you";
            return 0;
        }

        switch (choose) {
        case 1:
            cout << "You Choose Addition\n"
                << "Input 2 numbers that you want to add\n";
            cout << "Number 1: ";
            cin >> numAdd1;
            cout << "Number 2: ";
            cin >> numAdd2;

            cout << "The answer is: " << numAdd1 + numAdd2 << endl;

            break;

        case 2:
            cout << "You Choose Subtraction\n"
                << "Input 2 numbers that you want to subtract\n";
            cout << "Number 1: ";
            cin >> numSub1;
            cout << "Number 2: ";
            cin >> numSub2;

            cout << "The answer is: " << numSub1 - numSub2 << endl;

            break;

        case 3:
            cout << "You Choose Multiply\n"
                << "Input 2 numbers that you want to multiply\n";
            cout << "Number 1: ";
            cin >> numMult1;
            cout << "Number 2: ";
            cin >> numMult2;

            cout << "The answer is: " << numMult1 * numMult2 << endl;

            break;

        case 4:

            cout << "You Choose Divide\n"
                << "Input 2 numbers that you want to divide\n";
            cout << "Number 1: ";
            cin >> numDiv1;
            cout << "Number 2: ";
            cin >> numDiv2;

            cout << "The answer is: " << numDiv1 / numDiv2 << endl;

            break;

        case 5:

            cout << "Input 2 numbers \n";
            cout << "Number 1: ";
            cin >> numMod1;
            cout << "Number 2: ";
            cin >> numMod2;

            cout << "The answer is: " << numMod1 % numMod2 << endl;

            break;

        default:
            cout << "Invalid choice.\n";
            return 1;
        }


        cout << "Press 'y' to contiue (y/n): ";
        cin >> presCont;
    } while (presCont == "y");

    return 0;
}