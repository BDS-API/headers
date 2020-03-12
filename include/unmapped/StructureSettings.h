#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class StructureSettings {

public:
    static long DEFAULT_STRUCTURE_SIZE;
    static long DEFAULT_STRUCTURE_OFFSET;

    void getIntegrityValue()const;
    StructureSettings();
    void setIgnoreBlocks(bool);
    StructureSettings(StructureSettings const&);
    void operator!=(StructureSettings const&)const;
    void setIgnoreEntities(bool);
    void operator==(StructureSettings const&)const;
    void getRotation()const;
    void setPaletteName(std::string);
    void getMirror()const;
    void getPivot()const;
    void setPivot(Vec3 const&);
//  void setMirror(Mirror); //TODO: incomplete function definition
    void setIntegrityValue(float);
    ~StructureSettings();
    void setStructureOffset(BlockPos const&);
    void setIntegritySeed(unsigned int);
    void getIgnoreEntities()const;
    void setLastTouchedByPlayerID(ActorUniqueID);
    StructureSettings(StructureSettings &&);
    void getIgnoreBlocks()const;
//  void setRotation(Rotation); //TODO: incomplete function definition
    void getStructureSize()const;
    void getIntegritySeed()const;
    std::string getPaletteName()const;
    void getLastTouchedByPlayerID()const;
    void getStructureOffset()const;
    void setStructureSize(BlockPos const&);
};
