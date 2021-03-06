#pragma once

class TextPacket : Packet {

    virtual ~TextPacket();
    virtual ~TextPacket();
    virtual void getId(void)const;
    virtual void _ZNK10TextPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
