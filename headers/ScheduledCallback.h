#pragma once

class ScheduledCallback {

public:

    void ScheduledCallback(long, std::weak_ptr<bool>, std::function<void ()(void)>);
    void ScheduledCallback(ScheduledCallback const&);
};
