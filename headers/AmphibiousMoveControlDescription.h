#pragma once

class AmphibiousMoveControlDescription : MoveControlDescription {

    virtual void getJsonName(void)const;
    virtual ~AmphibiousMoveControlDescription();
    virtual ~AmphibiousMoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
