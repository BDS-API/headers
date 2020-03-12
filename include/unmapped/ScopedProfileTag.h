#pragma once



class ScopedProfileTag {

public:
    ~ScopedProfileTag();
    ScopedProfileTag(char const*, char const*, int);
};
