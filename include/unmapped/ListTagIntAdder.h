#pragma once



class ListTagIntAdder {

public:

    void operator()(int);
    ListTagIntAdder(int);
    void done();
    ~ListTagIntAdder();
};
