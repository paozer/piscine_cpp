/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 22:24:18 by pramella          #+#    #+#             */
/*   Updated: 2020/06/24 22:24:18 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <iomanip>

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
