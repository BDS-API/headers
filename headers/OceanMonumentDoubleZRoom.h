#pragma once

class OceanMonumentDoubleZRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentDoubleZRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void OceanMonumentDoubleZRoom(void);
    void OceanMonumentDoubleZRoom(int &, std::shared_ptr<RoomDefinition> &);
};
