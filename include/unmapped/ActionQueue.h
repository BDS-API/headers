#pragma once



class ActionQueue {

public:

    ActionQueue(void);
    void pushBackActionEvent(ActionEvent);
    void getNextActionEvent(ActionEvent &);
    void clearQueue();
    bool isEmpty()const;
};
