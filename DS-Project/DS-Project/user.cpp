//#include "user.h"
//#include "news.h"
//#include <iterator>
//#include <iostream>
//#include <cmath>
//#include <set>
//#include <vector>
//
//using namespace std;
//
//int news::newsCount = 0;
//
//
//User::User()
//{
//	username = "";
//	password = "";
//}
//User::User(string inputUserName, string inputPassword)
//{
//	username = inputUserName;
//	password = inputPassword;
//}
//void User::addComment(News& obj)
//{
//	Comment userComment;
//	cout << "\nEnter Your Comment\n";
//	cin >> userComment.commentContent;
//	userComment.username = username;
//	obj.comments.push_back(userComment);
//}
//
//void User::rateNews(News& obj)
//{
//	float newRate = 0.0;
//	do
//	{
//	re:
//		cout << "\nEnter Your Rate (Please Enter A Number from  1 to 5)\n";
//		cin >> newRate;
//		if (!cin)
//		{
//			cin.clear();
//			cin.ignore(numeric_limits<streamsize> ::max());
//			goto re;
//		}
//	} while (newRate > 5 || newRate <= 0);
//	obj.numOfRatedUsers++;
//	obj.rate = ceil(((obj.rate * (obj.numOfRatedUsers - 1)) + newRate) / obj.numOfRatedUsers);
//}
//
//void User::displayNews(News& obj)
//{
//	if (obj.rate < 2 && obj.spamCount >= 3)
//	{
//		system("cls");
//		cout << obj.date.day << "-" << obj.date.mounth << "-" << obj.date.year << endl;
//		cout << "Title : " << obj.title << endl;
//		cout << "Category : " << obj.category << endl;
//		cout << "Rate : " << obj.rate << endl;
//		cout << "Number of people who spammed : " << obj.spamCount << endl;
//		cout << "Description : \n";
//		cout << obj.description << endl;
//		int choice;
//		do
//		{
//			cout << "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\ \n";
//			cout << "Enter The Number Which You Want To Choice\n";
//			cout << "1- comment \n2- rate \n3-display all comments \n4- spam \n5- skip to next news\n";
//			cin >> choice;
//			if (choice == 1)
//				addComment(obj);
//			else if (choice == 2)
//				rateNews(obj);
//			else if (choice == 3)
//				displayAllComments(obj);
//			else if (choice == 4)
//				spamNews(obj);
//			else if (choice == 5)
//				system("cls");
//			else
//			{
//				cout << "Invalid Number\n";
//				system("pause");
//			}
//
//		} while (choice != 5);
//
//	}
//
//}
//void User::displayByCategory(vector<News>& allNews, Admin obj)
//{
//	int i = 1;
//	string choice;
//	set<string>::iterator it = obj.categries.begin();
//	cout << "Please Ente The Category That You Want." << endl;
//	while (it != obj.categries.end())
//	{
//		cout << i << "- " << (*it) << endl;
//		it++;
//		i++;
//	}
//	cin >> choice;
//	bool foundcategory = false;
//	vector<News>::iterator itv = allNews.begin();
//	while (itv != allNews.end())
//	{
//		if ((*itv).category == choice)
//		{
//			displayNews(*itv);
//			bool foundcategory = true;
//		}
//		it++;
//	}
//	if (!foundcategory)
//		cout << "No news is posted in this category yet\n";
//}