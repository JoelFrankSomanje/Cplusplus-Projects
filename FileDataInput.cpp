#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;
// Functions definition for our program

// Function to count the vowels
int cntVowels(const string & data) {
    int count = 0;
    for (char ch : data) {
        ch = tolower(ch); // This statement makes character lowercase
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}
// Funtion for counting words in our program
int cntWords(const string & data) {
    int count = 0;
    bool word = false;

    for (char ch : data) {
        if (isspace(ch)) {
            if (word) {
                count++;
                word = false;
            }
        }
        else {
            word = true;
        }
    }
    if (word) count++; // for the last word.
    return count;
}
// Function for reversing a string
string rev(const string & data) {
   string reverse = data;
   int n = reverse.length();

   for (int i = 0; i < n / 2; ++i) {
        swap(reverse[i], reverse[n - 1 - i]);
   }
   
   return reverse;
}

// Function to capitalize second letter of each word
string capitalization(const string & data) {
    string result = data;
    bool nWord = true;
    int letterCnt = 0;

    for (size_t i = 0; i<result.length(); ++i) {
        if (isspace(result[i])) {
            nWord = true;
            letterCnt = 0;
        }
        else {
            if (nWord) {
                letterCnt = 1;
                nWord = false;
            }
            else {
                letterCnt++;
                if (letterCnt == 2) {
                    result[i] = toupper(result[i]);
                }
            }
        }        
    }
    return result;
}

int main() {
    string fileData;
    string filename = "inputFile.txt"; // make sure the file is named "input.txt".
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Errors in opening the file" << endl;
        return 1;
    }
    // Read the contents of the whole fileData
    getline(file, fileData);
    file.close();

    cout << "Original file Data contents: " << fileData << endl;

    // count and output vowels
    int vowel = cntVowels(fileData);
    cout << "The Number of vowels are: " << vowel << endl;

    // count and output words
    int word = cntWords(fileData);
    cout << "The Number of words are: " << word << endl;

    // Reverse the String and output it
    string reverse = rev(fileData);
    cout << "The reversed text is: " << reverse << endl;

    // Capitalize second letter of which word and output it
    string capitalized = capitalization(fileData);
    cout << "The second letter capitalized are: " << capitalized << endl;

    return 0;
}