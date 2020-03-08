#pragma once

#include "../bedrock/util/Vec3"


class BedHelper {

public:

    BedHelper(int, int, int, int, float, float, float, float);
    BedHelper(int, int, int, int, float, float, float, float, float, float);
    void getBedRotation(int)const;
    void setBedPositionOffsets(int, float &, float &, Vec3 &);
};
