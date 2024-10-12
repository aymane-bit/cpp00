/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 00:54:33 by akajjou           #+#    #+#             */
/*   Updated: 2024/10/12 21:17:37 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <functional>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


void    Account::_displayTimestamp( void )
{
    std::time_t now = std::time(NULL);
    std::tm* localTime = std::localtime(&now);
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", localTime);
    std::cout << buffer ;
}


Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (_amount - withdrawal < 0)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

void    Account::displayStatus( void ) const
{ 
    _displayTimestamp();
     std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


void    Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit( int deposit )
{
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

Account::Account( int initial_deposit )
{
    _accountIndex = getNbAccounts();
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += initial_deposit;
    _totalNbDeposits = 0;
    _totalNbWithdrawals = 0;
    _nbAccounts++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

int     Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int     Account::getTotalAmount( void )
{
    return _totalAmount;
}

int     Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int     Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}
