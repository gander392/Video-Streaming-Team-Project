#ifndef DURATION_H
#define DURATION_H

class Duration {
public:

	Duration(int hours, int minutes);

	// amount of hours in Duration
	int hours() const;

	// amount of minutes in Duration
	int minutes() const;

	// set the length of the duration in hours and minutes
	void setLength(int hours, int minutes);

private:

	int lengthHours;
	int lengthMinutes;
};

#endif