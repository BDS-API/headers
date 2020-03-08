#pragma once



class SlotData {

public:
    static long UNKNOWN_LOCATION;


    SlotData(SlotData&&);
    SlotData(SlotData const&);
    SlotData(void);
    SlotData(std::string &&, int);
    SlotData(std::string const&, int);
    void set(std::string const&, int);
    void clear();
    bool isActive()const;
};
