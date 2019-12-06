#pragma once

class OceanMonumentEntryRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentEntryRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void OceanMonumentEntryRoom(void);
    void OceanMonumentEntryRoom(int &, std::shared_ptr<RoomDefinition> &);
};
