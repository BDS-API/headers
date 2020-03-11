#pragma once

#include <string>


namespace PackManifest {

class CapabilityRegistry {

public:

    std::string getCapabilities();
    void _get();
    std::string getTrustedCapabilities();
//  void registerCapability(gsl::basic_string_span<char const, -1l>, bool); //TODO: incomplete function definition
    CapabilityRegistry();
    ~CapabilityRegistry();
};

}