#pragma once



class CommandPosition {

public:
    CommandPosition(); // _ZN15CommandPositionC2Ev
    void getPosition(CommandOrigin const&, Vec3 const&)const; // _ZNK15CommandPosition11getPositionERK13CommandOriginRK4Vec3
    void getPosition(Vec3 const&, Vec3 const&)const; // _ZNK15CommandPosition11getPositionERK4Vec3S2_
    void getBlockPos(CommandOrigin const&, Vec3 const&)const; // _ZNK15CommandPosition11getBlockPosERK13CommandOriginRK4Vec3
    void getBlockPos(Vec3 const&, Vec3 const&)const; // _ZNK15CommandPosition11getBlockPosERK4Vec3S2_
};
