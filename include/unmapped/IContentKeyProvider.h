#pragma once

#include <string>


class IContentKeyProvider {

public:
    ~IContentKeyProvider(); // _ZN19IContentKeyProviderD2Ev
    virtual std::string getAlternateContentKey(ContentIdentity const&)const; // _ZNK19IContentKeyProvider22getAlternateContentKeyB5cxx11ERK15ContentIdentity
    IContentKeyProvider(); // _ZN19IContentKeyProviderC2Ev
};
