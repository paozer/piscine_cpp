/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramella <pramella@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 17:15:38 by pramella          #+#    #+#             */
/*   Updated: 2020/06/21 17:15:41 by pramella         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <iomanip>
#include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    ++_nbAccounts;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

/* GETTER FUNCTIONS */
int Account::getNbAccounts() { return _nbAccounts; }
int Account::getTotalAmount() { return _totalAmount; }
int Account::getNbDeposits() { return _totalNbDeposits; }
int Account::getNbWithdrawals() { return _totalNbWithdrawals; }

/* MEMBER FUNCTIONS */
void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:";
    if (deposit > 0) {
        _amount += deposit;
        _totalAmount += deposit;
        ++_nbDeposits;
        ++_totalNbDeposits;
        std::cout << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    } else {
        std::cout << "refused" << std::endl;
    }
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (_amount - withdrawal > 0) {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        ++_nbWithdrawals;
        ++_totalNbWithdrawals;
        std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
    std::cout << "refused" << std::endl;
    return false;
}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
    time_t      rawtime;
    struct tm*  timeinfo;

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    std::cout << '[';
    std::cout << 1900 + timeinfo->tm_year;
    std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_mon;
    std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_mday;
    std::cout << '_';
    std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << timeinfo->tm_sec;
    std::cout << ']';
}
