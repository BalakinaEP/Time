#include <iostream>
#include "Time.h"

/**
 * @brief ��������� �������� � ����������
 * @param message ��������� ���������
 * @return ��������� ��������
 */
int getValue(const std::string message);

/**
 * @brief ��������� ��������� ��������� �������
 * @param hours ����
 * @param minutes ������
 * @param seconds �������
 */
void checkTime(const int hours, const int minutes,
	const int seconds);

/**
 * @brief ������� ���������� �������
 * @param message ��������� ���������
 * @return �����
 */
Time getTime(const std::string message);

/**
 * @brief ����� ����� � ���������
 * @return 0, ���� ��������� ��������� ���������
 */
int main()
{
	setlocale(LC_ALL, "Russian");
	Time planing = getTime("������� ����� ������������: ");
	Time coding = getTime("������� ����� �����������: ");
	Time fixing = getTime("������� ����� �������: ");
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
	int hours = getValue("������� ����: ");
	int minutes = getValue("������� ������: ");
	int seconds = getValue("������� �������: ");
	checkTime(hours, minutes, seconds);
	return Time(hours, minutes, seconds);
}
