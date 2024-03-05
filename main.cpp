#include <iostream>

using namespace std;

int main() {
    //Gringotts User Prompt
    cout << "Welcome to Gringotts, the goblin bank!\n";
    cout << "How many gold, silver, and copper coins would you like to deposit?\n";

    //Three variables / ptr dynamic memory
    int* ptr_goldCoins = new int;
    int* ptr_silverCoins = new int;
    int* ptr_copperCoins = new int;

    //User Input
    cout << "Enter the number of gold coins: ";
    cin >> *ptr_goldCoins;
    cout << "Enter the number of silver coins: ";
    cin >> *ptr_silverCoins;
    cout << "Enter the number of copper coins: ";
    cin >> *ptr_copperCoins;

    //Cout
    cout << "\nYou have deposited the following coins:\n";
    cout << "Gold coins: " << *ptr_goldCoins << endl;
    cout << "Pointer value for gold coins: " << ptr_goldCoins << endl;
    cout << "Silver coins: " << *ptr_silverCoins << endl;
    cout << "Pointer value for silver coins: " << ptr_silverCoins << endl;
    cout << "Copper coins: " << *ptr_copperCoins << endl;
    cout << "Pointer value for copper coins: " << ptr_copperCoins << endl;

    //Memory release
    delete ptr_goldCoins;
    delete ptr_silverCoins;
    delete ptr_copperCoins;

    return 0;
}