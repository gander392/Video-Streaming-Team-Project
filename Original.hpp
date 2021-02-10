#ifndef ORIGINAL_H
#define ORIGINAL_H

#include "Video.hpp"
#include "Duration.hpp"
#include <string>

class Original : public Video {
public:
	void videotype(){
	int getNumberOfStreams();
	int getNumberOfOrginals();
	std::string getStreamType();
	}
private:

};

#endif
