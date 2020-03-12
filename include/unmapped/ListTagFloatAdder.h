#pragma once



class ListTagFloatAdder {

public:
    ~ListTagFloatAdder();
    ListTagFloatAdder(float);
    void operator()(float);
    void done();
};
