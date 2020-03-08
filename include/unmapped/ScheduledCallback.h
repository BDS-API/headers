#pragma once



class ScheduledCallback {

public:

    ScheduledCallback(long, std::weak_ptr<bool>, std::function<void ()(void)>);
    ScheduledCallback(ScheduledCallback const&);
};
