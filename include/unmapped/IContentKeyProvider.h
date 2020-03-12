#pragma once

#include "ContentIdentity.h"


class IContentKeyProvider {

public:
    ~IContentKeyProvider();
    virtual std::string getAlternateContentKey(ContentIdentity const&)const;
    IContentKeyProvider();
};
