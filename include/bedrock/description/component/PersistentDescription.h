#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class PersistentDescription : ComponentDescription {

public:
    ~PersistentDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    PersistentDescription();
};
