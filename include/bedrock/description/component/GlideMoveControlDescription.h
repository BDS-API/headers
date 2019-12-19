#pragma once

class GlideMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName(void)const;
    virtual GlideMoveControlDescription::~GlideMoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    GlideMoveControlDescription(void);
};
