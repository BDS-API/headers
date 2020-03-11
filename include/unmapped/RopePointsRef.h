#pragma once

#include "./RopePoints.h"
#include <mutex>


class RopePointsRef {

public:

    RopePointsRef(RopePoints const&, std::mutex &);
    ~RopePointsRef();
};
