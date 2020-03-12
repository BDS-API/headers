#pragma once

#include <string>
#include <memory>


class Scheduler {

public:
    class ScopedChangeScheduler;

    static long AVERAGE_TASK_TOLERANCE;

//  void _assignToThread(std::thread::id); //TODO: incomplete function definition
    void _processNextCoroutine();
    ~Scheduler();
    bool isStarved()const;
    void _getCoroutineWorker();
    void _removeSchedulerAssignment();
    void getCoroutinePool();
//  bool processCoroutines(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
    void getEffectiveTargetFPS()const;
    void getThread()const;
    void getTotalFrameTime()const;
    Scheduler(std::string, unsigned int);
    void _runCoroutines(double);
    void queueCallback(std::shared_ptr<BackgroundTask>);
    void _getNumberOfStarvedFrames()const;
    void setTargetFPS(unsigned int);
//  void changeThread(std::thread::id); //TODO: incomplete function definition
    void _updateTimeCap(unsigned int);
    class ScopedChangeScheduler {

    public:
        ScopedChangeScheduler();
        ~ScopedChangeScheduler();
    };
};
