#pragma once



namespace ProfilerLite {

class ScopedData {

public:

    ~ScopedData();
    void resetRecursive();
};

}