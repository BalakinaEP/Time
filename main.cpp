#include <iostream>
#include "Time.h"

/**
 * @brief считывает значение с клавиатуры
 * @param message выводимое сообщение
 * @return считанное значение
 */
int getValue(const std::string message);

/**
 * @brief провер€ет введенные параметры времени
 * @param hours часы
 * @param minutes минуты
 * @param seconds секунды
 */
void checkTime(const int hours, const int minutes,
	const int seconds);

/**
 * @brief функци€ считывани€ времени
 * @param message выводимое сообщение
 * @return врем€
 */
Time getTime(const std::string message);

/**
 * @brief точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main()
{
	setlocale(LC_ALL, "Russian");
	Time planing = getTime("¬ведите врем€ планировани€: ");
	Time coding = getTime("¬ведите врем€ кодировани€: ");
	Time fixing = getTime("¬ведите врем€ отладки: ");
	std::cout << "Planing time is " << planing << std::endl;
	std::cout << "Coding time is " << coding << std::endl;
	std::cout << "Fixing time is " << fixing << std::endl;
	Time result = planing + coding + fixing;
	std::cout << "Result time is " << result << std::endl;
	return 0;
}

int getValue(const std::string message)
{
	std::cout << message;
	int value = 0;
	std::cin >> value;
	if (std::cin.fail())
	{
		std::cout << "Error" << std::endl;
		abort();
	}
	return value;
}

void checkTime(const int hours, const int minutes, 
				const int seconds)
{
	if (hours < 0 ||
		minutes < 0 || minutes > 59
		|| seconds < 0 || seconds > 59)
	{
		std::cout << "Error" << std::endl;
		abort();
	}
}

Time getTime(const std::string message)
{
	std::cout << message;
	int hours = getValue("¬ведите часы: ");
	int minutes = getValue("¬ведите минуты: ");
	int seconds = getValue("¬ведите секунды: ");
	checkTime(hours, minutes, seconds);
	return Time(hours, minutes, seconds);
}
