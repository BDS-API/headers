#pragma once

#include "./HashString.h"


namespace Util::HashString {

class HashFunc {

public:

    void operator()(Util::HashString const&, Util::HashString const&)const;
    void operator()(Util::HashString const&)const;
};

}