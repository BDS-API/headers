#pragma once



class StringKey {

public:

    StringKey(std::string const&);
    StringKey(StringKey&&);
    StringKey(HashedString const&);
    StringKey(void);
    StringKey(StringKey const&);
};
