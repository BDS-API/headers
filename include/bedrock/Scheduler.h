#pragma once

#include "../unmapped/BackgroundTask"


class Scheduler {

public:
    static long AVERAGE_TASK_TOLERANCE;


    Scheduler(std::string, unsigned int);
    void setTargetFPS(unsigned int);
    void _assignToThread(std::thread::id);
    void _removeSchedulerAssignment();
    void _getCoroutineWorker();
    void getCoroutinePool();
    void _processNextCoroutine();
    void _runCoroutines(double);
    void _updateTimeCap(unsigned int);
    bool processCoroutines(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>);
    void getTotalFrameTime()const;
    void _getNumberOfStarvedFrames()const;
    void changeThread(std::thread::id);
    bool isStarved()const;
    void getEffectiveTargetFPS()const;
    void queueCallback(std::shared_ptr<BackgroundTask>);
    void getThread()const;
};
