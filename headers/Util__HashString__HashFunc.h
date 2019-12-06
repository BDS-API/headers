#pragma once

class Util::HashString::HashFunc {

public:

    void operator()(Util::HashString const&, Util::HashString const&)const;
    void operator()(Util::HashString const&)const;
};
