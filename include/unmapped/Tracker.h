#pragma once

using namespace NetworkDebugManager;

class Tracker {

public:

    void trackSend(std::string const&, unsigned long);
    void trackReceive(std::string const&, unsigned long);
    void update(void);
    void getStats(void)const;
    Tracker(void);
};
