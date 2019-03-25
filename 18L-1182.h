#include<iostream>
#include<string>
using namespace std;
class Date
{
	friend ostream& operator <<(ostream& out, const Date & d)
	{
		out<<d.day;
		out<<d.month;
		out<<d.monthNames[d.month];
		out<<d.year;
		return out;
	}
	friend istream& operator >>(istream& in, Date & d)
	{
		in>>d.day;
		if(d.day>12||d.day<1)
		{
			cout<<"Enter DAte Again : ";
			in>>d.day;
		}
		in>>d.year;
		{
			if(d.year<1000||d.year>10000)
			{
				cout<<"Enter Year Again : ";
				in>>d.year;
			}

		}
		in>>d.month;
		if(d.month<1||d.month>12)
			{
				cout<<"Enter month Again : ";
				in>>d.month;
			}

		return in;
	}
private:
	static string monthNames[13] ;
	int day;
	int month;
	int year;
public:
	Date();
	Date(int ,int ,int);
	bool operator==(const Date &);
	Date & operator+(int );
	Date & operator =(Date &);
	int& operator[](const int );
	Date &operator--();
	Date operator--(int );
};

