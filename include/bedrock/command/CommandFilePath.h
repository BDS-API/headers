#pragma once

#include <string>


class CommandFilePath {

public:
    CommandFilePath();
    ~CommandFilePath();
    void operator==(CommandFilePath const&)const;
    CommandFilePath(std::string const&);
    std::string getText()const;
};
