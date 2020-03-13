#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class StructureSettings {

public:
    static long DEFAULT_STRUCTURE_SIZE;
    static long DEFAULT_STRUCTURE_OFFSET;

    StructureSettings(StructureSettings const&); // _ZN17StructureSettingsC2ERKS_
    ~StructureSettings(); // _ZN17StructureSettingsD2Ev
    StructureSettings(StructureSettings &&); // _ZN17StructureSettingsC2EOS_
    StructureSettings(); // _ZN17StructureSettingsC2Ev
    void operator==(StructureSettings const&)const; // _ZNK17StructureSettingseqERKS_
    void operator!=(StructureSettings const&)const; // _ZNK17StructureSettingsneERKS_
    void setPaletteName(std::string); // _ZN17StructureSettings14setPaletteNameENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getPaletteName()const; // _ZNK17StructureSettings14getPaletteNameB5cxx11Ev
    void setIgnoreEntities(bool); // _ZN17StructureSettings17setIgnoreEntitiesEb
    void getIgnoreEntities()const; // _ZNK17StructureSettings17getIgnoreEntitiesEv
    void getIgnoreBlocks()const; // _ZNK17StructureSettings15getIgnoreBlocksEv
    void setIgnoreBlocks(bool); // _ZN17StructureSettings15setIgnoreBlocksEb
    void getStructureSize()const; // _ZNK17StructureSettings16getStructureSizeEv
    void setStructureSize(BlockPos const&); // _ZN17StructureSettings16setStructureSizeERK8BlockPos
    void getStructureOffset()const; // _ZNK17StructureSettings18getStructureOffsetEv
    void setStructureOffset(BlockPos const&); // _ZN17StructureSettings18setStructureOffsetERK8BlockPos
    void getPivot()const; // _ZNK17StructureSettings8getPivotEv
    void setPivot(Vec3 const&); // _ZN17StructureSettings8setPivotERK4Vec3
    void getLastTouchedByPlayerID()const; // _ZNK17StructureSettings24getLastTouchedByPlayerIDEv
    void setLastTouchedByPlayerID(ActorUniqueID); // _ZN17StructureSettings24setLastTouchedByPlayerIDE13ActorUniqueID
    void getRotation()const; // _ZNK17StructureSettings11getRotationEv
//  void setRotation(Rotation); //TODO: incomplete function definition // _ZN17StructureSettings11setRotationE8Rotation
    void getMirror()const; // _ZNK17StructureSettings9getMirrorEv
//  void setMirror(Mirror); //TODO: incomplete function definition // _ZN17StructureSettings9setMirrorE6Mirror
    void getIntegrityValue()const; // _ZNK17StructureSettings17getIntegrityValueEv
    void setIntegrityValue(float); // _ZN17StructureSettings17setIntegrityValueEf
    void getIntegritySeed()const; // _ZNK17StructureSettings16getIntegritySeedEv
    void setIntegritySeed(unsigned int); // _ZN17StructureSettings16setIntegritySeedEj
};
