#pragma once

#include <mutex>


class RopePointsRef {

public:
    RopePointsRef(RopePoints const&, std::mutex &);
    ~RopePointsRef();
};
