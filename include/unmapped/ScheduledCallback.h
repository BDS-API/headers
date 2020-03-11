#pragma once

#include <functional>
#include "./ScheduledCallback.h"
#include <memory>


class ScheduledCallback {

public:

//  ScheduledCallback(long, std::weak_ptr<bool>, std::function<void (void)>); //TODO: incomplete function definition
    ~ScheduledCallback();
    ScheduledCallback(ScheduledCallback const&);
};
