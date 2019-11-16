#pragma once

class UpdateAttributesPacket : Packet {

    virtual ~UpdateAttributesPacket();
    virtual ~UpdateAttributesPacket();
    virtual void getId(void)const;
    virtual void _ZNK22UpdateAttributesPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
