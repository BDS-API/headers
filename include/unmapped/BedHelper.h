#pragma once



class BedHelper {

public:
    BedHelper(int, int, int, int, float, float, float, float); // _ZN9BedHelperC2Eiiiiffff
    BedHelper(int, int, int, int, float, float, float, float, float, float); // _ZN9BedHelperC2Eiiiiffffff
    void getBedRotation(int)const; // _ZNK9BedHelper14getBedRotationEi
    void setBedPositionOffsets(int, float &, float &, Vec3 &); // _ZN9BedHelper21setBedPositionOffsetsEiRfS0_R4Vec3
};
