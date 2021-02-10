/*
  Video.cpp

  Definition file for Video class
*/

#include "Video.hpp"

// constructor
Video::Video(const std::string& title, int type, int hours, int minutes, int episodes)
    : videoTitle(title), videoType(type), videoDuration(hours,minutes), numEpisodes(episodes)
{ }

// video title
std::string Video::title() const {

    return videoTitle;
}

// video type
int Video::type() const {

    return videoType;
}




// get video length
Duration Video::getVideoLength() const {

	return this->videoDuration;

}

// set video length
void Video::setVideoLength(int hours, int minutes) {

	this->videoDuration.setLength(hours, minutes);

}

// number of episodes
int Video::episodes() const {

    // special case as movies do not have episodes
    if (videoType == Video::MOVIE)
        return 0;

    return numEpisodes;
}
	
	
