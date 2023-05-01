#pragma once
#include "string"
#include <iostream>
using namespace std;
#include "stack"
class news_h
{
	
	string title, description, category;
	string date;
	int rate = 0;
	int id;
public:
	news_h();
	void enterData();
	void displayData();
	news_h changeData(int, news_h);
	//static void decreaseId();
};