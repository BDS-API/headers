#pragma once

#include "ActionEvent.h"


class ActionQueue {

public:
    ~ActionQueue(); // _ZN11ActionQueueD2Ev
    ActionQueue(); // _ZN11ActionQueueC2Ev
    void pushBackActionEvent(ActionEvent); // _ZN11ActionQueue19pushBackActionEventE11ActionEvent
    void getNextActionEvent(ActionEvent &); // _ZN11ActionQueue18getNextActionEventER11ActionEvent
    void clearQueue(); // _ZN11ActionQueue10clearQueueEv
    bool isEmpty()const; // _ZNK11ActionQueue7isEmptyEv
};
