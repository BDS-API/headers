#pragma once

class GenericMoveControlDescription : MoveControlDescription {

    virtual void getJsonName(void)const;
    virtual void GenericMoveControlDescription::~GenericMoveControlDescription();
    virtual void GenericMoveControlDescription::~GenericMoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
