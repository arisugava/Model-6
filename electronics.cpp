#include<iostream>
#include"electronics.h"
#include<string>
using namespace std;



	Electronics::Electronics(string name, int price)
	{
		Name = name;
		Price = price;
	}	

	int Electronics::getPrice() const
	{
		cout << Price << endl;
		return Price;
	}

	void Electronics::setPrice(int value)
	{
		Price = value;
	}

	void Electronics::Show()
	{
		
		cout << "I Electronics" << endl;
	}
	//////////////////////



	Monitor::Monitor(string name, int price)
	{
		Name = name;
		Price = price;
	}

	

	int Monitor::getPrice()const
	{
		cout << Price << endl;
		return Price;
	}

	void Monitor::setPrice(int value)
	{
		Price = value;
	}

	void Monitor::Show() 
	{
		cout << "I Monitor" << endl;
	}
	
	///////////////////////


	PC::PC(string name, int price)
	{
		Name = name;
		Price = price;
	}

	

	int PC::getPrice()const
	{
		cout << Price << endl;
		return Price;
	}

	void PC::setPrice(int value)
	{
		Price = value;
	}

	void PC::Show() 
	{
		cout << "I PC" << endl;
	}

	/////////////

	

	Notebook::Notebook(string name, int price) 
	{		
		Name = name;
		Price = price;
	}

	int Notebook::getPrice()const
	{
		cout << Price << endl;
		return Price;
	}

	void Notebook::setPrice(int value)
	{
		Price = value;
	}

	void Notebook::Show()
	{
		cout << "I Notebook" << endl;
	}
