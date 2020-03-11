#pragma once



class ListTagFloatAdder {

public:

    void operator()(float);
    ListTagFloatAdder(float);
    void done();
    ~ListTagFloatAdder();
};
