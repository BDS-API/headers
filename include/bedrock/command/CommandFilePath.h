#pragma once

#include "./CommandFilePath.h"
#include <string>


class CommandFilePath {

public:

    CommandFilePath();
    CommandFilePath(std::string const&);
    void operator==(CommandFilePath const&)const;
    std::string getText()const;
    ~CommandFilePath();
};
