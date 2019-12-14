#pragma once

class NetworkDebugManager::Tracker {

public:

    void trackSend(std::string const&, unsigned long);
    void trackReceive(std::string const&, unsigned long);
    void update(void);
    void getStats(void)const;
    void Tracker(void);
};
