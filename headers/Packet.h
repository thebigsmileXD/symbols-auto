#pragma once

class Packet {

    virtual ~Packet();
    virtual ~Packet();
    virtual void getId(void)const;
    virtual void _ZNK23Packet7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
