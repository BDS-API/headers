#pragma once

class BedrockLog::LogAreaFilter {

public:

    void resetFilter(void);
    void setFilter(LogAreaID);
    void testFilter(LogAreaID)const;
    void LogAreaFilter(LogAreaID);
    void filterArea(LogAreaID)const;
    void LogAreaFilter(unsigned long);
    void LogAreaFilter(void);
    void toggleFilter(LogAreaID);
    void anyFilter(void)const;
};
