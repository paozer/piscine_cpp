/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 22:24:15 by pramella          #+#    #+#             */
/*   Updated: 2020/06/24 22:24:15 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

std::string	getTimestamp(void);

Logger::Logger(std::string log_file) : _log_file(log_file) {}

void		Logger::log(std::string const& dest, std::string const& message)
{
	std::string des[] = { "logToConsole", "logToFile" };
	typedef void (Logger::*logFuncPtr) (std::string message);
	logFuncPtr lfp[] = { &Logger::logToConsole, &Logger::logToFile };

	for (int i = 0; i < 2; ++i) {
		if (des[i] == dest) {
			(this->*lfp[i]) (message);
			return ;
		}
	}
}

void		Logger::logToConsole(std::string message) { std::cout << makeLogEntry(message); }

void		Logger::logToFile(std::string message)
{
	std::ofstream fs (_log_file, std::ofstream::app);
	fs << makeLogEntry(message);
}

std::string Logger::makeLogEntry(std::string message)
{
	return ("[" + getTimestamp() + "] " + message + "\n");
}

std::string	getTimestamp(void)
{
	time_t				rawtime;
	struct tm*			timeinfo;
	std::stringstream	timestamp;

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	timestamp << 1900 + timeinfo->tm_year;
	timestamp << std::setw(2) << std::setfill('0') << timeinfo->tm_mon;
	timestamp << std::setw(2) << std::setfill('0') << timeinfo->tm_mday;
	timestamp << '_';
	timestamp << std::setw(2) << std::setfill('0') << timeinfo->tm_hour;
	timestamp << std::setw(2) << std::setfill('0') << timeinfo->tm_min;
	timestamp << std::setw(2) << std::setfill('0') << timeinfo->tm_sec;
	return (timestamp.str());
}
