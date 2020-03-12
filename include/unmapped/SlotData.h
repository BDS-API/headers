#pragma once

#include <string>


class SlotData {

public:
    static long UNKNOWN_LOCATION;

    SlotData(SlotData &&);
    SlotData(SlotData const&);
    bool isActive()const;
    void set(std::string const&, int);
    void clear();
    SlotData();
    void operator==(SlotData const&)const;
    SlotData(std::string const&, int);
    ~SlotData();
    SlotData(std::string &&, int);
};
