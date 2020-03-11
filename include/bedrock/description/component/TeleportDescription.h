#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class TeleportDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~TeleportDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TeleportDescription();
};
