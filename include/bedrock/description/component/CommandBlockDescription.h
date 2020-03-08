#pragma once

#include "../../../json/Value"


class CommandBlockDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    CommandBlockDescription::~CommandBlockDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    CommandBlockDescription(void);
};
