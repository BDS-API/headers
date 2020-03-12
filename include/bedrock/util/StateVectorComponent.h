#pragma once

#include "Vec3.h"


class StateVectorComponent {

public:
    void getPosPrev()const;
    StateVectorComponent();
    void getPos()const;
    void _setPos(Vec3 const&);
    void getPosDelta();
    void _setPosPrev(Vec3 const&);
    void getPosDelta()const;
};
