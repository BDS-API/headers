#pragma once

#include <string>


class SlotData {

public:
    static long UNKNOWN_LOCATION;

    ~SlotData();
    SlotData(std::string const&, int);
    SlotData(SlotData &&);
    SlotData(SlotData const&);
    bool isActive()const;
    SlotData(std::string &&, int);
    void clear();
    void operator==(SlotData const&)const;
    SlotData();
    void set(std::string const&, int);
};
