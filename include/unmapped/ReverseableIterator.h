#pragma once



class ReverseableIterator {

public:
    class Iterator;

    void end()const;
    void begin()const;
    ReverseableIterator(int, int, bool);
    class Iterator {

    public:
        void operator*()const;
        void operator!=(ReverseableIterator::Iterator const&)const;
        Iterator(int, bool);
    };
};
