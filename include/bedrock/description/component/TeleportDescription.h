#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class TeleportDescription : ComponentDescription {

public:
    ~TeleportDescription();
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    TeleportDescription();
};
