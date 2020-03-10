#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;

bool is_leap_year(int year){
	//são bissextos todos os anos divisíveis por 4, excluindo os que sejam
	//divisíveis por 100, porém não os que sejam divisíveis por 400
	return ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)));
}

int main() {
	int year;

	cout << "year: ";
	cin >> year;

	string is_leap = is_leap_year(year) ? " is leap" : " not leap ";

	cout << year << is_leap << endl;

}
