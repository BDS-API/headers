#pragma once

#include <string>
#include "../bedrock/util/BlockPos.h"
#include "Village.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/util/Random.h"


class POIInstance {

public:
    void getName()const;
    void getOwnerCapacity()const;
    void getType()const;
    bool isPathable()const;
    void getPosition()const;
    std::string getTypeName()const;
    void trySpawnParticles(BlockSource &, Random &, int)const;
    void getRadius()const;
    void setWeight(unsigned long);
    void getVillage()const;
    void increaseOwnerCount(unsigned long);
    void getOwnerCount()const;
    void getInitEvent()const;
    void setEndEvent(std::string const&);
    void setVillage(Village *);
    void setPosition(BlockPos const&);
    void setInitEvent(std::string const&);
    void incrementArrivalFailureCount();
    void getEndEvent()const;
    void decreaseOwnerCount(unsigned long);
    void getSoundEvent()const;
    void getSecondBlockFullAABB(BlockSource &);
    bool isFull()const;
//  POIInstance(BlockPos const&, bool, std::string, POIType, float, unsigned long, unsigned long, std::string, std::string, std::string); //TODO: incomplete function definition
//  void setType(POIType); //TODO: incomplete function definition
    void setRadius(float);
    ~POIInstance();
    void resetArrivalFailureCount();
    void useBoundingBox()const;
    void getWeight()const;
};
