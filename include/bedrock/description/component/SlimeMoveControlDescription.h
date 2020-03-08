#pragma once

#include "../../../json/Value"


class SlimeMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName(void)const;
    virtual SlimeMoveControlDescription::~SlimeMoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    SlimeMoveControlDescription(void);
};
