#pragma once
#include <iostream>

/**
 * @brief Класс Время
 */
class Time
{
private:
	/**
	 * @brief часы
	 */
	int hours;
	/**
	 * @brief минуты
	 */
	int minutes;
	/**
	 * @brief секунды
	 */
	int seconds;
public:
	/**
	 * @brief конструктор класса Time
	 * @param hours часы, значение по умолчанию 0
	 * @param minutes минуты, значение по умолчанию 0
	 * @param seconds секунды, значение по умолчанию 0
	 */
	Time(const int hours = 0, const int minutes = 0, 
			const int seconds =0);
	
	/**
	 * @brief получение значения параметра часы
	 * @return возвращает значение параметра часы
	 */
	int getHours() const;

	/**
	 * @brief получение значения параметра минуты
	 * @return возвращает значение параметра минуты
	 */
	int getMinutes() const;

	/**
	 * @brief получение значения параметра секунды
	 * @return возвращает значение параметра секунды
	 */
	int getSeconds() const;
	
	/**
	 * @brief переопределение оператора сложения
	 * @param other второй объект класса
	 * @return время
	 */
	Time operator+(const Time& other) const;
	
	/**
	 * @brief переопределение оператора сдвига влево
	 * @param os объект класса ostream потока вывода
	 * @param time объект класса Time
	 * @return указатель на объект класса ostream потока вывода
	 */
	friend std::ostream& operator<<(std::ostream& os, 
					const Time& time);
};
