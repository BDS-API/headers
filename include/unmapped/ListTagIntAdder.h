#pragma once



class ListTagIntAdder {

public:
    void done();
    void operator()(int);
    ListTagIntAdder(int);
    ~ListTagIntAdder();
};
