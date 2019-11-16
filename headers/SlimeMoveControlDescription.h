#pragma once

class SlimeMoveControlDescription : MoveControlDescription {

    virtual void getJsonName(void)const;
    virtual ~SlimeMoveControlDescription();
    virtual ~SlimeMoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
