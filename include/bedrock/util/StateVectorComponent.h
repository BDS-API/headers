#pragma once



class StateVectorComponent {

public:
    void getPos()const;
    void _setPosPrev(Vec3 const&);
    void getPosDelta();
    void _setPos(Vec3 const&);
    void getPosDelta()const;
    StateVectorComponent();
    void getPosPrev()const;
};
