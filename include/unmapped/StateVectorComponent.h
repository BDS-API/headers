#pragma once

class StateVectorComponent {

public:

    void getPos(void)const;
    void getPosDelta(void);
    void getPosDelta(void)const;
    void getPosPrev(void)const;
    StateVectorComponent(void);
    void _setPosPrev(Vec3 const&);
    void _setPos(Vec3 const&);
};
