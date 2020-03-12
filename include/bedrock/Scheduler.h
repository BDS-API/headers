#pragma once

#include "../unmapped/BackgroundTask.h"
#include <ratio>
#include <string>
#include <memory>


class Scheduler {

public:
    class ScopedChangeScheduler;

    static long AVERAGE_TASK_TOLERANCE;

    void _removeSchedulerAssignment();
    void _processNextCoroutine();
    void setTargetFPS(unsigned int);
//  bool processCoroutines(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
    void _getNumberOfStarvedFrames()const;
//  void _assignToThread(std::thread::id); //TODO: incomplete function definition
    void queueCallback(std::shared_ptr<BackgroundTask>);
    void _getCoroutineWorker();
    Scheduler(std::string, unsigned int);
    void _runCoroutines(double);
    bool isStarved()const;
    void getCoroutinePool();
//  void changeThread(std::thread::id); //TODO: incomplete function definition
    void getEffectiveTargetFPS()const;
    ~Scheduler();
    void getTotalFrameTime()const;
    void _updateTimeCap(unsigned int);
    void getThread()const;
    class ScopedChangeScheduler {

    public:
        ScopedChangeScheduler();
        ~ScopedChangeScheduler();
    };
};
