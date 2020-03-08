#pragma once

#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/actor/unmapped/ActorUniqueID"


class StructureSettings {

public:
    static long DEFAULT_STRUCTURE_SIZE;
    static long DEFAULT_STRUCTURE_OFFSET;


    StructureSettings(StructureSettings const&);
    StructureSettings(StructureSettings&&);
    StructureSettings(void);
    void setPaletteName(std::string);
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
    void setRotation(Rotation);
    void getMirror()const;
    void setMirror(Mirror);
    void getIntegrityValue()const;
    void setIntegrityValue(float);
    void getIntegritySeed()const;
    void setIntegritySeed(unsigned int);
};
