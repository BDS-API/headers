#pragma once



namespace BedrockLog {

    class LogAreaFilter {

    public:
//      LogAreaFilter(LogAreaID); //TODO: incomplete function definition
//      void filterArea(LogAreaID)const; //TODO: incomplete function definition
        void resetFilter();
//      void testFilter(LogAreaID)const; //TODO: incomplete function definition
        LogAreaFilter();
//      void toggleFilter(LogAreaID); //TODO: incomplete function definition
        LogAreaFilter(unsigned long);
//      void setFilter(LogAreaID); //TODO: incomplete function definition
        void anyFilter()const;
    };
}
