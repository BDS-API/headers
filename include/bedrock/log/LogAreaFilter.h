#pragma once



using namespace BedrockLog;

class LogAreaFilter {

public:

    void resetFilter();
    void setFilter(LogAreaID);
    void testFilter(LogAreaID)const;
    LogAreaFilter(LogAreaID);
    void filterArea(LogAreaID)const;
    LogAreaFilter(unsigned long);
    LogAreaFilter(void);
    void toggleFilter(LogAreaID);
    void anyFilter()const;
};
