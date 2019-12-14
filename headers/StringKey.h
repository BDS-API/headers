#pragma once

class StringKey {

public:

    void StringKey(std::string const&);
    void StringKey(StringKey&&);
    void StringKey(HashedString const&);
    void StringKey(void);
    void StringKey(StringKey const&);
};
