/*
  Video.hpp

  Include file for Video class
*/

#ifndef VIDEO_H
#define VIDEO_H

#include "Duration.hpp"
#include "MOVIE.hpp"
#include "TVSHOW.hpp"
#include "ORginal.hpp"
#include <string>

abstract class Video {
public:

    static const int MOVIE      = 0;
    static const int TVSHOW     = 1;
    static const int ORIGINAL   = 2;

    // constructor
	Video(const std::string& title, int type, int hours, int minutes, int episodes);

    // video title
    std::string title() const;

    // video type
    int type() const;

	// duration of the video in hours and minutes
    Duration getVideoLength() const;

	// set video length
	void setVideoLength(int hours, int minutes);
	
	virtual void videotype();
	
    // number of episodes
    int episodes() const;

private:
    std::string videoTitle;
    int videoType;
    Duration videoDuration;
    int numEpisodes;
};

#endif
