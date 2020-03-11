#pragma once

#include "./ActionEvent.h"


class ActionQueue {

public:

    ~ActionQueue();
    ActionQueue();
    void pushBackActionEvent(ActionEvent);
    void getNextActionEvent(ActionEvent &);
    void clearQueue();
    bool isEmpty()const;
};
