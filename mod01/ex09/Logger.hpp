#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <sstream>

class Logger
{
	public:
		Logger(std::string log_file);
		void log(std::string const& des, std::string const& message);
	private:
		std::string _log_file;
		std::string makeLogEntry(std::string message);
		void logToConsole(std::string message);
		void logToFile(std::string message);
};

#endif
