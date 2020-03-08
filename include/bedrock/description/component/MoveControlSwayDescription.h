#pragma once

#include "../../../json/Value"


class MoveControlSwayDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    MoveControlSwayDescription::~MoveControlSwayDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    MoveControlSwayDescription(void);
};
