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

	// ������ 1
	cout << "������ 1.\n";
	std::string str = "Hello world!";
	char sym = 'o';
	string res;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			res += sym;
	cout << res << endl;

	// ������ 2
	cout << "������ 2.\n";
	std::string str;
	cout << "������� �����: ";
	cin >> str;
	if (Word_palindrome(str)) {
		cout << "����� �������� �����������.\n\n";
	}
	else {
		cout << "����� �� �������� �����������.\n\n";
	}

	// ������ 3
	cout << "������ 3.\n������� ������: ";
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
	cout << "\n� ������ ���� " << count << " ������ ����������." << endl;
	return 0;
}