#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class PersistentDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~PersistentDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    PersistentDescription();
};
