#pragma once

class NpcCommandAction : NpcAction {

    virtual ~NpcCommandAction();
    virtual ~NpcCommandAction();
    virtual void toJson(void);
    virtual void fromJson(Json::Value const&);
}
