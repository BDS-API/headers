#pragma once

#include <string>


class IContentKeyProvider {

public:
    virtual ~IContentKeyProvider(); // _ZN19IContentKeyProviderD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getAlternateContentKey(ContentIdentity const&)const; // _ZNK19IContentKeyProvider22getAlternateContentKeyB5cxx11ERK15ContentIdentity
    IContentKeyProvider(); // _ZN19IContentKeyProviderC2Ev
};
