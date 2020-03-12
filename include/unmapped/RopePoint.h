#pragma once



class RopePoint {

public:
    RopePoint(Vec3 const&);
    void getInterpolated(float)const;
    RopePoint();
    void update(Vec3 const&);
};
