#pragma once

class BedHelper {

public:

    void BedHelper(int, int, int, int, float, float, float, float);
    void BedHelper(int, int, int, int, float, float, float, float, float, float);
    void getBedRotation(int)const;
    void setBedPositionOffsets(int, float &, float &, Vec3 &);
};
