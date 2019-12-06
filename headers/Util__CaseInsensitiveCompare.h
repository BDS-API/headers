#pragma once

class Util::CaseInsensitiveCompare {

public:

    void operator()(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>)const;
};
