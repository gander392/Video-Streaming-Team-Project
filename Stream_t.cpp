/*
  Stream_t.cpp

  Test program for class Stream
*/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Stream.hpp"

// Test case Creates a Stream with Valid data. Ensures that Video contents
// and number of viewings are correct with data passed into constructor
TEST_CASE("Create Valid Stream", "[Stream]") {

	const auto video = Video("Spongebob", Video::TVSHOW, 0, 30, 248);
	const auto stream = Stream(video, 5365);

	REQUIRE(video.title() == "Spongebob");
	REQUIRE(video.type() == 1);
	REQUIRE(video.getLength().hours() == 0);
	REQUIRE(video.getLength().minutes() == 30);
	REQUIRE(video.episodes() == 248);
	REQUIRE(stream.viewings() == 5365);

}
