#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"


class StructureSettings {

public:
    static long DEFAULT_STRUCTURE_SIZE;
    static long DEFAULT_STRUCTURE_OFFSET;

    void getRotation()const;
    void getMirror()const;
    StructureSettings(StructureSettings &&);
//  void setRotation(Rotation); //TODO: incomplete function definition
    void getStructureOffset()const;
    void setStructureOffset(BlockPos const&);
    void getPivot()const;
    void setIntegrityValue(float);
//  void setMirror(Mirror); //TODO: incomplete function definition
    void getIntegritySeed()const;
    void setIgnoreBlocks(bool);
    void getIgnoreBlocks()const;
    StructureSettings();
    StructureSettings(StructureSettings const&);
    void getStructureSize()const;
    void setPivot(Vec3 const&);
    void setIntegritySeed(unsigned int);
    void setLastTouchedByPlayerID(ActorUniqueID);
    void getLastTouchedByPlayerID()const;
    ~StructureSettings();
    void getIntegrityValue()const;
    void getIgnoreEntities()const;
    void operator!=(StructureSettings const&)const;
    void setPaletteName(std::string);
    void operator==(StructureSettings const&)const;
    void setStructureSize(BlockPos const&);
    void setIgnoreEntities(bool);
    std::string getPaletteName()const;
};
