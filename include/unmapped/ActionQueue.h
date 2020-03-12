#pragma once

#include "ActionEvent.h"


class ActionQueue {

public:
    void pushBackActionEvent(ActionEvent);
    ActionQueue();
    void getNextActionEvent(ActionEvent &);
    void clearQueue();
    ~ActionQueue();
    bool isEmpty()const;
};
