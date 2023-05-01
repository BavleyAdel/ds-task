#pragma once
#include <vector>
#include <string>
#include "news_h.h"
#include <iostream>
using namespace std;
class admin
{
	//hash table stores usernames & passwords
	vector<news_h> myNews;
public:
	admin();
	void login();
	void postNews();
	void removeNews();
	void updateNews();
	void addCategory();
	int avgRate();
	void displayNews();
	void homeScreen();
	//news_h cloneOneNews(int);
};

