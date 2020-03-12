#pragma once

#include "HashedString.h"
#include <string>


class StringKey {

public:
    StringKey(std::string const&);
    StringKey(StringKey const&);
    void operator==(StringKey const&)const;
    StringKey();
    StringKey(StringKey &&);
    StringKey(HashedString const&);
    ~StringKey();
};
