#pragma once

class OceanMonumentSimpleTopRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentSimpleTopRoom::~OceanMonumentSimpleTopRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentSimpleTopRoom(void);
    OceanMonumentSimpleTopRoom(int &, std::shared_ptr<RoomDefinition> &);
};
