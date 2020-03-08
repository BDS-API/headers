#pragma once

#include "../../../json/Value"


class TeleportDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual TeleportDescription::~TeleportDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TeleportDescription(void);
};
