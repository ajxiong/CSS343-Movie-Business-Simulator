#ifndef MOVIE_FACTORY_H
#define MOVIE_FACTORY_H
#include "movie.h"
#include "drama.h"
#include "comedy.h"
#include "classic.h"

class MovieFactory {
    public:
        MovieFactory();
        ~MovieFactory();
        //static Movie* createMovie(const char type, ifstream& infile) { };
        static Comedy* createComedy(ifstream& infile);
        static Drama* createDrama(ifstream& infile);
        static Classic* createClassic(ifstream& infile);
};
#endif