#pragma once

#include "./Vec3.h"


class StateVectorComponent {

public:

    void getPos()const;
    void getPosDelta();
    void getPosDelta()const;
    void getPosPrev()const;
    StateVectorComponent();
    void _setPosPrev(Vec3 const&);
    void _setPos(Vec3 const&);
};
