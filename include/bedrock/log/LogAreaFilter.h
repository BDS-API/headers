#pragma once



namespace BedrockLog {

    class LogAreaFilter {

    public:
//      void testFilter(LogAreaID)const; //TODO: incomplete function definition
//      void setFilter(LogAreaID); //TODO: incomplete function definition
//      void toggleFilter(LogAreaID); //TODO: incomplete function definition
        LogAreaFilter(unsigned long);
        LogAreaFilter();
        void anyFilter()const;
//      LogAreaFilter(LogAreaID); //TODO: incomplete function definition
//      void filterArea(LogAreaID)const; //TODO: incomplete function definition
        void resetFilter();
    };
}
