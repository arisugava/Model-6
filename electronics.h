#pragma once
#include<iostream>
#include<string>
using namespace std;



	class Electronics
	{
	public:
		Electronics() = default;
		Electronics(string, int);
		virtual~Electronics() = default;

		

		int getPrice() const;
		void setPrice(int);

		virtual void Show();

		string Name;

	private:

		int Price;
	};

	class Monitor : virtual public Electronics
	{

		int Price;

	public:
		string Name;

		Monitor()=default;
		Monitor(string, int);

		void Show() override;

		

		int getPrice() const;
		void setPrice(int);

		
	};

	class PC : virtual public Electronics
	{
		
		int Price;

	public:
		string Name;

		PC()=default;
		PC(string, int);

		void Show() override;

		int getPrice() const;
		void setPrice(int);
	};
	
	////	

	class Notebook : public Monitor, public PC
	{	
		int Price;

	public:
		string Name;
		Notebook()=default;
		Notebook(string, int);

		void Show() override;

		
		int getPrice() const;
		void setPrice(int);	

	};
