#pragma once



class SchedulerComponent {

public:
    void getCurrentEventIndex()const;
    void setCurrentEventIndex(int);
    SchedulerComponent(SchedulerComponent &&);
};
