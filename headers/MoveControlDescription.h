#pragma once

class MoveControlDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~MoveControlDescription();
    virtual ~MoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
