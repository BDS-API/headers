#pragma once



using namespace PackManifest;

class CapabilityRegistry {

public:

    void _get();
    void registerCapability(gsl::basic_string_span<char const, -1l>, bool);
    CapabilityRegistry(void);
};
