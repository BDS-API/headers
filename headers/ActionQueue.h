#pragma once

class ActionQueue {

public:

    void ActionQueue(void);
    void pushBackActionEvent(ActionEvent);
    void getNextActionEvent(ActionEvent &);
    void clearQueue(void);
    bool isEmpty(void)const;
};
