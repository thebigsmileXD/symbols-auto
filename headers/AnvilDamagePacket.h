#pragma once

class AnvilDamagePacket : Packet {

    virtual ~AnvilDamagePacket();
    virtual ~AnvilDamagePacket();
    virtual void getId(void)const;
    virtual void _ZNK17AnvilDamagePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
