#pragma once

#include "ComponentDescription.h"


class PersistentDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~PersistentDescription();
    virtual void serializeData(Json::Value &)const;
    PersistentDescription();
};
