#pragma once



class DataItem {

public:
    ~DataItem();
    virtual bool isDataEqual(DataItem const&)const;
    void getType()const;
    bool isDirty()const;
    void setDirty(bool);
//  DataItem(DataItemType, unsigned short); //TODO: incomplete function definition
    void getId()const;
};
