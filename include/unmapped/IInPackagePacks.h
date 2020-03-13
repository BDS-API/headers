#pragma once



class IInPackagePacks {

public:
    class MetaData;

    ~IInPackagePacks(); // _ZN15IInPackagePacksD2Ev
    IInPackagePacks(); // _ZN15IInPackagePacksC2Ev
    class MetaData {

    public:
        ~MetaData(); // _ZN15IInPackagePacks8MetaDataD2Ev
        MetaData(IInPackagePacks::MetaData const&); // _ZN15IInPackagePacks8MetaDataC2ERKS0_
//      MetaData(Core::Path const&, bool, PackCategory); //TODO: incomplete function definition // _ZN15IInPackagePacks8MetaDataC2ERKN4Core4PathEb12PackCategory
    };
};
