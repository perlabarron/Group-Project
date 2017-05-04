#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;


int main(int argc, char* argv[])
{

	ifstream file("E:\\names.txt");

	if (!file.is_open())
	{
		cout << "Unable to open file";
		return -1;
	}

	vector<string> words;
	string token;

	while (getline(file, token, ','))
	{
		words.push_back(token);
	}

	sort(words.begin(), words.end());

	int counter = 0;
	unsigned int grand_total = 0;

	for (auto it = words.begin(); it != words.end(); it++)
	{
		counter++;
		string word((*it).begin() + 1, (*it).end() - 1);

		int sub_total = 0;
		for (string::iterator it = word.begin(); it != word.end(); it++)
		{
			sub_total += *it - 64;
		}

		grand_total += sub_total*counter;
	}

	system("pause");

	return 0;
}
