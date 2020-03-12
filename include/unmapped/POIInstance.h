#pragma once

#include <string>


class POIInstance {

public:
    void increaseOwnerCount(unsigned long);
//  void setType(POIType); //TODO: incomplete function definition
    bool isPathable()const;
    void setEndEvent(std::string const&);
    void getPosition()const;
    void setWeight(unsigned long);
    void trySpawnParticles(BlockSource &, Random &, int)const;
    std::string getTypeName()const;
    bool isFull()const;
    void setPosition(BlockPos const&);
    void resetArrivalFailureCount();
    void decreaseOwnerCount(unsigned long);
    void getSoundEvent()const;
    void getWeight()const;
    ~POIInstance();
    void useBoundingBox()const;
    void getOwnerCapacity()const;
    void getType()const;
    void incrementArrivalFailureCount();
    void getInitEvent()const;
    void getOwnerCount()const;
//  POIInstance(BlockPos const&, bool, std::string, POIType, float, unsigned long, unsigned long, std::string, std::string, std::string); //TODO: incomplete function definition
    void getName()const;
    void getRadius()const;
    void getEndEvent()const;
    void getVillage()const;
    void setVillage(Village *);
    void setInitEvent(std::string const&);
    void getSecondBlockFullAABB(BlockSource &);
    void setRadius(float);
};
