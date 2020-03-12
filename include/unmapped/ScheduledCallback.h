#pragma once

#include <memory>
#include <functional>


class ScheduledCallback {

public:
    ~ScheduledCallback();
    ScheduledCallback(long, std::weak_ptr<bool>, std::function<void (void)>);
    ScheduledCallback(ScheduledCallback const&);
};
