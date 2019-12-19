#pragma once

using namespace ResourceLoadManager;

class TaskGroupState {

public:

    void start(void);
    void stop(void);
    void pause(void);
    void resume(void);
    void getIsRunning(void)const;
    void getShouldTaskGroupPause(void)const;
    TaskGroupState(void);
};
