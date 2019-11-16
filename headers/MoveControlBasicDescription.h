#pragma once

class MoveControlBasicDescription : MoveControlDescription {

    virtual void getJsonName(void)const;
    virtual ~MoveControlBasicDescription();
    virtual ~MoveControlBasicDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
