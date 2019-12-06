#pragma once

class OceanMonumentDoubleXRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentDoubleXRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void OceanMonumentDoubleXRoom(void);
    void OceanMonumentDoubleXRoom(int &, std::shared_ptr<RoomDefinition> &);
};
