#pragma once

#include <string>


namespace ParticleTypeMap {

    static std::string map;

    void getParticleTypeId(std::string const&); // _ZN15ParticleTypeMap17getParticleTypeIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string getParticleName(ParticleType); //TODO: incomplete function definition // _ZN15ParticleTypeMap15getParticleNameB5cxx11E12ParticleType
    std::string getParticleNameTypeList(); // _ZN15ParticleTypeMap23getParticleNameTypeListB5cxx11Ev
};
