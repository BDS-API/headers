#pragma once

#include "RopePoints.h"
#include <mutex>


class RopePointsRef {

public:
    ~RopePointsRef();
    RopePointsRef(RopePoints const&, std::mutex &);
};
