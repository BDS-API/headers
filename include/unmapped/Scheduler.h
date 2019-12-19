#pragma once

class Scheduler {

public:
    static long AVERAGE_TASK_TOLERANCE;


    Scheduler(std::string, unsigned int);
    void setTargetFPS(unsigned int);
    void _assignToThread(std::thread::id);
    void _removeSchedulerAssignment(void);
    void _getCoroutineWorker(void);
    void getCoroutinePool(void);
    void _processNextCoroutine(void);
    void _runCoroutines(double);
    void _updateTimeCap(unsigned int);
    void processCoroutines(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>);
    void getTotalFrameTime(void)const;
    void _getNumberOfStarvedFrames(void)const;
    void changeThread(std::thread::id);
    bool isStarved(void)const;
    void getEffectiveTargetFPS(void)const;
    void queueCallback(std::shared_ptr<BackgroundTask>);
    void getThread(void)const;
};
