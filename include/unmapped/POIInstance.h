#pragma once

#include <string>


class POIInstance {

public:
//  POIInstance(BlockPos const&, bool, std::string, POIType, float, unsigned long, unsigned long, std::string, std::string, std::string); //TODO: incomplete function definition // _ZN11POIInstanceC2ERK8BlockPosbNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE7POITypefmmS8_S8_S8_
    bool isPathable()const; // _ZNK11POIInstance10isPathableEv
    void getPosition()const; // _ZNK11POIInstance11getPositionEv
    void setPosition(BlockPos const&); // _ZN11POIInstance11setPositionERK8BlockPos
    void getVillage()const; // _ZNK11POIInstance10getVillageEv
    void setVillage(Village *); // _ZN11POIInstance10setVillageEP7Village
    void getType()const; // _ZNK11POIInstance7getTypeEv
//  void setType(POIType); //TODO: incomplete function definition // _ZN11POIInstance7setTypeE7POIType
    void getRadius()const; // _ZNK11POIInstance9getRadiusEv
    void setRadius(float); // _ZN11POIInstance9setRadiusEf
    void useBoundingBox()const; // _ZNK11POIInstance14useBoundingBoxEv
    void getSecondBlockFullAABB(BlockSource &); // _ZN11POIInstance22getSecondBlockFullAABBER11BlockSource
    void getWeight()const; // _ZNK11POIInstance9getWeightEv
    void setWeight(unsigned long); // _ZN11POIInstance9setWeightEm
    void getOwnerCount()const; // _ZNK11POIInstance13getOwnerCountEv
    void getOwnerCapacity()const; // _ZNK11POIInstance16getOwnerCapacityEv
    void increaseOwnerCount(unsigned long); // _ZN11POIInstance18increaseOwnerCountEm
    void decreaseOwnerCount(unsigned long); // _ZN11POIInstance18decreaseOwnerCountEm
    bool isFull()const; // _ZNK11POIInstance6isFullEv
    void getInitEvent()const; // _ZNK11POIInstance12getInitEventEv
    void setInitEvent(std::string const&); // _ZN11POIInstance12setInitEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getEndEvent()const; // _ZNK11POIInstance11getEndEventEv
    void setEndEvent(std::string const&); // _ZN11POIInstance11setEndEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getName()const; // _ZNK11POIInstance7getNameEv
    std::string getTypeName()const; // _ZNK11POIInstance11getTypeNameB5cxx11Ev
    void getSoundEvent()const; // _ZNK11POIInstance13getSoundEventEv
    void incrementArrivalFailureCount(); // _ZN11POIInstance28incrementArrivalFailureCountEv
    void resetArrivalFailureCount(); // _ZN11POIInstance24resetArrivalFailureCountEv
    void trySpawnParticles(BlockSource &, Random &, int)const; // _ZNK11POIInstance17trySpawnParticlesER11BlockSourceR6Randomi
    ~POIInstance(); // _ZN11POIInstanceD2Ev
};
