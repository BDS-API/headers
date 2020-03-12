#pragma once

#include "../bedrock/util/Vec3.h"


class BedHelper {

public:
    void getBedRotation(int)const;
    BedHelper(int, int, int, int, float, float, float, float, float, float);
    void setBedPositionOffsets(int, float &, float &, Vec3 &);
    BedHelper(int, int, int, int, float, float, float, float);
};
