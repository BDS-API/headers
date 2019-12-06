#pragma once

class OceanMonumentDoubleYZRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentDoubleYZRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void OceanMonumentDoubleYZRoom(void);
    void OceanMonumentDoubleYZRoom(int &, std::shared_ptr<RoomDefinition> &);
};
