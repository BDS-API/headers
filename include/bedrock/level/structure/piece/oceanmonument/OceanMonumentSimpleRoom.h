#pragma once

class OceanMonumentSimpleRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentSimpleRoom::~OceanMonumentSimpleRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentSimpleRoom(void);
    OceanMonumentSimpleRoom(int &, std::shared_ptr<RoomDefinition> &, Random &);
};
