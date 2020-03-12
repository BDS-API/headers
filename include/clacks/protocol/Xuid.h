#pragma once

#include <string>


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class Xuid /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
                    virtual bool IsInitialized()const;
                    virtual void New()const;
                    virtual void ByteSizeLong()const;
                    virtual void GetMetadata()const;
                    virtual void GetCachedSize()const;
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    virtual void Clear();
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    ~Xuid();
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    Xuid();
                    void CopyFrom(com::mojang::clacks::protocol::Xuid const&);
                    void default_instance();
                    void InternalSwap(com::mojang::clacks::protocol::Xuid *);
                    void Swap(com::mojang::clacks::protocol::Xuid *);
                    void InitAsDefaultInstance();
                    std::string mutable_value();
                    void descriptor();
                    void GetArenaNoVirtual()const;
                    void SharedCtor();
                    void set_value(std::string const&);
                    std::string value()const;
                    Xuid(com::mojang::clacks::protocol::Xuid const&);
                    void MergeFrom(com::mojang::clacks::protocol::Xuid const&);
                    void SharedDtor();
                    void internal_default_instance();
                };
            }
        }
    }
}
