//Vincent Ly
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string text;
	ifstream ifs("names.txt");

	int totalscore = 0;
	int spot = 0;
	//int *eachValue;

	string name[5164];
	
	string temp;

	while (!ifs.eof())
	{

		getline(ifs, text);
		
		name[spot] = text;
		
		//for (int i = 0; i < text.size(); i++)
		//{
			
		//	cout << "It works ";
		//}

		//cout << name[spot] << endl;

		spot++;

		//cout << text.size() << " ";
		//cout << "" << text << endl;
		
	}

	string nameSort[5164];

	for (int i = 0; i < spot; i++)
	{
		for (int j = 0; j < spot; j++)
		{
			if (name[j + 1] < name[j])
			{
				temp = name[j];
				name[j] = name[j + 1];
				name[j + 1] = temp;
			}
		}
	}

	
	
	/*for (int i = 0; i < 5164; i++)
	{
		cout << nameSort[i] << endl;
	}*/
	system("pause");
	
	

	return 0;
}
