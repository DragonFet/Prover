﻿#include <iostream>
#include <ctime>
#include <string>
#include<algorithm>
using namespace std;
int getValue()
{
	while (true)
	{
		cout << "Please input VALLUE";
		cout << '\n';
		int a;
		cin >> a;
		cout << '\n';

		if (cin.fail())
		{
			cin.clear(); // 
			cin.ignore(32767, '\n');
		}
		else return a;

	}

}

struct student
{
	string name;
	string surname;
	string cours_0;
	string cours_1;
	int group_number;
};

int main()
{
	string a="dawdawdawd";
	string b;
	b = a;
	cout << b << endl;
	setlocale(LC_ALL, "Russian");
	int vallue_student;
	cout << '\n';
	cout << "How many students do you want add?";
	cout << '\n';
	vallue_student = 0;
	student* information = new student[vallue_student + 1];
	
	/*for (int i = 0; i < vallue_student; i++)
	{
		cout << "Input name";
		cout << '\n';
		cin >> information[i].name;
		cout << "Input surname";
		cout << '\n';
		cin >> information[i].surname;
		cout << "Input corses 1";
		cout << '\n';
		cin >> information[i].cours_0;
		cout << '\n';
		cout << "Input corses 2 if student doesnt have 2 corses tab 0";
		cout << '\n';
		cin >> information[i].cours_1;
		cout << '\n';
		cout << "Input group number" << '\n';
		cin >> information[i].group_number;
	}
	system("cls");
	*/
	//Добавление нового 

	int solution = 4;
	while (solution != 3)
	{
		cout << "..........................Menu..........................";
		cout << '\n';
		cout << "1-add new student in date";
		cout << '\n';
		cout << "2-print information about student";
		cout << '\n';
		cout << "3- Exit from program";
		cout << '\n';
		cout << "Check function" << '\t';
		solution = getValue();
		cout << '\n';
		system("cls");
		switch (solution)
		{
		case 1:
		{
			
			student* information_tmp = new student[vallue_student+1];
			for (int i = 0; i < vallue_student; i++)
			{
				information_tmp[i].name =		information[i].name;
				information_tmp[i].surname =	information[i].surname;
				information_tmp[i].cours_0 = information[i].cours_0;
				information_tmp[i].cours_1 = information[i].cours_1;
				information_tmp[i].group_number = information[i].group_number;

			}
			delete[] information;
			student* information = new student[vallue_student+2];
			for (int i = 0; i < vallue_student; i++)
			{
				information[i].name =			information_tmp[i].name;
				information[i].surname =		information_tmp[i].surname;
				information[i].cours_0 =		information_tmp[i].cours_0;
				information[i].cours_1 =		information_tmp[i].cours_1;
				information[i].group_number =	information_tmp[i].group_number;

			}
			delete[] information_tmp;
			cout << "Input name";
			cout << '\n';
			cin >> information[vallue_student ].name;
			cout << "Input surname";
			cout << '\n';
			cin >> information[vallue_student ].surname;
			cout << "Input corses 1";
			cout << '\n';
			cin >> information[vallue_student ].cours_0;
			cout << '\n';
			cout << "Input corses 2 if student doesnt have 2 corses tab 0";
			cout << '\n';
			cin >> information[vallue_student ].cours_1;
			cout << '\n';
			cout << "Input group number" << '\n';
			cin >> information[vallue_student ].group_number;
			cout << '\n';
			cout << "Succesfull";
			cout << '\n';
			system("pause");
			system("cls");
			vallue_student++;
			break;
		}
		//Прочесть о
		case 2:
		{
			int change_student;
			cout << "Please input number student" << '\t';
			change_student = getValue();
			cout << '\n';
			cout << ".................Information about student №" << change_student << " " << ".................";
			cout << '\n';
			cout << " Name student is :>>>" << '\t' << information[change_student].name;
			cout << '\n';
			cout << " Surname student is :>>>" << '\t' << information[change_student].surname;
			cout << '\n';
			if (information[change_student].cours_1 == "0")
			{
				cout << " Cors student is :>>>" << '\t' << information[change_student].cours_0;
			}
			else cout << " Corses student is :>>>" << '\t' << information[change_student].cours_0 + " " + information[change_student].cours_1;
			cout << '\n';
			cout << " Number group student is :>>>" << '\t' << information[change_student].group_number;
			cout << '\n';
			cout << "..................ENDING..................";
			cout << '\n';
			system("pause");
			system("cls");
			break;
		}
		case 3:
		{
			solution = 3;
			break;
		}
		}
	}
	//Поиск по направлению
	string find;
	cout << '\n';
	cout << "Please input corus whose student do you want find";
	cout << '\n';
	cin >> find;
	cout << '\n';
	cout << "........Finding........";
	for (int i = 0; i < vallue_student; i++)
	{
		if ((information[i].cours_0 == find) || (information[i].cours_1 == find))
		{
			cout << '\n';
			cout << information[i].name + " " + information[i].surname;
		}
	}
	cout << '\n';
	system("pause");
	//Поиск по направлению и номеру группы
	system("cls");
	cout << " Please input cours";
	string cours_2;
	cout << '\n';
	cin >> cours_2;
	cout << '\n';
	cout << " Please input number student group";
	cout << '\n';
	int group;
	group = getValue();
	string* finding_names = new string[vallue_student];
	for (int i = 0; i < vallue_student; i++)
	{
		finding_names[i] = "@";
	}
	cout << '\n';
	int cheking = 0;
	cout << "........Finding........";
	for (int i = 0; i < vallue_student; i++)
	{
		if (((information[i].cours_0 == find) || (information[i].cours_1 == find)) && (information[i].group_number == group))
		{
			finding_names[cheking] = information[i].name + " " + information[i].surname;
			cheking++;
		}
	}
	if (cheking == 0)
	{
		cout << '\n';
		cout << "Not founded";
	}
	else
	{
		cout << '\n';
		sort(finding_names, finding_names + cheking);
		for (int i = 0; i < cheking; i++)
		{
			cout << finding_names[i] << '\n';
		}
	}


}