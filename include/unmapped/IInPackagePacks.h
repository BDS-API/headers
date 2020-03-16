#pragma once



class IInPackagePacks {

public:
    class MetaData;

    virtual ~IInPackagePacks(); // _ZN15IInPackagePacksD2Ev
    virtual void __fake_function0(); // fake
    IInPackagePacks(); // _ZN15IInPackagePacksC2Ev
    class MetaData {

    public:
        ~MetaData(); // _ZN15IInPackagePacks8MetaDataD2Ev
        MetaData(IInPackagePacks::MetaData const&); // _ZN15IInPackagePacks8MetaDataC2ERKS0_
//        MetaData(Core::Path const&, bool, long); //TODO: incomplete function definition // _ZN15IInPackagePacks8MetaDataC2ERKN4Core4PathEb12PackCategory
    };
};
