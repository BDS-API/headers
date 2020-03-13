#pragma once



namespace BedrockLog {

    class LogAreaFilter {

    public:
        void resetFilter(); // _ZN10BedrockLog13LogAreaFilter11resetFilterEv
//      void setFilter(LogAreaID); //TODO: incomplete function definition // _ZN10BedrockLog13LogAreaFilter9setFilterE9LogAreaID
//      void testFilter(LogAreaID)const; //TODO: incomplete function definition // _ZNK10BedrockLog13LogAreaFilter10testFilterE9LogAreaID
//      LogAreaFilter(LogAreaID); //TODO: incomplete function definition // _ZN10BedrockLog13LogAreaFilterC2E9LogAreaID
//      void filterArea(LogAreaID)const; //TODO: incomplete function definition // _ZNK10BedrockLog13LogAreaFilter10filterAreaE9LogAreaID
        LogAreaFilter(unsigned long); // _ZN10BedrockLog13LogAreaFilterC2Em
        LogAreaFilter(); // _ZN10BedrockLog13LogAreaFilterC2Ev
//      void toggleFilter(LogAreaID); //TODO: incomplete function definition // _ZN10BedrockLog13LogAreaFilter12toggleFilterE9LogAreaID
        void anyFilter()const; // _ZNK10BedrockLog13LogAreaFilter9anyFilterEv
    };
}
