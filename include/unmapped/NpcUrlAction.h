#pragma once

class NpcUrlAction : NpcAction {

public:
    virtual NpcUrlAction::~NpcUrlAction();
    virtual void toJson(void);

    NpcUrlAction(void);
};
