#include "Duration.hpp"

// constructor
Duration::Duration(int hours, int minutes) : lengthHours(hours), lengthMinutes(minutes) {}

// amount of hours in Duration
int Duration::hours() const {

	return lengthHours;
}

// amount of minutes in Duration
int Duration::minutes() const {

	return lengthMinutes;
}

// set the length of the duration in hours and minutes
void Duration::setLength(int hours, int minutes) {

	lengthHours = hours;
	lengthMinutes = minutes;
}