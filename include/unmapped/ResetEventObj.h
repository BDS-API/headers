#pragma once



class ResetEventObj {

public:
    ~ResetEventObj(); // _ZN13ResetEventObjD2Ev
    ResetEventObj(bool, bool); // _ZN13ResetEventObjC2Ebb
    void set(); // _ZN13ResetEventObj3setEv
    void reset(); // _ZN13ResetEventObj5resetEv
    void wait(); // _ZN13ResetEventObj4waitEv
//    void wait_until(long); //TODO: incomplete function definition // _ZN13ResetEventObj10wait_untilENSt6chrono10time_pointINS0_3_V212steady_clockENS0_8durationIlSt5ratioILl1ELl1000000000EEEEEE
//    void wait_for(long const&); //TODO: incomplete function definition // _ZN13ResetEventObj8wait_forERKNSt6chrono8durationIlSt5ratioILl1ELl1000EEEE
};
