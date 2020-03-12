#pragma once

#include <string>


class IContentKeyProvider {

public:
    ~IContentKeyProvider();
    virtual std::string getAlternateContentKey(ContentIdentity const&)const;
    IContentKeyProvider();
};
