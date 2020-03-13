#pragma once

#include <string>
#include <memory>


class Scheduler {

public:
    class ScopedChangeScheduler;

    static long AVERAGE_TASK_TOLERANCE;

    Scheduler(std::string, unsigned int); // _ZN9SchedulerC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEj
    void setTargetFPS(unsigned int); // _ZN9Scheduler12setTargetFPSEj
//  void _assignToThread(std::thread::id); //TODO: incomplete function definition // _ZN9Scheduler15_assignToThreadENSt6thread2idE
    ~Scheduler(); // _ZN9SchedulerD2Ev
    void _removeSchedulerAssignment(); // _ZN9Scheduler26_removeSchedulerAssignmentEv
    void _getCoroutineWorker(); // _ZN9Scheduler19_getCoroutineWorkerEv
    void getCoroutinePool(); // _ZN9Scheduler16getCoroutinePoolEv
    void _processNextCoroutine(); // _ZN9Scheduler21_processNextCoroutineEv
    void _runCoroutines(double); // _ZN9Scheduler14_runCoroutinesEd
    void _updateTimeCap(unsigned int); // _ZN9Scheduler14_updateTimeCapEj
//  bool processCoroutines(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition // _ZN9Scheduler17processCoroutinesENSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEES4_
    void getTotalFrameTime()const; // _ZNK9Scheduler17getTotalFrameTimeEv
    void _getNumberOfStarvedFrames()const; // _ZNK9Scheduler25_getNumberOfStarvedFramesEv
//  void changeThread(std::thread::id); //TODO: incomplete function definition // _ZN9Scheduler12changeThreadENSt6thread2idE
    bool isStarved()const; // _ZNK9Scheduler9isStarvedEv
    void getEffectiveTargetFPS()const; // _ZNK9Scheduler21getEffectiveTargetFPSEv
    void queueCallback(std::shared_ptr<BackgroundTask>); // _ZN9Scheduler13queueCallbackESt10shared_ptrI14BackgroundTaskE
    void getThread()const; // _ZNK9Scheduler9getThreadEv
    class ScopedChangeScheduler {

    public:
        ScopedChangeScheduler(); // _ZN9Scheduler21ScopedChangeSchedulerC2Ev
        ~ScopedChangeScheduler(); // _ZN9Scheduler21ScopedChangeSchedulerD2Ev
    };
};
