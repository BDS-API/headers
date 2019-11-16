#pragma once

class GenericMoveControlDescription : MoveControlDescription {

    virtual void getJsonName(void)const;
    virtual ~GenericMoveControlDescription();
    virtual ~GenericMoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
