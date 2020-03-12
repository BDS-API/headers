#pragma once

#include <string>


namespace ParticleTypeMap {

    static std::string map;

//  std::string getParticleName(ParticleType); //TODO: incomplete function definition
    void getParticleTypeId(std::string const&);
    std::string getParticleNameTypeList();
};
