﻿#pragma once
#include <string>

class TimeHelper
{
public:
	static time_t toTimeT(std::string date);
	static std::string convertHoursToDate(const size_t& time, const std::string data_start_date);
	static size_t convertDateToHours(const std::string& date, const std::string data_start_date);
	static size_t getMonthFromHours(const size_t& time, const std::string data_start_date);
	static size_t getYearFromHours(const size_t& time, const std::string data_start_date);
};