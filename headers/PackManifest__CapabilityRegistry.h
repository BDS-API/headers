#pragma once

class PackManifest::CapabilityRegistry {

public:

    void _get(void);
    void registerCapability(gsl::basic_string_span<char const, -1l>, bool);
    void CapabilityRegistry(void);
};
