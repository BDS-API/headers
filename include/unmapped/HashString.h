#pragma once

#include "./HashString.h"
#include <string>


namespace Util {

class HashString {

public:

    ~HashString();
    HashString(Util::HashString const&);
    HashString();
    HashString(std::string const&);
    void operator==(Util::HashString const&)const;
    void operator!=(Util::HashString const&)const;
    void operator<(Util::HashString const&)const;
    std::string getString()const;
};

}