#pragma once

#include <string>


namespace ParticleTypeMap {

    static std::string map;

    void getParticleTypeId(std::string const&);
//  std::string getParticleName(ParticleType); //TODO: incomplete function definition
    std::string getParticleNameTypeList();
};
