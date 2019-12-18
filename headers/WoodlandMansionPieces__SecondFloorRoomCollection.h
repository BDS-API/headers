#pragma once

class WoodlandMansionPieces::SecondFloorRoomCollection : WoodlandMansionPieces::FloorRoomCollection {

public:
    virtual ~SecondFloorRoomCollection();
    virtual void get1x1[abi:cxx11](Random &);
    virtual void get1x1Secret[abi:cxx11](Random &);
    virtual void get1x2SideEntrance[abi:cxx11](Random &,bool);
    virtual void get1x2FrontEntrance[abi:cxx11](Random &,bool);
    virtual void get1x2Secret[abi:cxx11](Random &);
    virtual void get2x2[abi:cxx11](Random &);
    virtual void get2x2Secret[abi:cxx11](Random &);

    void SecondFloorRoomCollection(void);
};
