#pragma once

class SchedulerComponent {

public:

    void SchedulerComponent(SchedulerComponent&&);
    void setCurrentEventIndex(int);
    void getCurrentEventIndex(void)const;
};
