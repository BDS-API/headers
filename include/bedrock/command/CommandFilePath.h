#pragma once

#include <string>


class CommandFilePath {

public:
    CommandFilePath();
    CommandFilePath(std::string const&);
    void operator==(CommandFilePath const&)const;
    ~CommandFilePath();
    std::string getText()const;
};
