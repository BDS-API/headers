#pragma once

class MoveControlDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~MoveControlDescription();
    virtual void ~MoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
