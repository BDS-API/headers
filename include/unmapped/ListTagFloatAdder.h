#pragma once



class ListTagFloatAdder {

public:
    ListTagFloatAdder(float);
    void done();
    ~ListTagFloatAdder();
    void operator()(float);
};
