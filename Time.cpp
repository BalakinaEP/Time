#include <iostream>
#include "Time.h"

Time::Time(const int hours, const int minutes, 
		const int seconds): hours{hours}, minutes{minutes},
							seconds{seconds}
{

}

int Time::getHours() const
{
	return hours;
}

int Time::getMinutes() const
{
	return minutes;
}

int Time::getSeconds() const
{
	return seconds;
}

Time Time::operator+(const Time& other) const
{
	int seconds = this->seconds + other.seconds;
	int minutes = this->minutes + other.minutes 
					+ seconds / 60;
	int hours = this->hours + other.hours
		+ minutes / 60;
	seconds %= 60;
	minutes %= 60;
	return Time(hours, minutes, seconds);
}

std::ostream& operator<<(std::ostream& os,
	const Time& time)
{
	os << time.hours << ":"
		<< time.minutes << ":"
		<< time.seconds;
	return os;
}
