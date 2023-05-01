#include "admin.h"
#include "news.h"
#include <string>
#include <iostream>
using namespace std;
admin::admin() {

}
void admin::login(){
	string username, password;
	cout << "Enter Username: " << endl;
	cin >> username;
	cout << "Enter Password: " << endl;
	cin >> password;
	//validate
	homeScreen();
}
void admin::displayNews() {
	if (myNews.empty()) {
		cout << "Sorry! No News anymore." << endl;
	}
	else {

	for (size_t i = 0; i < myNews.size();i++)
	{
		myNews.at(i).displayData();
	}
	}
}
void admin::homeScreen() {
	cout << "Hello to News Page" << endl <<
		"1-> Display News." << endl << 
		"2-> Post News." << endl << 
		"3-> Update News." << endl << 
		"4-> Remove News."<<endl << 
		"5-> Add Category." << endl << 
		"Enter the number of your choice" << endl;
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
		displayNews();
		break;
	case 2:
		postNews();
		break;
	case 3:
		updateNews();
		break;
	case 4:
		removeNews();
		break;
	case 5:
		addCategory();
		break;
	default:
		break;
	}
}



void admin::postNews() {
	char c;
	do {
		news_h n = news_h();
		myNews.push_back(n);
		cout << "Post another one (y/n)?" << endl;
		cin >> c;
	} while (c == 'y' || c == 'Y');
}

void admin::updateNews() {
	cout << "Enter news Id to be updated :" << endl;
	int index , input;
	cin >> index;
	news_h n = myNews.at(index-1);
	//myNews.erase(myNews.begin() + index);
	n.displayData();
	cout << "Enter the field number you would like to update: " << endl;
	cin >> input;
	myNews.at(index-1)= n.changeData(input, n);
	cout << "updated successfully" << endl;
	myNews.at(index-1).displayData();
}

//news_h admin::cloneOneNews(int index) {
//	return myNews.at(index);
//}

void admin::removeNews() {
	cout << "Enter news number to be deleted: " << endl;
	int num;
	cin >> num;
	//erase(index-> form of iterator)
	myNews.erase(myNews.begin()+num-1);
	//news_h::decreaseId();
}
void admin::addCategory() {
	
}
int admin::avgRate() { return 0; }
