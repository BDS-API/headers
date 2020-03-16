#pragma once



class DataItem {

public:
    virtual ~DataItem(); // _ZN8DataItemD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isDataEqual(DataItem const&)const; // _ZNK8DataItem11isDataEqualERKS_
//    DataItem(long, unsigned short); //TODO: incomplete function definition // _ZN8DataItemC2E12DataItemTypet
    void getType()const; // _ZNK8DataItem7getTypeEv
    void setDirty(bool); // _ZN8DataItem8setDirtyEb
    void getId()const; // _ZNK8DataItem5getIdEv
    bool isDirty()const; // _ZNK8DataItem7isDirtyEv
};
