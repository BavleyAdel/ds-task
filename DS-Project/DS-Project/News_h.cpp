#include "news_h.h"
#include "admin.h"
#include <string>
#include <iostream>
using namespace std;

news_h::news_h() {
	enterData();
}

void news_h::enterData() {
	static int id = 0;
	cout << "Enter news title" << endl;
	getline(cin , title);
	cin.clear();
	cout << "Enter news description" << endl;
	getline(cin , description);
	cin.clear();
	cout << "Enter news category" << endl;
	getline(cin , category);
	cin.clear();
	cout << "Enter news date" << endl;
	getline(cin , date);
	cin.clear();
	cout << "You have successfully entered new number: " << ++id << endl;
	this->id = id;
	cin.clear();
}


news_h news_h::changeData(int field , news_h n) {
	switch (field)
	{
	case 1:
		cout << "Enter news new title" << endl;
		cin.clear();
		getline(cin, n.title);
		break;
	case 2:
		cout << "Enter news new description" << endl;
		cin.clear();
		getline(cin, n.description);
		break;
	case 3:
		cout << "Enter news new category" << endl;
		cin.clear();
		getline(cin, n.category);
		break;
	case 4:
		cout << "Enter news new date" << endl;
		cin.clear();
		getline(cin, n.date);
		break;
	default:
		break;
	}
	return n;
}


void news_h::displayData() {
	cout << "News no.: " << id << endl;
	cout << "News title: " << title << endl;
	cout << "News description: " << description << endl;
	cout << "News category: " << category << endl;
	cout << "News date: " << date << endl;
}
//
//void news_h::decreaseId() {
//	id--;
//}

