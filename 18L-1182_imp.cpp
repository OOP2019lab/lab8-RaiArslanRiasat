#include"Header.h"
Date::Date()
{
	day=1;
	month=1;
	year=2000;
}
Date::Date(int mont,int dat,int y)
{
	if(dat>0 && dat<31)
	{
		day=dat;
	}
	else
		cout<<"Enter Correct Date : ";
	if(mont>0&&mont<13)
	{
		month=mont;
	}
	else
	{
		day=1;
		month=1;
		year=2000;
	}
	if(y<10000 && y>999)
	{
		year=y;
	}
	else
		cout<<" Enter 4 digit Year : "<<endl;
}
bool Date::operator==(const Date& d1)
{
	bool check=0;
	if(month==d1.month&&day==d1.day&&year==d1.year)
	{
		check=1;
	}
	return check;
}
Date& Date:: operator+(int i)
{
	day=day+1;
	if(day>30)
	{
		month=month+1;
	}
	if(month>12)
	{
		year=year+1;
	}
	return *this;
}
Date & Date::operator=(Date &d1)
{
	d1.day=day;
	d1.month=month;
	d1.year=year;
	return *this;
}
int & Date::operator[](const int i)
{
	if(i==0)
		return day;
	else if(i==1)
		return month;
	else if(i==2)
		return year;
	else 
		cout<<"Index is not found : ";
	int j=0;
	return j;
}
Date & Date::operator--()
{
	day=day-1;
	if(day<1)
	{
		month=month-1;
		day=30;
		if(month<1)
		{
			year=year-1;
			month=12;
		}
	}
	return *this;
}
Date  Date::operator--(int i)
{
	Date temp(day,month,year);
	--(*this);
	return *this;
}
string Date::monthNames[13] = { " ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"} ;