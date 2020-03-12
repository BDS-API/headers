#pragma once



class SchedulerComponent {

public:
    void setCurrentEventIndex(int);
    void getCurrentEventIndex()const;
    SchedulerComponent(SchedulerComponent &&);
};
