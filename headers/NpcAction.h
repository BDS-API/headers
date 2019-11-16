#pragma once

class NpcAction {

    virtual ~NpcAction();
    virtual ~NpcAction();
    virtual void toJson(void);
    virtual void fromJson(Json::Value const&);
}
