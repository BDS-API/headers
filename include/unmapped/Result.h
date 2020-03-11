#pragma once

#include "./Result.h"


namespace FileArchiver {

class Result {

public:

    Result(FileArchiver::Result const&);
    Result(FileArchiver::Result &&);
    ~Result();
    Result();
};

}