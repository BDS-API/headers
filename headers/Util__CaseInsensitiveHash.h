#pragma once

class Util::CaseInsensitiveHash {

public:

    void operator()(gsl::basic_string_span<char const, -1l>)const;
};
