#pragma once



class CompareScheduledCallback {

public:

    void operator()(ScheduledCallback const&, ScheduledCallback const&);
};
