#pragma once

#include <mutex>


class RopePointsRef {

public:
    RopePointsRef(RopePoints const&, std::mutex &); // _ZN13RopePointsRefC2ERK10RopePointsRSt5mutex
    ~RopePointsRef(); // _ZN13RopePointsRefD2Ev
};
