#pragma once

#include "ComponentDescription.h"


class CommandBlockDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    ~CommandBlockDescription();
    virtual void serializeData(Json::Value &)const;
    CommandBlockDescription();
};
