#pragma once

#include "../../../json/Value"


class MoveControlDescription : ComponentDescription {

public:
    MoveControlDescription::~MoveControlDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    MoveControlDescription(void);
};
