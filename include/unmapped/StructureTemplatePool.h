#pragma once

#include <string>
#include <vector>


class StructureTemplatePool {

public:
    ~StructureTemplatePool(); // _ZN21StructureTemplatePoolD2Ev
    StructureTemplatePool(); // _ZN21StructureTemplatePoolC2Ev
    StructureTemplatePool(std::string, std::string, std::vector<std::pair<StructurePoolElement const*, int>> &); // _ZN21StructureTemplatePoolC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_RSt6vectorISt4pairIPK20StructurePoolElementiESaISB_EE
    void getTemplate(unsigned long)const; // _ZNK21StructureTemplatePool11getTemplateEm
    std::string getFallback()const; // _ZNK21StructureTemplatePool11getFallbackB5cxx11Ev
    void getRandomTemplate(Random &)const; // _ZNK21StructureTemplatePool17getRandomTemplateER6Random
    void getShuffledTemplateIndexes(Random &)const; // _ZNK21StructureTemplatePool26getShuffledTemplateIndexesER6Random
    std::string getName()const; // _ZNK21StructureTemplatePool7getNameB5cxx11Ev
    void size()const; // _ZNK21StructureTemplatePool4sizeEv
    bool isValid()const; // _ZNK21StructureTemplatePool7isValidEv
};
