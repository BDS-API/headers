#pragma once

#include "./SchedulerComponent.h"


class SchedulerComponent {

public:

    SchedulerComponent(SchedulerComponent &&);
    void setCurrentEventIndex(int);
    void getCurrentEventIndex()const;
};
