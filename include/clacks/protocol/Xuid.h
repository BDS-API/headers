#pragma once

#include <string>


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class Xuid /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual void New()const;
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void GetCachedSize()const;
                    virtual void GetMetadata()const;
                    virtual void Clear();
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void ByteSizeLong()const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    ~Xuid();
                    virtual bool IsInitialized()const;
                    std::string mutable_value();
                    Xuid(com::mojang::clacks::protocol::Xuid const&);
                    std::string value()const;
                    void GetArenaNoVirtual()const;
                    void descriptor();
                    void default_instance();
                    void Swap(com::mojang::clacks::protocol::Xuid *);
                    void SharedDtor();
                    void MergeFrom(com::mojang::clacks::protocol::Xuid const&);
                    void InternalSwap(com::mojang::clacks::protocol::Xuid *);
                    void SharedCtor();
                    void CopyFrom(com::mojang::clacks::protocol::Xuid const&);
                    Xuid();
                    void set_value(std::string const&);
                    void internal_default_instance();
                    void InitAsDefaultInstance();
                };
            }
        }
    }
}
