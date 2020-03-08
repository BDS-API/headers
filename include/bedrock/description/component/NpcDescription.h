#pragma once

#include "../../../json/Value"


class NpcDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual NpcDescription::~NpcDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    NpcDescription(void);
};
