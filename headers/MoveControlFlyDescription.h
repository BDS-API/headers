#pragma once

class MoveControlFlyDescription : MoveControlDescription {

    virtual void getJsonName(void)const;
    virtual ~MoveControlFlyDescription();
    virtual ~MoveControlFlyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
