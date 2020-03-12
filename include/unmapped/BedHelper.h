#pragma once



class BedHelper {

public:
    BedHelper(int, int, int, int, float, float, float, float, float, float);
    BedHelper(int, int, int, int, float, float, float, float);
    void setBedPositionOffsets(int, float &, float &, Vec3 &);
    void getBedRotation(int)const;
};
