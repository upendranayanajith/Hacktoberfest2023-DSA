#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Function to generate a random password of a specified length
string generatePassword(int length) {
    const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    string password;

    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % charset.length();
        password.push_back(charset[randomIndex]);
    }

    return password;
}

int main() {
    int passwordLength;

    cout << "Enter the length of the password you want to generate: ";
    cin >> passwordLength;

    if (passwordLength <= 0) {
        cout << "Password length must be greater than 0." << endl;
        return 1;
    }

    string password = generatePassword(passwordLength);

    cout << "Generated Password: " << password << endl;

    return 0;
}
