#pragma once

#include "../../../json/Value"


class CommandBlockDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual CommandBlockDescription::~CommandBlockDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    CommandBlockDescription(void);
};
