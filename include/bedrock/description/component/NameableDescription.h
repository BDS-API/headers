#pragma once

#include "ComponentDescription.h"


class NameableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~NameableDescription();
    virtual void serializeData(Json::Value &)const;
    void parseNameActions(Json::Value &);
    NameableDescription();
};
