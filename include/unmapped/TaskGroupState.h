#pragma once



using namespace ResourceLoadManager;

class TaskGroupState {

public:

    void start();
    void stop();
    void pause();
    void resume();
    void getIsRunning()const;
    void getShouldTaskGroupPause()const;
    TaskGroupState(void);
};
