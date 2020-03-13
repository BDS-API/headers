#pragma once

#include <string>
#include <memory>
#include <functional>
#include "PackSource.h"


class TreatmentPackSource : PackSource {

public:
    ~TreatmentPackSource(); // _ZN19TreatmentPackSourceD2Ev
    virtual void forEachPackConst(std::function<void (Pack const&)>)const; // _ZNK19TreatmentPackSource16forEachPackConstESt8functionIFvRK4PackEE
    virtual void forEachPack(std::function<void (Pack &)>); // _ZN19TreatmentPackSource11forEachPackESt8functionIFvR4PackEE
    virtual void getPackOrigin()const; // _ZNK19TreatmentPackSource13getPackOriginEv
    virtual void getPackType()const; // _ZNK19TreatmentPackSource11getPackTypeEv
    virtual void load(PackManifestFactory &, IContentKeyProvider const&); // _ZN19TreatmentPackSource4loadER19PackManifestFactoryRK19IContentKeyProvider
//  TreatmentPackSource(Core::Path const&, PackType); //TODO: incomplete function definition // _ZN19TreatmentPackSourceC2ERKN4Core4PathE8PackType
    std::string getPath()const; // _ZNK19TreatmentPackSource7getPathB5cxx11Ev
    bool isCopyable()const; // _ZNK19TreatmentPackSource10isCopyableEv
    void addPack(std::unique_ptr<Pack> &&); // _ZN19TreatmentPackSource7addPackEOSt10unique_ptrI4PackSt14default_deleteIS1_EE
    void removePack(Core::Path const&); // _ZN19TreatmentPackSource10removePackERKN4Core4PathE
};
