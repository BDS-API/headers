#pragma once

class SlotData {

public:
    static long UNKNOWN_LOCATION;


    void SlotData(SlotData&&);
    void SlotData(SlotData const&);
    void SlotData(void);
    void SlotData(std::string &&, int);
    void SlotData(std::string const&, int);
    void set(std::string const&, int);
    void clear(void);
    bool isActive(void)const;
};
