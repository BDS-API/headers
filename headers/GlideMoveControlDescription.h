#pragma once

class GlideMoveControlDescription : MoveControlDescription {

    virtual void getJsonName(void)const;
    virtual void GlideMoveControlDescription::~GlideMoveControlDescription();
    virtual void GlideMoveControlDescription::~GlideMoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
