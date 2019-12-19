#pragma once

class OceanMonumentEntryRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentEntryRoom::~OceanMonumentEntryRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentEntryRoom(void);
    OceanMonumentEntryRoom(int &, std::shared_ptr<RoomDefinition> &);
};
