#pragma once

class ResourceLoadManager::TaskGroupState {

public:

    void start(void);
    void stop(void);
    void pause(void);
    void resume(void);
    void getIsRunning(void)const;
    void getShouldTaskGroupPause(void)const;
    void TaskGroupState(void);
};
