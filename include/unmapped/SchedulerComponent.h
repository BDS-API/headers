#pragma once



class SchedulerComponent {

public:

    SchedulerComponent(SchedulerComponent&&);
    void setCurrentEventIndex(int);
    void getCurrentEventIndex()const;
};
