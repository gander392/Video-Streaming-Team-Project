
#include "Movie.hpp"

int Movie :: getNumberOfOrginals() {};


int Movie::getNumberOfStreams() {
int totalStreams;
for (std::vector<Stream>::const_iterator it = streams.begin(); it != streams.end(); ++it){
	int streamCount = 0;
	int view = it->viewings();
        int getlength = it->getVideoLength().hours() ? it->getVideoLength().hours() : 1;

                streamCount += view * getlength;
	
	    std::ostringstream out_str_stream;
        output << '\t' << streamCount << '\n';

        totalStreams += streamCount;
        }
	return totalStreams;
};


std::string Movie::getStreamType() {

    std::string name = this->account.name();
    // list of streams
    for (std::vector<Stream>::const_iterator it = streams.begin(); it != streams.end(); ++it) {

 // customer name
        output << name << ',';

	account.printType(it->type());
    }
};
