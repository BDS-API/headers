#pragma once



class ListTagIntAdder {

public:
    void done();
    ~ListTagIntAdder();
    void operator()(int);
    ListTagIntAdder(int);
};
