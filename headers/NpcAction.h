#pragma once

class NpcAction {

    virtual void ~NpcAction();
    virtual void ~NpcAction();
    virtual void toJson(void);
    virtual void fromJson(Json::Value const&);
}
