#pragma once



class StructureSettings {

public:
    static long DEFAULT_STRUCTURE_SIZE;
    static long DEFAULT_STRUCTURE_OFFSET;


    StructureSettings(StructureSettings const&);
    StructureSettings(StructureSettings&&);
    StructureSettings(void);
    void setPaletteName(std::string);
    void setIgnoreEntities(bool);
    void getIgnoreEntities(void)const;
    void getIgnoreBlocks(void)const;
    void setIgnoreBlocks(bool);
    void getStructureSize(void)const;
    void setStructureSize(BlockPos const&);
    void getStructureOffset(void)const;
    void setStructureOffset(BlockPos const&);
    void getPivot(void)const;
    void setPivot(Vec3 const&);
    void getLastTouchedByPlayerID(void)const;
    void setLastTouchedByPlayerID(ActorUniqueID);
    void getRotation(void)const;
    void setRotation(Rotation);
    void getMirror(void)const;
    void setMirror(Mirror);
    void getIntegrityValue(void)const;
    void setIntegrityValue(float);
    void getIntegritySeed(void)const;
    void setIntegritySeed(unsigned int);
};
