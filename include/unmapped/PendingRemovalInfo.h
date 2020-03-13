#pragma once

#include <memory>


class PendingRemovalInfo {

public:
    PendingRemovalInfo(std::unique_ptr<Actor>, int); // _ZN18PendingRemovalInfoC2ESt10unique_ptrI5ActorSt14default_deleteIS1_EEi
    ~PendingRemovalInfo(); // _ZN18PendingRemovalInfoD2Ev
};
