#pragma once

class OceanMonumentDoubleXRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentDoubleXRoom::~OceanMonumentDoubleXRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleXRoom(void);
    OceanMonumentDoubleXRoom(int &, std::shared_ptr<RoomDefinition> &);
};
