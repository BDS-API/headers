#pragma once

#include "./ContentIdentity.h"
#include <string>


class IContentKeyProvider {

public:
    virtual ~IContentKeyProvider();
    virtual std::string getAlternateContentKey(ContentIdentity const&)const;

    IContentKeyProvider();
};
