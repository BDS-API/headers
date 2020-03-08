#pragma once

#include "../../../json/Value"


class PersistentDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    PersistentDescription::~PersistentDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    PersistentDescription(void);
};
