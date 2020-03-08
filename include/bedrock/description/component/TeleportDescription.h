#pragma once

#include "../../../json/Value"


class TeleportDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    TeleportDescription::~TeleportDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TeleportDescription(void);
};
