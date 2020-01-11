#pragma once

class MoveControlDescription : ComponentDescription {

public:
    virtual MoveControlDescription::~MoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    MoveControlDescription(void);
};