#pragma once

#include "./Iterator.h"


namespace ReverseableIterator {

class Iterator {

public:

    void operator!=(ReverseableIterator::Iterator const&)const;
    void operator*()const;
    Iterator(int, bool);
};

}