#pragma once

#include "./StringKey.h"
#include "./HashedString.h"
#include <string>


class StringKey {

public:

    StringKey(std::string const&);
    ~StringKey();
    StringKey(StringKey &&);
    StringKey(HashedString const&);
    StringKey();
    StringKey(StringKey const&);
    void operator==(StringKey const&)const;
};
