#pragma once



class StateVectorComponent {

public:
    void getPos()const; // _ZNK20StateVectorComponent6getPosEv
    void getPosDelta(); // _ZN20StateVectorComponent11getPosDeltaEv
    void getPosDelta()const; // _ZNK20StateVectorComponent11getPosDeltaEv
    void getPosPrev()const; // _ZNK20StateVectorComponent10getPosPrevEv
    StateVectorComponent(); // _ZN20StateVectorComponentC2Ev
    void _setPosPrev(Vec3 const&); // _ZN20StateVectorComponent11_setPosPrevERK4Vec3
    void _setPos(Vec3 const&); // _ZN20StateVectorComponent7_setPosERK4Vec3
};
