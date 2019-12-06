#pragma once

class Core::ScopedLoadTimeSection {

public:

    void ScopedLoadTimeSection(gsl::basic_string_span<char const, -1l>);
    void _accumulateTime(void);
    void pause(void);
    void resume(void);
};
