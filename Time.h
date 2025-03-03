#pragma once
#include <iostream>

/**
 * @brief ����� �����
 */
class Time
{
private:
	/**
	 * @brief ����
	 */
	int hours;
	/**
	 * @brief ������
	 */
	int minutes;
	/**
	 * @brief �������
	 */
	int seconds;
public:
	/**
	 * @brief ����������� ������ Time
	 * @param hours ����, �������� �� ��������� 0
	 * @param minutes ������, �������� �� ��������� 0
	 * @param seconds �������, �������� �� ��������� 0
	 */
	Time(const int hours = 0, const int minutes = 0, 
			const int seconds =0);
	
	/**
	 * @brief ��������� �������� ��������� ����
	 * @return ���������� �������� ��������� ����
	 */
	int getHours() const;

	/**
	 * @brief ��������� �������� ��������� ������
	 * @return ���������� �������� ��������� ������
	 */
	int getMinutes() const;

	/**
	 * @brief ��������� �������� ��������� �������
	 * @return ���������� �������� ��������� �������
	 */
	int getSeconds() const;
	
	/**
	 * @brief ��������������� ��������� ��������
	 * @param other ������ ������ ������
	 * @return �����
	 */
	Time operator+(const Time& other) const;
	
	/**
	 * @brief ��������������� ��������� ������ �����
	 * @param os ������ ������ ostream ������ ������
	 * @param time ������ ������ Time
	 * @return ��������� �� ������ ������ ostream ������ ������
	 */
	friend std::ostream& operator<<(std::ostream& os, 
					const Time& time);
};
