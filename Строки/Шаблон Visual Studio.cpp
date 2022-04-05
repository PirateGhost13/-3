#include <iostream>
#include <string>
using namespace std;

bool Word_palindrome(string word) {
	int len = word.length();
	for (int i = 0; i < len / 2; ++i) {
		if (word[i] != word[len - i - 1]) {
			return false;
		}
	}
	return true;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int k = 0;

	// Задача 1
	cout << "Задача 1.\n";
	std::string str = "Hello world!";
	char sym = 'o';
	string res;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			res += sym;
	cout << res << endl;

	// Задача 2
	cout << "Задача 2.\n";
	std::string str;
	cout << "Введите слово: ";
	cin >> str;
	if (Word_palindrome(str)) {
		cout << "Слово является палиндромом.\n\n";
	}
	else {
		cout << "Слово не является палиндромом.\n\n";
	}

	// Задача 3
	cout << "Задача 3.\nВведите строку: ";
	char s[50];
	const char mas[] = { '.', ',', '!', '?', ' ' };
	cin >> k;
	bool gets(s);
	int count = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		for (int k = 0; k < sizeof(mas); k++) {
			if (s[i] == mas[k]) {
				count++;
			}
		}
	}
	cout << "\nВ строке было " << count << " знаков препинания." << endl;
	return 0;
}