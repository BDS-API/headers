#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"


class POIInstance {

public:

    POIInstance(BlockPos const&, bool, std::string, POIType, float, unsigned long, unsigned long, std::string, std::string, std::string);
    bool isPathable()const;
    void getPosition()const;
    void setPosition(BlockPos const&);
    void getVillage()const;
    void setVillage(Village *);
    void getType()const;
    void setType(POIType);
    void getRadius()const;
    void setRadius(float);
    void useBoundingBox()const;
    void getSecondBlockFullAABB(BlockSource &);
    void getWeight()const;
    void setWeight(unsigned long);
    void getOwnerCount()const;
    void getOwnerCapacity()const;
    void increaseOwnerCount(unsigned long);
    void decreaseOwnerCount(unsigned long);
    bool isFull()const;
    void getInitEvent()const;
    void setInitEvent(std::string const&);
    void getEndEvent()const;
    void setEndEvent(std::string const&);
    void getName()const;
    void getSoundEvent()const;
    void incrementArrivalFailureCount();
    void resetArrivalFailureCount();
    void trySpawnParticles(BlockSource &, Random &, int)const;
};
