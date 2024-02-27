#include <iostream>
using namespace std;

string encrypt(string text, int s) {
  string result = "";

  for (int i = 0; i < text.length(); i++) {
    if (isalpha(text[i])) {
      if (isupper(text[i]))
        result += char(int(text[i] + s - 65) % 26 + 65);
      else
        result += char(int(text[i] + s - 97) % 26 + 97);
    } else {
      result += text[i];
    }
  }
  return result;
}

void displayAllEncryptions(string text) {
  cout << "\nAll possible encryptions:" << endl;
  for (int s = 0; s < 26; s++) {
    cout << "Shift " << s << ": " << encrypt(text, s) << endl;
  }
}

int main() {
  string text;
  cout << "Caesar Cipher" << endl;
  cout << "Enter text to cipher : ";
  getline(cin, text);

  int choice;
  cout << "Choose an option : " << endl;
  cout << "1. Encrypt with a specific shift" << endl;
  cout << "2. Display all possible encryptions" << endl;
  cout << "Enter your choice: ";
  cin >> choice;

  if (choice == 1) {
    int s;
    cout << "Enter shift key: ";
    cin >> s;
    cout << "Text: " << text << endl;
    cout << "Shift: " << s << endl;
    cout << "Cipher: " << encrypt(text, s) << endl;
  } else if (choice == 2) {
    displayAllEncryptions(text);
  } else {
    cout << "Invalid choice!" << endl;
  }

  return 0;
}
