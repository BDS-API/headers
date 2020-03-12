#pragma once

#include "ActionEvent.h"


class ActionQueue {

public:
    void pushBackActionEvent(ActionEvent);
    void clearQueue();
    void getNextActionEvent(ActionEvent &);
    ActionQueue();
    bool isEmpty()const;
    ~ActionQueue();
};
