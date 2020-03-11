#pragma once



namespace BedrockLog {

class LogAreaFilter {

public:

    void resetFilter();
//  void setFilter(LogAreaID); //TODO: incomplete function definition
//  void testFilter(LogAreaID)const; //TODO: incomplete function definition
//  LogAreaFilter(LogAreaID); //TODO: incomplete function definition
//  void filterArea(LogAreaID)const; //TODO: incomplete function definition
    LogAreaFilter(unsigned long);
    LogAreaFilter();
//  void toggleFilter(LogAreaID); //TODO: incomplete function definition
    void anyFilter()const;
};

}