#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class NameableDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~NameableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    NameableDescription();
    void parseNameActions(Json::Value &);
};
