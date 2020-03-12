#pragma once

#include <string>


namespace com {

    namespace mojang {

        namespace clacks {

            namespace protocol {

                class LevelFileAndSize /*google::protobuf::Message*/ { //TODO: incomplete class definition

                public:
//                  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
                    virtual void Clear();
                    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
                    ~LevelFileAndSize();
//                  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
                    virtual void New()const;
//                  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
                    virtual void SetCachedSize(int)const;
//                  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//                  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
                    virtual void GetMetadata()const;
                    virtual void ByteSizeLong()const;
                    virtual void GetCachedSize()const;
                    virtual bool IsInitialized()const;
                    void SharedDtor();
                    std::string mutable_value();
                    void CopyFrom(com::mojang::clacks::protocol::LevelFileAndSize const&);
                    void Swap(com::mojang::clacks::protocol::LevelFileAndSize *);
                    void InitAsDefaultInstance();
                    void MergeFrom(com::mojang::clacks::protocol::LevelFileAndSize const&);
                    std::string value()const;
                    void GetArenaNoVirtual()const;
                    void InternalSwap(com::mojang::clacks::protocol::LevelFileAndSize *);
                    void set_value(std::string &&);
                    LevelFileAndSize(com::mojang::clacks::protocol::LevelFileAndSize const&);
                    void default_instance();
                    void SharedCtor();
                    void descriptor();
                    void internal_default_instance();
                    LevelFileAndSize();
                };
            }
        }
    }
}
