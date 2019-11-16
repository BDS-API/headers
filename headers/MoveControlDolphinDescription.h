#pragma once

class MoveControlDolphinDescription : MoveControlDescription {

    virtual void getJsonName(void)const;
    virtual ~MoveControlDolphinDescription();
    virtual ~MoveControlDolphinDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
