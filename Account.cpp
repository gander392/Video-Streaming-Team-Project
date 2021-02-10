/*
  Account.cpp

  Definition file for Account class
*/

#include "Account.hpp"
#include "Video.hpp"
#include "MOVIE.hpp"
#include "Original.hpp"
#include "TVSHOW.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// constructor
Account::Account(const std::string& name)
    : account_name(name)
{ }

// account name
std::string Account::name() const {

    return account_name;
}

// add a stream to this account
void Account::addStream(const Stream& stream) {

    streams.push_back(stream);
}





// account streaming report
std::string Account::report() const {

    // returned string
    std::ostringstream output;

    // customer name
    output << "Stream Report for Account: " << name() << '\n';

    // list streams
    output << "Streams:" << '\n';
    int totalStreams = 0;
    int totalOriginals = 0;
    int totalHours = 0;
    int totalMinutes = 0;
    for (std::vector<Stream>::const_iterator it = streams.begin(); it != streams.end(); ++it) {

        // stream title
        output << '\t' << it->video().title();

        // current total hours and minutes
        totalHours += it->video().getVideoLength().hours() * it->viewings();
        totalMinutes += it->video().getVideoLength().minutes() * it->viewings();

        
     
    }
    totalStreams = video.getNumberofStreams();
    totalOriginals = video.getNumberofOriginals();
    // total non-original stream counts
    output << "Non-Original Stream Events: " << (totalStreams - totalOriginals) << '\n';

    // total time
    int time = totalHours + totalMinutes / 60;
    output << "Total Time: " << time << ":";
    int Report time = totalMinutes % 60;
    output << Report time << '\n';

    return output.str();
}

// outputs video type for data()
//  std::string Account::getVideoType(int type) const {
//     switch (type) {

//             // movies
//             case Video::MOVIE:
//                 return "MOVIE";
//                 break;

//             // tv
//             case Video::TVSHOW:
//                 return "TVSHOW";
//                 break;

//             // original
//             case Video::ORIGINAL:
//                 return "ORIGINAL";
//                 break;
//         }
// }




// outputs video type for data()
void Account::printType(int type) const {
    switch (type) {

            // movies
            case Video::MOVIE:
                output << "MOVIE";
                break;
            // tv
            case Video::TVSHOW:
                output << "TVSHOW";
                break;
            // original
            case Video::ORIGINAL:
                output << "ORIGINAL";
                break;
        }       
}

// account data in CSV
std::string Account::data() const {
          
           video.getStreamType(Account account);

        // stream hours and minutes
        output << ',' << (it->video().getVideoLength().hours() * it->viewings());
        output << ',' << (it->video().getVideoLength().minutes() * it->viewings());

        // stream counts
        output << ',';
        switch (it->video().type()) {

            // for movies, the stream count is the number of hours, with a minimum of 1
            case Video::MOVIE:
                if (it->video().getVideoLength().hours()) {
                    output << (it->viewings() * it->video().getVideoLength().hours());
                } else {
                    output << it->viewings();
                }
                break;

            // all others are just the number of occurrences
            default:
                output << it->viewings();
                break;
        }

        output << '\n';
    }

    return output.str();
}
