#pragma once

class NpcCommandAction : NpcAction {

    virtual void ~NpcCommandAction();
    virtual void ~NpcCommandAction();
    virtual void toJson(void);
    virtual void fromJson(Json::Value const&);
}
