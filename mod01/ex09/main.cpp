#include "Logger.hpp"
#include <thread>
#include <chrono>

int main(void)
{
	Logger logi ("file.log");

	logi.log("logToConsole", "started...");
	logi.log("logToConsole", "everything working");
	std::this_thread::sleep_for (std::chrono::seconds(2));
	logi.log("logToConsole", "as expected");
	logi.log("logToConsole", "last console log");
	std::this_thread::sleep_for (std::chrono::seconds(2));
	logi.log("logToFile", "started file logs...");
	logi.log("logToFile", "everything working");
	std::this_thread::sleep_for (std::chrono::seconds(2));
	logi.log("logToFile", "as expected");
	logi.log("logToFile", "last file log");
	return (0);
}
