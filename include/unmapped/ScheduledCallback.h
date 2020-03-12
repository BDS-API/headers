#pragma once

#include <functional>
#include <memory>


class ScheduledCallback {

public:
    ~ScheduledCallback();
    ScheduledCallback(long, std::weak_ptr<bool>, std::function<void (void)>);
    ScheduledCallback(ScheduledCallback const&);
};
