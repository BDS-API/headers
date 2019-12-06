#pragma once

class OceanMonumentSimpleRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentSimpleRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void OceanMonumentSimpleRoom(void);
    void OceanMonumentSimpleRoom(int &, std::shared_ptr<RoomDefinition> &, Random &);
};
