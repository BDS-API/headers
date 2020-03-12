#pragma once

#include "ComponentDescription.h"


class TeleportDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    ~TeleportDescription();
    TeleportDescription();
};
