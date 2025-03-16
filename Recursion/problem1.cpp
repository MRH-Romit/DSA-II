#include <iostream>
using namespace std;

// Function to check if a character is a consonant
bool isConsonant(char ch) {
    // Convert to lowercase to handle both uppercase and lowercase
    ch = tolower(ch);
    
    // Check if it's a letter and NOT a vowel
    if (ch >= 'a' && ch <= 'z') { // It's a letter
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            return true; // It's a consonant
        }
    }
    return false; // It's not a consonant
}

// Recursive function to count consonants
int countConsonants(string str, int index) {
    // Base case: If we reach the end of the string, stop recursion
    if (index == str.length()) {
        return 0;
    }

    // Check if the current character is a consonant
    int count = 0;
    if (isConsonant(str[index])) {
        count = 1;
    }

    // Recursively count consonants in the remaining part of the string
    return count + countConsonants(str, index + 1);
}

int main() {
    string input;
    
    // Ask user to enter a string
    cout << "Enter a string: ";
    getline(cin, input);

    // Call recursive function and print the result
    int result = countConsonants(input, 0);
    cout << "Number of consonants: " << result << endl;

    return 0;
}
