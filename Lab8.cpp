#include <iostream>
using namespace std;

int CountVowels(const char* str) {
    int count = 0;
    const char* vowels = "aeiouAEIOU"; // Голосні букви

    for (int i = 0; str[i] != '\0'; ++i) {
        for (int j = 0; vowels[j] != '\0'; ++j) {
            if (str[i] == vowels[j]) {
                ++count;
                break;
            }
        }
    }
    return count;
}

int main() {
    const char* testString = "Hello, World!";
    cout << "Number of vowels: " << CountVowels(testString) << endl;
    return 0;
}