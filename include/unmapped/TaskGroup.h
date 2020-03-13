#pragma once

#include "ITaskGroup.h"
#include <memory>
#include <mutex>
#include <string>
#include <functional>
#include "TaskResult.h"


class TaskGroup : ITaskGroup {

public:
    ~TaskGroup(); // _ZN9TaskGroupD2Ev
    virtual void taskRegister(std::shared_ptr<BackgroundTask>); // _ZN9TaskGroup12taskRegisterESt10shared_ptrI14BackgroundTaskE
    virtual void requeueTask(std::shared_ptr<BackgroundTask>, bool); // _ZN9TaskGroup11requeueTaskESt10shared_ptrI14BackgroundTaskEb
    virtual void getState()const; // _ZNK9TaskGroup8getStateEv
    virtual bool processCoroutines(); // _ZN9TaskGroup17processCoroutinesEv
//  virtual void taskComplete(gsl::not_null<BackgroundTask *>); //TODO: incomplete function definition // _ZN9TaskGroup12taskCompleteEN3gsl8not_nullIP14BackgroundTaskEE
    void getCurrentTaskGroup(); // _ZN9TaskGroup19getCurrentTaskGroupEv
//  void queueChild(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&, std::function<void (void)> &&); //TODO: incomplete function definition // _ZN9TaskGroup10queueChildEN3gsl17basic_string_spanIKcLln1EEEOSt8functionIF10TaskResultvEEOS4_IFvvEE
    void queueChild(TaskStartInfo &, std::function<TaskResult (void)> &&, std::function<void (void)> &&); // _ZN9TaskGroup10queueChildER13TaskStartInfoOSt8functionIF10TaskResultvEEOS2_IFvvEE
    void queue(TaskStartInfo &, std::function<TaskResult (void)> &&, std::function<void (void)> &&); // _ZN9TaskGroup5queueER13TaskStartInfoOSt8functionIF10TaskResultvEEOS2_IFvvEE
//  void queueChildSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&); //TODO: incomplete function definition // _ZN9TaskGroup14queueChildSyncEN3gsl17basic_string_spanIKcLln1EEEOSt8functionIF10TaskResultvEE
    void queueChildSync(TaskStartInfo &, std::function<TaskResult (void)> &&); // _ZN9TaskGroup14queueChildSyncER13TaskStartInfoOSt8functionIF10TaskResultvEE
    void queueSync(TaskStartInfo &, std::function<TaskResult (void)> &&); // _ZN9TaskGroup9queueSyncER13TaskStartInfoOSt8functionIF10TaskResultvEE
    TaskGroup(WorkerPool &, Scheduler &, std::string); // _ZN9TaskGroupC2ER10WorkerPoolR9SchedulerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  TaskGroup(WorkerPool &, Scheduler &, std::string, TaskType); //TODO: incomplete function definition // _ZN9TaskGroupC2ER10WorkerPoolR9SchedulerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE8TaskType
    void flush(std::function<void (void)>); // _ZN9TaskGroup5flushESt8functionIFvvEE
//  void queue(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&, std::function<void (void)> &&); //TODO: incomplete function definition // _ZN9TaskGroup5queueEN3gsl17basic_string_spanIKcLln1EEEOSt8functionIF10TaskResultvEEOS4_IFvvEE
    void _queueInternal(std::shared_ptr<BackgroundTask>); // _ZN9TaskGroup14_queueInternalESt10shared_ptrI14BackgroundTaskE
//  void queueSync(gsl::basic_string_span<char const, -1l>, std::function<TaskResult (void)> &&); //TODO: incomplete function definition // _ZN9TaskGroup9queueSyncEN3gsl17basic_string_spanIKcLln1EEEOSt8functionIF10TaskResultvEE
    void sync_DEPRECATED_ASK_TOMMO(std::function<void (void)>); // _ZN9TaskGroup25sync_DEPRECATED_ASK_TOMMOESt8functionIFvvEE
    bool isEmpty()const; // _ZNK9TaskGroup7isEmptyEv
    void pause(); // _ZN9TaskGroup5pauseEv
    void resume(); // _ZN9TaskGroup6resumeEv
    void count()const; // _ZNK9TaskGroup5countEv
    void getMaxConcurrency()const; // _ZNK9TaskGroup17getMaxConcurrencyEv
    void disableOwnerThreadChecks(); // _ZN9TaskGroup24disableOwnerThreadChecksEv
    void getName()const; // _ZNK9TaskGroup7getNameEv
    void getWorkerPool(); // _ZN9TaskGroup13getWorkerPoolEv
    void getScheduler(); // _ZN9TaskGroup12getSchedulerEv
    void _forAllTasks(std::unique_lock<std::mutex> &, std::function<void (std::shared_ptr<BackgroundTask> const&)>); // _ZN9TaskGroup12_forAllTasksERSt11unique_lockISt5mutexESt8functionIFvRKSt10shared_ptrI14BackgroundTaskEEE
    void getOwnerThreadID()const; // _ZNK9TaskGroup16getOwnerThreadIDEv
    void kick(unsigned int); // _ZN9TaskGroup4kickEj
    void _isOwner()const; // _ZNK9TaskGroup8_isOwnerEv
};
