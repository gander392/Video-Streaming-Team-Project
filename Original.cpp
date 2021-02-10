
#include "Original.hpp"

int Original::getNumberOfStreams() {
int totalStreams;
for (std::vector<Stream>::const_iterator it = streams.begin(); it != streams.end(); ++it){
	int streamCount = 0;
	int view = it->viewings();
        int getlength = it->getVideoLength().hours() ? it->getVideoLength().hours() : 1;

                streamCount += view;
	
	    std::ostringstream out_str_stream;
        output << '\t' << streamCount << '\n';

        totalStreams += streamCount;
        
        }
	return totalStreams;
};
int Original::getNumberOfOrginals() {
	
for (std::vector<Stream>::const_iterator it = streams.begin(); it != streams.end(); ++it){
	int originals = 0;
        int view = it->viewings();
        int getlength = it->getVideoLength().hours() ? it->getVideoLength().hours() : 1    
               originals += view;
	        totalOriginals += originals;

}
		return totalOriginals;
};


std::string Original::getStreamType() {

    std::string name = this->account.name();
	
    // list of streams
    for (std::vector<Stream>::const_iterator it = streams.begin(); it != streams.end(); ++it) {

 // customer name
        output << name << ',';

	account.printType(it->type());
    }
  return name;
};
