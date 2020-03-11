#pragma once

#include "./Degree.h"


namespace mce {

class Radian {

public:

    Radian(mce::Degree);
    bool asFloat()const;
};

}