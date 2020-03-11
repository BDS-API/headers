#pragma once

#include "../bedrock/util/Vec3.h"
#include "./StructureSettings.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include <string>


class StructureSettings {

public:
    static long DEFAULT_STRUCTURE_SIZE;
    static long DEFAULT_STRUCTURE_OFFSET;


    StructureSettings(StructureSettings const&);
    ~StructureSettings();
    StructureSettings(StructureSettings &&);
    StructureSettings();
    void operator==(StructureSettings const&)const;
    void operator!=(StructureSettings const&)const;
    void setPaletteName(std::string);
    std::string getPaletteName()const;
    void setIgnoreEntities(bool);
    void getIgnoreEntities()const;
    void getIgnoreBlocks()const;
    void setIgnoreBlocks(bool);
    void getStructureSize()const;
    void setStructureSize(BlockPos const&);
    void getStructureOffset()const;
    void setStructureOffset(BlockPos const&);
    void getPivot()const;
    void setPivot(Vec3 const&);
    void getLastTouchedByPlayerID()const;
    void setLastTouchedByPlayerID(ActorUniqueID);
    void getRotation()const;
//  void setRotation(Rotation); //TODO: incomplete function definition
    void getMirror()const;
//  void setMirror(Mirror); //TODO: incomplete function definition
    void getIntegrityValue()const;
    void setIntegrityValue(float);
    void getIntegritySeed()const;
    void setIntegritySeed(unsigned int);
};
