#pragma once

#include <memory>


class PendingRemovalInfo {

public:
    ~PendingRemovalInfo();
    PendingRemovalInfo(std::unique_ptr<Actor>, int);
};
