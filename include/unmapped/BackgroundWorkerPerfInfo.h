#pragma once



class BackgroundWorkerPerfInfo {

public:

    BackgroundWorkerPerfInfo(void);
    void update(std::chrono::time_point<std::chrono::_V2::system_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>);
};
