#pragma once

#include "../../../json/Value"


class GlideMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName()const;
    virtual GlideMoveControlDescription::~GlideMoveControlDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    GlideMoveControlDescription(void);
};
