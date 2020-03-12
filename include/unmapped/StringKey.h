#pragma once

#include <string>


class StringKey {

public:
    StringKey(StringKey &&);
    StringKey(StringKey const&);
    StringKey();
    StringKey(std::string const&);
    StringKey(HashedString const&);
    void operator==(StringKey const&)const;
    ~StringKey();
};
