#pragma once

#include <functional>
#include "TaskResult.h"
#include <vector>


class ResourceLoadManager {

public:
    class ResourceLoadTaskGroup;
    class TaskGroupState;

    static long CURRENT_RUNNING_GROUP;

    void _wrapTaskCallback(ResourceLoadManager::ResourceLoadTaskGroup &, std::function<TaskResult (void)> &&); // _ZN19ResourceLoadManager17_wrapTaskCallbackERNS_21ResourceLoadTaskGroupEOSt8functionIF10TaskResultvEE
    void _wrapMainThreadCallback(ResourceLoadManager::ResourceLoadTaskGroup &, std::function<void (void)> &&); // _ZN19ResourceLoadManager23_wrapMainThreadCallbackERNS_21ResourceLoadTaskGroupEOSt8functionIFvvEE
    ResourceLoadManager(); // _ZN19ResourceLoadManagerC2Ev
    void _initializeResourceLoadTaskGroups(); // _ZN19ResourceLoadManager33_initializeResourceLoadTaskGroupsEv
    ResourceLoadManager(Scheduler &); // _ZN19ResourceLoadManagerC2ER9Scheduler
    ~ResourceLoadManager(); // _ZN19ResourceLoadManagerD2Ev
//  void registerResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType>); //TODO: incomplete function definition // _ZN19ResourceLoadManager29registerResourceLoadTaskGroupEN3gsl17basic_string_spanIKcLln1EEE16ResourceLoadTypeSt6vectorIS4_SaIS4_EE
    void _prepareTaskGroupToRunAgain(ResourceLoadManager::ResourceLoadTaskGroup *); // _ZN19ResourceLoadManager27_prepareTaskGroupToRunAgainEPNS_21ResourceLoadTaskGroupE
//  void queue(ResourceLoadType, std::function<TaskResult (void)>, std::function<void (void)>, unsigned int); //TODO: incomplete function definition // _ZN19ResourceLoadManager5queueE16ResourceLoadTypeSt8functionIF10TaskResultvEES1_IFvvEEj
//  void _getResourceLoadTaskGroupFor(ResourceLoadType)const; //TODO: incomplete function definition // _ZNK19ResourceLoadManager28_getResourceLoadTaskGroupForE16ResourceLoadType
//  void queueAsync(ResourceLoadType, std::function<TaskResult (void)>, unsigned int); //TODO: incomplete function definition // _ZN19ResourceLoadManager10queueAsyncE16ResourceLoadTypeSt8functionIF10TaskResultvEEj
//  void queueSync(ResourceLoadType, std::function<TaskResult (void)>, unsigned int); //TODO: incomplete function definition // _ZN19ResourceLoadManager9queueSyncE16ResourceLoadTypeSt8functionIF10TaskResultvEEj
    void update(); // _ZN19ResourceLoadManager6updateEv
    void cancel(); // _ZN19ResourceLoadManager6cancelEv
//  void cancel(ResourceLoadType); //TODO: incomplete function definition // _ZN19ResourceLoadManager6cancelE16ResourceLoadType
//  bool isComplete(ResourceLoadType)const; //TODO: incomplete function definition // _ZNK19ResourceLoadManager10isCompleteE16ResourceLoadType
    bool isComplete()const; // _ZNK19ResourceLoadManager10isCompleteEv
//  void sync(ResourceLoadType); //TODO: incomplete function definition // _ZN19ResourceLoadManager4syncE16ResourceLoadType
    void setAppSuspended(bool); // _ZN19ResourceLoadManager15setAppSuspendedEb
    bool isSuspended(); // _ZN19ResourceLoadManager11isSuspendedEv
    void queueChild(std::function<TaskResult (void)>, std::function<void (void)>, unsigned int); // _ZN19ResourceLoadManager10queueChildESt8functionIF10TaskResultvEES0_IFvvEEj
    class ResourceLoadTaskGroup {

    public:
//      ResourceLoadTaskGroup(gsl::basic_string_span<char const, -1l>, ResourceLoadType, std::vector<ResourceLoadType>, Scheduler &, WorkerPool &); //TODO: incomplete function definition // _ZN19ResourceLoadManager21ResourceLoadTaskGroupC2EN3gsl17basic_string_spanIKcLln1EEE16ResourceLoadTypeSt6vectorIS5_SaIS5_EER9SchedulerR10WorkerPool
        void _applyTaskGroupState(); // _ZN19ResourceLoadManager21ResourceLoadTaskGroup20_applyTaskGroupStateEv
        ~ResourceLoadTaskGroup(); // _ZN19ResourceLoadManager21ResourceLoadTaskGroupD2Ev
        bool isEmpty()const; // _ZNK19ResourceLoadManager21ResourceLoadTaskGroup7isEmptyEv
        void queue(std::function<TaskResult (void)>, std::function<void (void)>, unsigned int); // _ZN19ResourceLoadManager21ResourceLoadTaskGroup5queueESt8functionIF10TaskResultvEES1_IFvvEEj
        void getName()const; // _ZNK19ResourceLoadManager21ResourceLoadTaskGroup7getNameEv
        void queueAsync(std::function<TaskResult (void)>, unsigned int); // _ZN19ResourceLoadManager21ResourceLoadTaskGroup10queueAsyncESt8functionIF10TaskResultvEEj
        void queueSync(std::function<TaskResult (void)>, unsigned int); // _ZN19ResourceLoadManager21ResourceLoadTaskGroup9queueSyncESt8functionIF10TaskResultvEEj
        void start(); // _ZN19ResourceLoadManager21ResourceLoadTaskGroup5startEv
        void pause(); // _ZN19ResourceLoadManager21ResourceLoadTaskGroup5pauseEv
        void resume(); // _ZN19ResourceLoadManager21ResourceLoadTaskGroup6resumeEv
        void update(); // _ZN19ResourceLoadManager21ResourceLoadTaskGroup6updateEv
        void reset(); // _ZN19ResourceLoadManager21ResourceLoadTaskGroup5resetEv
        void sync(); // _ZN19ResourceLoadManager21ResourceLoadTaskGroup4syncEv
        void getResourceLoadType(); // _ZN19ResourceLoadManager21ResourceLoadTaskGroup19getResourceLoadTypeEv
        void getDependencies()const; // _ZNK19ResourceLoadManager21ResourceLoadTaskGroup15getDependenciesEv
        bool isRunning()const; // _ZNK19ResourceLoadManager21ResourceLoadTaskGroup9isRunningEv
    };
    class TaskGroupState {

    public:
        void start(); // _ZN19ResourceLoadManager14TaskGroupState5startEv
        void stop(); // _ZN19ResourceLoadManager14TaskGroupState4stopEv
        void pause(); // _ZN19ResourceLoadManager14TaskGroupState5pauseEv
        void resume(); // _ZN19ResourceLoadManager14TaskGroupState6resumeEv
        void getIsRunning()const; // _ZNK19ResourceLoadManager14TaskGroupState12getIsRunningEv
        void getShouldTaskGroupPause()const; // _ZNK19ResourceLoadManager14TaskGroupState23getShouldTaskGroupPauseEv
        TaskGroupState(); // _ZN19ResourceLoadManager14TaskGroupStateC2Ev
    };
};
