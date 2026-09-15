#include <ctime>
#include <iostream>


class DateNow {

public:

	
	auto getDateNow() -> char* {

		time_t time_now = time(0);
		char* tNow = ctime(&time_now);
		return tNow;
	}

};