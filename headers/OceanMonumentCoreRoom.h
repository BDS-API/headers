#pragma once

class OceanMonumentCoreRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentCoreRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void OceanMonumentCoreRoom(void);
    void OceanMonumentCoreRoom(int &, std::shared_ptr<RoomDefinition> &);
};
