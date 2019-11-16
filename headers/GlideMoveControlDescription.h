#pragma once

class GlideMoveControlDescription : MoveControlDescription {

    virtual void getJsonName(void)const;
    virtual ~GlideMoveControlDescription();
    virtual ~GlideMoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
