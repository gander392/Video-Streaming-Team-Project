/*
  Video_t.cpp

  Test program for class Video
*/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Video.hpp"

// Create a Video object with valid information and verify that all atributes are returned correctly
TEST_CASE( "Create a Valid Video", "[Video]") {

    Video test1( "Star Trek", Video::TVSHOW, 0, 50, 79 );

    REQUIRE( test1.title() == "Star Trek" );
    REQUIRE( test1.type() == 1 );
    REQUIRE( test1.getVideoLength().hours() == 0 );
    REQUIRE( test1.getVideoLength().minutes() == 50 );
    REQUIRE( test1.episodes() == 79 );
}

// Create a Video object of type MOVIE with an episode count > 0, verify that episodes() returns 0
TEST_CASE( "episodes() of Video object of type MOVIE with numEpisodes > 0 still returns 0", "[Video]" ) {

    Video test4( "Titanic", Video::MOVIE, 3, 14, 2 );

    REQUIRE( test4.type() == 0 );
    REQUIRE( test4.episodes() == 0 );
}

// Create a video object with no length, use setLength() to set the length, verify that Minutes() and hours() return what is passed into setLength
TEST_CASE( "Set a video length", "[Video]" ) {

    Video test5( "How Original", Video::ORIGINAL, 0, 0, 0 );

    test5.setVideoLength( 2, 55 );

    REQUIRE( test5.getVideoLength().hours() == 2 );
    REQUIRE( test5.getVideoLength().minutes() == 55 );
}
