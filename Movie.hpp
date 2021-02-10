#ifndef MOVIE_H
#define MOVIE_H

#include "Video.hpp"
#include "Duration.hpp"
#include <string>

class Movie :public Video {
public:
	void videotype(){
	int getNumberOfStreams();
	std::string getStreamType();
	}
private:

};

#endif
