#ifndef TV_H
#define TV_H

#include "Video.hpp"
#include "Duration.hpp"
#include <string>

class TV : public Video {
public:
	void videotype(){
	int getNumberOfStreams();
	std::string getStreamType();
	}
private:

};

#endif
