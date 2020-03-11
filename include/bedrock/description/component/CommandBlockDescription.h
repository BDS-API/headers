#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class CommandBlockDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~CommandBlockDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    CommandBlockDescription();
};
