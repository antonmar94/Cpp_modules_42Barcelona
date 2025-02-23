#include "../includes/Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int      Account::_nbAccounts = 0;
int      Account::_totalAmount = 0;
int      Account::_totalNbDeposits = 0;
int      Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit ){
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	_displayTimestamp();
	checkAmount();
	std::cout << "created" << std::endl;
}

Account::~Account( void ){
	_displayTimestamp();
	checkAmount();
	std::cout << "closed" << std::endl;
}

void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	if ((_amount - withdrawal) < 0) {
		std::cout << ";withdrawal:refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}

int	Account::checkAmount( void ) const{
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";";
	return _amount;
}

void	Account::_displayTimestamp( void ) {
	time_t t = time(0);
	tm* now = localtime(&t);
	std::cout << std::put_time(now, "[%Y%m%d_%H%M%S] ");
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	checkAmount();
	std::cout << "deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


