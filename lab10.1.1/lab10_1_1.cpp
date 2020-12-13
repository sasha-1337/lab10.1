#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

int search_dot(string fname) 
{
	ifstream fin(fname); 
	string s; 

	unsigned i = 0;
	while (getline(fin, s))
	{ 
		for (i = 0; i != s.length() - 4; i++);
		if (s[i] == '.')
			return i;
	}
	fin.close();
}

int search_string(string fname)
{
	ifstream fin(fname);
	char line[244];

	unsigned j = 0;
	while (fin.getline(line, sizeof(line)))
	{
		for (j = 0; j < strlen(line); j++) {
			if (line[j] == '.')
				return j;
		}
	}
	fin.close();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string fname;
	cout << " Введіть ім'я файлу: "; getline(cin, fname);

	
	cout << " Індекс четвертої крапки з кінця: " << search_dot(fname) << endl;
	cout << " Номер рядка, де знаходиться крапка: " << search_string(fname) << endl;
	

	return 0;
}