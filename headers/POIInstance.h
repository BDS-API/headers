#pragma once

class POIInstance {

public:

    void POIInstance(BlockPos const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, POIType, float, unsigned long, unsigned long, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    bool isPathable(void)const;
    void getPosition(void)const;
    void setPosition(BlockPos const&);
    void getVillage(void)const;
    void setVillage(Village *);
    void getType(void)const;
    void setType(POIType);
    void getRadius(void)const;
    void setRadius(float);
    void useBoundingBox(void)const;
    void getSecondBlockFullAABB(BlockSource &);
    void getWeight(void)const;
    void setWeight(unsigned long);
    void getOwnerCount(void)const;
    void getOwnerCapacity(void)const;
    void increaseOwnerCount(unsigned long);
    void decreaseOwnerCount(unsigned long);
    bool isFull(void)const;
    void getInitEvent(void)const;
    void setInitEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getEndEvent(void)const;
    void setEndEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getName(void)const;
    void getSoundEvent(void)const;
    void incrementArrivalFailureCount(void);
    void resetArrivalFailureCount(void);
    void trySpawnParticles(BlockSource &, Random &, int)const;
};
